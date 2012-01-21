#include "stdafx.h"
#include "ActiveMethodGUIDs.h"

DWORD CActiveMethodGUIDs::m_s_dwTlsIndex = TLS_OUT_OF_INDEXES;

//*****************************************************************************
//* Function Name: ProcessInitialise
//*   Description: This static member function is called from DllMain during
//*                DLL_PROCESS_ATTACH to allocate a TLS index.
//*****************************************************************************
void CActiveMethodGUIDs::ProcessInitialise ()
{
	_ASSERTE (m_s_dwTlsIndex == TLS_OUT_OF_INDEXES);
	m_s_dwTlsIndex = TlsAlloc ();

	if (m_s_dwTlsIndex == TLS_OUT_OF_INDEXES) {
		TRACE (_T("TlsAlloc() failed with %ld.\n"), GetLastError());
	}
}


//*****************************************************************************
//* Function Name: ProcessUninitialise
//*   Description: This static member function is called from DllMain during
//*                DLL_PROCESS_DETACH to deallocate the TLS index.
//*****************************************************************************
void CActiveMethodGUIDs::ProcessUninitialise ()
{
	if (m_s_dwTlsIndex != TLS_OUT_OF_INDEXES) {
		if (!TlsFree (m_s_dwTlsIndex)) {
			TRACE (_T("TlsFree() failed with %ld.\n"), GetLastError());
		}
		m_s_dwTlsIndex = TLS_OUT_OF_INDEXES;
	}
}


//*****************************************************************************
//* Function Name: ThreadUninitialise
//*   Description: This static member function is called from DllMain during
//*                DLL_THREAD_DETACH to deallocate the CActiveMethodGUIDs::GUIDs
//*                data structure stored in the TLS index for this thread.
//*****************************************************************************
void CActiveMethodGUIDs::ThreadUninitialise ()
{
	GUIDs* l_pGUIDs = GetGUIDs ();

	if (l_pGUIDs != NULL) {
		delete l_pGUIDs;
		l_pGUIDs = NULL;
		if (!TlsSetValue (m_s_dwTlsIndex, NULL)) {
			 TRACE (_T("TlsSetValue() failed with %ld.\n"), GetLastError());
		}
	}
}


//*****************************************************************************
//* Function Name: Set
//*   Description: This static member function is called by the constructor to
//*                indicate that there is a currently active thread by setting
//*                the CLSID and IID to valid values.
//*****************************************************************************
void CActiveMethodGUIDs::Set (const CLSID& p_rclsid, const IID& p_riid)
{
	GUIDs* l_pGUIDs = GetGUIDs ();

	if (l_pGUIDs != NULL) {
		l_pGUIDs->m_clsid	= p_rclsid;
		l_pGUIDs->m_iid	= p_riid;
	}
}


//*****************************************************************************
//* Function Name: Reset
//*   Description: This static member function is called by the destructor to
//*                indicate that there is no longer a currently active thread
//*                by setting the CLSID and IID to GUID_NULL.
//*****************************************************************************
void CActiveMethodGUIDs::Reset ()
{
	GUIDs* l_pGUIDs = GetGUIDs ();

	if (l_pGUIDs != NULL) {
		l_pGUIDs->Reset ();
	}
}


//*****************************************************************************
//* Function Name: Get
//*   Description: Retrieve the CLSID and IID of the currently active method on
//*                this thread. If the GUIDs cannot be determined, GUID_NULL is
//*                returned for both CLSID and IID.
//*****************************************************************************
void CActiveMethodGUIDs::Get (CLSID& p_rclsid, IID& p_riid)
{
	p_rclsid	= GUID_NULL;
	p_riid		= GUID_NULL;

	GUIDs* l_pGUIDs = GetGUIDs ();

	if (l_pGUIDs != NULL) {
		p_rclsid	= l_pGUIDs->m_clsid;
		p_riid		= l_pGUIDs->m_iid;
	}
}


//*****************************************************************************
//* Function Name: GetGUIDs
//*   Description: Retrieve this thread's CActiveMethodGUIDs::GUIDs data
//*                structure. If the TLS index is valid but the value of the
//*                TLS index is NULL and an error did not occur then it means
//*                that this thread has not allocated a CActiveMethodGUIDs::GUIDs
//*                data structure yet so do so now and store it in the TLS index.
//*****************************************************************************
CActiveMethodGUIDs::GUIDs* CActiveMethodGUIDs::GetGUIDs ()
{
	GUIDs* l_pGUIDs = NULL;

	if (m_s_dwTlsIndex != TLS_OUT_OF_INDEXES) {
		LPVOID l_lpv = TlsGetValue (m_s_dwTlsIndex);
		if (l_lpv != NULL) {
			l_pGUIDs = reinterpret_cast<GUIDs*>(l_lpv);
		}
		else {
			DWORD l_dwLastError = GetLastError ();

			if (l_dwLastError == ERROR_SUCCESS) {

				if ((l_pGUIDs = new GUIDs) != NULL) {

					if (!TlsSetValue (m_s_dwTlsIndex, l_pGUIDs)) {
						TRACE (_T("TlsSetValue() failed with %ld.\n"), GetLastError());
						delete l_pGUIDs;
						l_pGUIDs = NULL;
					}
				}
			}
			else {
				TRACE (_T("TlsGetValue() failed with %ld.\n"), l_dwLastError);
			}
		}
	}

	return l_pGUIDs;
}
