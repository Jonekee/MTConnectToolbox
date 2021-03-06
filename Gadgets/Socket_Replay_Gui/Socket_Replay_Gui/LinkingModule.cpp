
//
// LinkingModule.cpp
//

// DISCLAIMER:
// This software was developed by U.S. Government employees as part of
// their official duties and is not subject to copyright. No warranty implied
// or intended.

/**
 This source file is a container for the major linking module in the application.
 The links are generally hard coded, but at least you know where problems occur  (personal preference).
*/
#include "stdafx.h"

#pragma comment(lib, "wininet")
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Psapi.lib")
#pragma comment(linker,                         \
    "\"/manifestdependency:type='Win32' "       \
    "name='Microsoft.Windows.Common-Controls' " \
    "version='6.0.0.0' "                        \
    "processorArchitecture='*' "                \
    "publicKeyToken='6595b64144ccf1df' "        \
    "language='*'\"")

#pragma comment(lib, "ComCtl32.lib")

#if 0
#define BOOSTLIBPATH32(X) \
    "D:\\Program Files\\NIST\\src\\boost_1_54_0\\stageX32\\lib\\" ## X
#else
#define BOOSTLIBPATH64(X) \
    "C:\\Program Files\\NIST\\src\\boost_1_54_0\\vc10\\stagex64\\lib\\" ## X
#define BOOSTLIBPATH32(X) \
    "C:\\Program Files\\NIST\\src\\boost_1_54_0\\vc10\\stagex32\\lib\\" ## X
#endif

#if defined( WIN64 ) && defined( _DEBUG )
#pragma message("DEBUG x64")
#pragma comment(lib, BOOSTLIBPATH64("libboost_system-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_thread-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_date_time-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_regex-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_chrono-vc100-mt-sgd-1_54.lib"))
#elif !defined( _DEBUG ) && defined( WIN64 )
#pragma message("RELEASE x64")
#pragma comment(lib, BOOSTLIBPATH64("libboost_thread-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_system-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_date_time-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_regex-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH64("libboost_chrono-vc100-mt-s-1_54.lib"))

#elif defined( _DEBUG ) && defined( WIN32 )
#pragma message("DEBUG x32")
#pragma comment(lib, BOOSTLIBPATH32("libboost_system-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_thread-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_date_time-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_regex-vc100-mt-sgd-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_chrono-vc100-mt-sgd-1_54.lib"))
#elif !defined( _DEBUG ) && defined( WIN32 )
#pragma message("RELEASE x32")
#pragma comment(lib, BOOSTLIBPATH32("libboost_thread-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_system-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_date_time-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_regex-vc100-mt-s-1_54.lib"))
#pragma comment(lib, BOOSTLIBPATH32("libboost_chrono-vc100-mt-s-1_54.lib"))
#endif
