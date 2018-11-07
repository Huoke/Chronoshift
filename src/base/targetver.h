/**
 * @file
 *
 * @author CCHyper
 *
 * @brief This is used to define the Windows API macros for the supported version of the Windows operating system.
 *
 * @copyright Chronoshift is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

#ifndef BASE_TARGETVER_H
#define BASE_TARGETVER_H

#include "platform.h"

#if defined(COMPILER_MSVC)

////////////////////////////////////////////////////////////////////////////////
//  For Windows 95
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0400
//#define _WIN32_WINDOWS    0x0400
//#define _WIN32_IE            0x0300
//#define TARGET_VERSION        "Windows 95"

////////////////////////////////////////////////////////////////////////////////
//  For Windows 98
////////////////////////////////////////////////////////////////////////////////
// For Windows 98
//#define WINVER                0x0410
//#define _WIN32_WINDOWS    0x0410
//#define _WIN32_IE            0x0401
//#define TARGET_VERSION        "Windows 98"

////////////////////////////////////////////////////////////////////////////////
//  For Windows NT4
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0400
//#define _WIN32_WINNT        0x0400
//#define _WIN32_IE            0x0200
//#define NTDDI_VERSION        0x05000000
//#define TARGET_VERSION        "Windows NT4"

////////////////////////////////////////////////////////////////////////////////
//  For Windows ME
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0500
//#define _WIN32_WINNT        0x0500
//#define _WIN32_IE            0x0500
//#define TARGET_VERSION        "Windows ME"

////////////////////////////////////////////////////////////////////////////////
//  For Windows 2000
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0500
//#define _WIN32_WINNT        0x0500
//#define _WIN32_IE            0x0500
//#define NTDDI_VERSION        0x05000000
//#define TARGET_VERSION        "Windows 2000"

////////////////////////////////////////////////////////////////////////////////
//  For Windows XP
////////////////////////////////////////////////////////////////////////////////
#define WINVER 0x0501
#define _WIN32_WINNT 0x0501
#define _WIN32_IE 0x0501
#define NTDDI_VERSION 0x05010000
#define TARGET_VERSION "Windows XP"

////////////////////////////////////////////////////////////////////////////////
//  For Windows Vista
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0600
//#define _WIN32_WINNT        0x0600
//#define _WIN32_IE            0x0600
//#define NTDDI_VERSION        0x06000000
//#define TARGET_VERSION        "Windows Vista"

////////////////////////////////////////////////////////////////////////////////
//  For Windows 7
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0601
//#define _WIN32_WINNT        0x0601
//#define _WIN32_IE            0x0601
//#define NTDDI_VERSION        0x06010000
//#define TARGET_VERSION        "Windows 7"

////////////////////////////////////////////////////////////////////////////////
//  For Windows 8
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0602
//#define _WIN32_WINNT        0x0602
//#define _WIN32_IE            0x0602
//#define NTDDI_VERSION        0x06020000
//#define TARGET_VERSION        "Windows 8"

////////////////////////////////////////////////////////////////////////////////
//  For Windows 10
////////////////////////////////////////////////////////////////////////////////
//#define WINVER                0x0A00
//#define _WIN32_WINNT        0x0A00
//#define _WIN32_IE            0x0A00
//#define NTDDI_VERSION        0x0A000000
//#define TARGET_VERSION        "Windows 10"

// Users of Visual Studio 10 can do this instead
//#include "SDKDDKver.h"

#endif // PLATFORM_WINDOWS

#endif // _BASE_TARGETVER_H_
