#include "stdafx.h"
#include "Utils.h"

#include <cppunit/extensions/HelperMacros.h>

//*****************************************************************************
//* Function Name: HandleComErrorException
//*   Description: Most of the unit tests use a try/catch block where we catch
//*                _com_error exceptions. This helper function contains common
//*                code for handling these exceptions. We essentially just call
//*                CPPUNIT_FAIL. However, we also include details of the
//*                _com_error exception - specifically, the HRESULT plus either
//*                the rich error information via Description() or the
//*                looked-up error message for the HRESULT via ErrorMessage().
//*****************************************************************************
void HandleComErrorException (const _com_error& p_ce)
{
	try {
		CString l_strMessage;

		_bstr_t l_sbstrDescription = p_ce.Description ();
		if (l_sbstrDescription.length () > 0) {
			l_strMessage.Format (
				_T("Caught _com_error exception with HRESULT 0x%08X; Description: %s"),
				p_ce.Error (),
				static_cast<LPCTSTR>(l_sbstrDescription));
		}
		else {
			LPCTSTR l_lpszErrorMessage = p_ce.ErrorMessage ();
			if (l_lpszErrorMessage != NULL) {
				l_strMessage.Format (
					_T("Caught _com_error exception with HRESULT 0x%08X; ErrorMessage: %s"),
					p_ce.Error (),
					l_lpszErrorMessage);
			}
			else {
				l_strMessage.Format (
					_T("Caught _com_error exception with HRESULT 0x%08X"),
					p_ce.Error ());
			}
		}

		CPPUNIT_FAIL (static_cast<LPCTSTR>(l_strMessage));
	}
	catch (const _com_error& l_ce) {
		CString l_strMessage;
		l_strMessage.Format (
			_T("HandleComErrorException - caught _com_error exception (0x%08X) - original HRESULT was 0x%08X"),
			l_ce.Error (),
			p_ce.Error ());
		CPPUNIT_FAIL (static_cast<LPCTSTR>(l_strMessage));
	}
}
