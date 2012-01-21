#ifndef _CActiveMethodGUIDs_h_
#define _CActiveMethodGUIDs_h_

class CActiveMethodGUIDs
{
public:
	CActiveMethodGUIDs (const CLSID& p_rclsid, const IID& p_riid) { Set (p_rclsid, p_riid); }
	~CActiveMethodGUIDs () { Reset (); }

	// Get a TLS slot.
	// Called from DllMain during DLL_PROCESS_ATTACH.
	static void ProcessInitialise ();

	// Return the TLS slot.
	// Called from DllMain during DLL_PROCESS_DETACH.
	static void ProcessUninitialise ();

	// Deallocate memory used by this class for the calling thread.
	// Called from DllMain during DLL_THREAD_DETACH.
	static void ThreadUninitialise ();

	// Called at the start of a COM method to set the ambient CLSID & IID.
	// Typically, this will be called via the constructor of a local
	// instance of CActiveMethodGUIDs.
	static void Set (const CLSID& p_rclsid, const IID& p_riid);

	// Called at the end of a COM method to reset the ambient CLSID & IID.
	// Typically, this will be called via the destructor of a local
	// instance of CActiveMethodGUIDs.
	static void Reset ();

	// Used to retrieve the ambient CLSID & IID during error handling.
	static void Get (CLSID& rclsid, IID& riid);

private:
	struct GUIDs {
		GUIDs ()
		{
			Reset ();
		}
		void Reset ()
		{
			m_clsid	= GUID_NULL;
			m_iid	= GUID_NULL;
		}
		CLSID	m_clsid;
		IID		m_iid;
	};

	static GUIDs* GetGUIDs ();
	static DWORD m_s_dwTlsIndex;
};

#endif
