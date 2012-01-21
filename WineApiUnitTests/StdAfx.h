#ifndef _StdAfx_h_
#define _StdAfx_h_

#pragma warning(disable:4786)

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#include <afx.h>
#include <stdio.h>
#include <tchar.h>

#import "WineApi.tlb"

#include <vector>

#define STR(x) #x
#define STR2(x) STR(x)
#define TODO(description) message(__FILE__ "(" STR2(__LINE__) ") : TODO - " ##description)

#endif
