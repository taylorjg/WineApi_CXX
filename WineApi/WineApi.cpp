// WineApi.cpp : Implementation of DLL Exports.


// Note: Proxy/Stub Information
//      To build a separate proxy/stub DLL, 
//      run nmake -f WineApips.mk in the project directory.

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "WineApi.h"
#include "WineApi_i.c"

#include "Config.h"
#include "CategoryMapService.h"
#include "CatalogService.h"
#include "ReferenceService.h"
#include "ActiveMethodGUIDs.h"

CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
	OBJECT_ENTRY(CLSID_Config,				CConfig)
	OBJECT_ENTRY(CLSID_CategoryMapService,	CCategoryMapService)
	OBJECT_ENTRY(CLSID_CatalogService,		CCatalogService)
	OBJECT_ENTRY(CLSID_ReferenceService,	CReferenceService)
END_OBJECT_MAP()

class CWineApiApp : public CWinApp
{
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWineApiApp)
	public:
    virtual BOOL InitInstance ();
    virtual int ExitInstance ();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CWineApiApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CWineApiApp, CWinApp)
	//{{AFX_MSG_MAP(CWineApiApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

CWineApiApp theApp;

//*****************************************************************************
//* Function Name: InitInstance
//*   Description: 
//*****************************************************************************
BOOL CWineApiApp::InitInstance ()
{
    _Module.Init (ObjectMap, m_hInstance, &LIBID_WineApi);
	CActiveMethodGUIDs::ProcessInitialise();
    return CWinApp::InitInstance ();
}


//*****************************************************************************
//* Function Name: ExitInstance
//*   Description: 
//*****************************************************************************
int CWineApiApp::ExitInstance ()
{
    _Module.Term ();
	CActiveMethodGUIDs::ProcessUninitialise();
    return CWinApp::ExitInstance ();
}


//*****************************************************************************
//* Function Name: DllCanUnloadNow
//*   Description: Used to determine whether the DLL can be unloaded by OLE.
//*****************************************************************************
STDAPI DllCanUnloadNow (void)
{
    AFX_MANAGE_STATE (AfxGetStaticModuleState ());
    return (AfxDllCanUnloadNow () == S_OK && _Module.GetLockCount () == 0) ? S_OK : S_FALSE;
}


//*****************************************************************************
//* Function Name: DllGetClassObject
//*   Description: Returns a class factory to create an object of the requested
//*                type.
//*****************************************************************************
STDAPI DllGetClassObject (REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _Module.GetClassObject (rclsid, riid, ppv);
}


//*****************************************************************************
//* Function Name: DllRegisterServer
//*   Description: Adds entries to the system registry.
//*****************************************************************************
STDAPI DllRegisterServer (void)
{
    // registers object, typelib and all interfaces in typelib
    return _Module.RegisterServer (TRUE);
}


//*****************************************************************************
//* Function Name: DllUnregisterServer
//*   Description: Removes entries from the system registry.
//*****************************************************************************
STDAPI DllUnregisterServer (void)
{
    return _Module.UnregisterServer (TRUE);
}
