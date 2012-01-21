# Microsoft Developer Studio Project File - Name="WineApiUnitTests" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=WineApiUnitTests - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "WineApiUnitTests.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "WineApiUnitTests.mak" CFG="WineApiUnitTests - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "WineApiUnitTests - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "WineApiUnitTests - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "WineApiUnitTests - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\WineApi" /I "..\lib\cppunit-1.12.1\include" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 /nologo /subsystem:console /debug /machine:I386

!ELSEIF  "$(CFG)" == "WineApiUnitTests - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\WineApi" /I "..\lib\cppunit-1.12.1\include" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:console /debug /machine:I386

!ENDIF 

# Begin Target

# Name "WineApiUnitTests - Win32 Release"
# Name "WineApiUnitTests - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\CatalogServiceTests.cpp
# End Source File
# Begin Source File

SOURCE=.\CategoryMapServiceTests.cpp
# End Source File
# Begin Source File

SOURCE=.\CommonServiceTests.cpp
# End Source File
# Begin Source File

SOURCE=.\ConfigTests.cpp
# End Source File
# Begin Source File

SOURCE=.\Main.cpp
# End Source File
# Begin Source File

SOURCE=.\ReferenceServiceTests.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker.cpp
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker2.cpp
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker3.cpp
# End Source File
# Begin Source File

SOURCE=.\Utils.cpp
# End Source File
# Begin Source File

SOURCE=.\WineApiObjectCollectionTests.cpp
# End Source File
# Begin Source File

SOURCE=.\WineApiStringCollectionTests.cpp
# End Source File
# Begin Source File

SOURCE=.\WineApiUnitTests.rc
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\CatalogServiceTests.h
# End Source File
# Begin Source File

SOURCE=.\CategoryMapServiceTests.h
# End Source File
# Begin Source File

SOURCE=.\CommonServiceTests.h
# End Source File
# Begin Source File

SOURCE=.\ConfigTests.h
# End Source File
# Begin Source File

SOURCE=.\ReferenceServiceTests.h
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker.h
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker2.h
# End Source File
# Begin Source File

SOURCE=.\StubUrlInvoker3.h
# End Source File
# Begin Source File

SOURCE=.\Utils.h
# End Source File
# Begin Source File

SOURCE=.\WineApiObjectCollectionTests.h
# End Source File
# Begin Source File

SOURCE=.\WineApiStringCollectionTests.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\TestData\CatalogService_10Products.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CatalogService_1StatusMessage.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CatalogService_3StatusMessages.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CatalogService_NoProducts.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CatalogService_Product95457.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CatalogService_Product95457_Bad.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\CategoryMapService_WineTypes.xml
# End Source File
# Begin Source File

SOURCE=.\TestData\ReferenceService_Gewurztraminer.xml
# End Source File
# End Group
# End Target
# End Project
