/*
 * res.rc - Common UI resources.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *  Ettore Perazzoli <ettore@comm2000.it>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#include "vice.h"

#include "debug.h"
#include "version.h"
#include "res.h"
#include "rescommon.h"
#if defined(MSVC_RC) && !defined(WATCOM_COMPILE)
#include "msvc_ver.h"
#endif

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

1 VERSIONINFO
 FILEVERSION VERSION_RC_NUMBER
 PRODUCTVERSION VERSION_RC_NUMBER
 FILEFLAGSMASK 0x3fL
#ifdef _DEBUG
 FILEFLAGS 0x1L
#else
 FILEFLAGS 0x0L
#endif
 FILEOS 0x4L
 FILETYPE 0x1L
 FILESUBTYPE 0x0L
BEGIN
    BLOCK "StringFileInfo"
    BEGIN
        BLOCK "04090000"
        BEGIN
            VALUE "CompanyName",     "Vice Team"
            VALUE "FileDescription", FILE_DESCRIPTION
            VALUE "FileVersion",     VERSION
            VALUE "ProductName",     FILE_DESCRIPTION
            VALUE "ProductVersion",  VERSION
        END
    END
    BLOCK "VarFileInfo"
    BEGIN
        VALUE "Translation", 0x409, 0
    END
END

#ifndef MSVC_RC
1 RT_MANIFEST "vice.manifest"
#else
#if MSVC_VER < 1400
1 RT_MANIFEST "vice.manifest"
#endif
#endif



IDR_MENUMONITOR MENU DISCARDABLE
BEGIN
    POPUP N_("File")
    BEGIN
        MENUITEM "", IDM_MON_OPEN
        MENUITEM "", IDM_MON_SAVE
        MENUITEM "", IDM_MON_PRINT
        MENUITEM SEPARATOR
        MENUITEM "", IDM_EXIT
    END
    POPUP N_("Debug")
    BEGIN
        MENUITEM "", IDM_MON_STOP_DEBUG
        MENUITEM "", IDM_MON_STOP_EXEC
        MENUITEM SEPARATOR
        MENUITEM "", IDM_MON_STEP_INTO
        MENUITEM "", IDM_MON_STEP_OVER
        MENUITEM "", IDM_MON_SKIP_RETURN
        MENUITEM "", IDM_MON_GOTO_CURSOR
        MENUITEM SEPARATOR
        MENUITEM "", IDM_MON_EVAL
    END
    POPUP N_("View")
    BEGIN
        MENUITEM "", IDM_MON_CURRENT
        MENUITEM SEPARATOR
        MENUITEM "", IDM_MON_WND_EVAL
        MENUITEM "", IDM_MON_WND_REG
        MENUITEM "", IDM_MON_WND_MEM
        MENUITEM "", IDM_MON_WND_DIS
        MENUITEM "", IDM_MON_WND_CONSOLE
        MENUITEM SEPARATOR
        MENUITEM "", IDM_MON_COMPUTER
        MENUITEM "", IDM_MON_DRIVE8
        MENUITEM "", IDM_MON_DRIVE9
        MENUITEM "", IDM_MON_DRIVE10
        MENUITEM "", IDM_MON_DRIVE11
    END
    POPUP N_("Window")
    BEGIN
        MENUITEM "", IDM_MON_CASCADE
        MENUITEM "", IDM_MON_TILE_VERT
        MENUITEM "", IDM_MON_TILE_HORIZ
        MENUITEM "", IDM_MON_ARRANGE_ICONS
    END
END


IDR_MONTOOLBAR           BITMAP  MOVEABLE PURE   "montb.bmp"



IDR_MONTOOLBAR 2410 DISCARDABLE
BEGIN
    1, // wVersion
    16, // wWidth
    15, // wHeight
    27, // wItemCount
    IDM_MON_OPEN,
    IDM_MON_SAVE,
    IDM_MON_PRINT,
    0,
    IDM_MON_STOP_DEBUG,
    IDM_MON_STOP_EXEC,
    IDM_MON_CURRENT,
    0,
    IDM_MON_STEP_INTO,
    IDM_MON_STEP_OVER,
    IDM_MON_SKIP_RETURN,
    IDM_MON_GOTO_CURSOR,
    0,
    IDM_MON_EVAL,
    IDM_MON_WND_EVAL,
    IDM_MON_WND_REG,
    IDM_MON_WND_MEM,
    IDM_MON_WND_DIS,
    0,
    IDM_MON_WND_CONSOLE,
    0,
    IDM_MON_COMPUTER,
    IDM_MON_DRIVE8,
    IDM_MON_DRIVE9,
    IDM_MON_DRIVE10,
    IDM_MON_DRIVE11,
    0,
    IDM_MON_HELP
END


IDI_ICON1               ICON    DISCARDABLE     "c64.ico"



IDD_ABOUT DIALOG DISCARDABLE 0, 0, 225, 220
CAPTION N_("About VICE")
BEGIN
    DEFPUSHBUTTON N_("OK"),                                               IDOK,              132,  14,  50, 14
    CTEXT         N_("VICE"),                                             IDC_STATIC,          7,   5, 118,  8
    CTEXT         N_("Versatile Commodore Emulator"),                     IDC_STATIC,          7,  18, 118,  8
    CTEXT         N_("Version 0.0"),                                      IDC_ABOUT_VERSION,   7,  31, 180,  8
    LTEXT         N_("Copyright (c) 1998-2014 Dag Lem"),                  IDC_STATIC,          5,  50, 158,  8
    LTEXT         N_("Copyright (c) 1999-2014 Andreas Matthies"),         IDC_STATIC,          5,  59, 180,  8
    LTEXT         N_("Copyright (c) 1999-2014 Martin Pottendorfer"),      IDC_STATIC,          5,  68, 180,  8
    LTEXT         N_("Copyright (c) 2005-2014 Marco van den Heuvel"),     IDC_STATIC,          5,  77, 180,  8
    LTEXT         N_("Copyright (c) 2006-2014 Christian Vogelgsang"),     IDC_STATIC,          5,  86, 180,  8
    LTEXT         N_("Copyright (c) 2007-2014 Fabrizio Gennari"),         IDC_STATIC,          5,  95, 180,  8
    LTEXT         N_("Copyright (c) 2007-2014 Daniel Kahlin"),            IDC_STATIC,          5, 104, 180,  8
    LTEXT         N_("Copyright (c) 2008-2014 Antti S. Lankila"),         IDC_STATIC,          5, 113, 180,  8
    LTEXT         N_("Copyright (c) 2009-2014 Groepaz"),                  IDC_STATIC,          5, 122, 158,  8
    LTEXT         N_("Copyright (c) 2009-2014 Ingo Korb"),                IDC_STATIC,          5, 131, 158,  8
    LTEXT         N_("Copyright (c) 2009-2014 Errol Smith"),              IDC_STATIC,          5, 140, 180,  8
    LTEXT         N_("Copyright (c) 2010-2014 Olaf Seibert"),             IDC_STATIC,          5, 149, 158,  8
    LTEXT         N_("Copyright (c) 2011-2014 Marcus Sutton"),            IDC_STATIC,          5, 158, 180,  8
    LTEXT         N_("Copyright (c) 2011-2014 Ulrich Schulz"),            IDC_STATIC,          5, 167, 180,  8
    LTEXT         N_("Copyright (c) 2011-2014 Stefan Haubenthal"),        IDC_STATIC,          5, 176, 180,  8
    LTEXT         N_("Copyright (c) 2011-2014 Thomas Giesel"),            IDC_STATIC,          5, 185, 180,  8
    LTEXT         N_("Copyright (c) 2011-2014 Kajtar Zsolt"),             IDC_STATIC,          5, 194, 180,  8
    LTEXT         N_("Copyright (c) 2012-2014 Benjamin 'BeRo' Rosseaux"), IDC_STATIC,          5, 203, 180,  8
END



IDD_DISKDEVICE_OPENCBM_DIALOG DIALOG DISCARDABLE 0, 0, 317, 190
BEGIN
    AUTOCHECKBOX    "", IDC_TOGGLE_USEIECDEVICE,
                    15, 10, 100, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECTDISK,
                    15, 30, 51, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECTDIR,
                    15, 75, 44, 10, BS_AUTORADIOBUTTON
#ifdef HAVE_OPENCBM
    AUTORADIOBUTTON "", IDC_SELECTREAL,
                    15, 120, 70, 10, BS_AUTORADIOBUTTON
#endif
    AUTORADIOBUTTON "", IDC_SELECTNONE,
                    15, 160, 33, 10, BS_AUTORADIOBUTTON
    COMBOBOX        IDC_DISKIMAGE,
                    81, 29, 190, 12, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_GROUP | WS_TABSTOP
    PUSHBUTTON      "", IDC_BROWSEDISK,
                    81, 47, 50, 14, WS_GROUP
    PUSHBUTTON      "", IDC_AUTOSTART,
                    141, 47, 50,  14, WS_GROUP
    AUTOCHECKBOX    "", IDC_TOGGLE_ATTACH_READONLY,
                    201, 47, 80, 14, BS_AUTOCHECKBOX | WS_TABSTOP
    COMBOBOX        IDC_DIR,
                    81, 74, 190, 12, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_GROUP | WS_TABSTOP
    PUSHBUTTON      "", IDC_BROWSEDIR,
                    81, 92, 50, 14, WS_GROUP
    GROUPBOX        "", IDC_DISKDEVICE_OPTIONS,
                    175, 90, 95, 63
    AUTOCHECKBOX    "", IDC_TOGGLE_READP00,
                    185, 105, 62, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_TOGGLE_WRITEP00,
                    185, 120, 61, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_TOGGLE_HIDENONP00,
                    185, 135, 73, 10, BS_AUTOCHECKBOX | WS_TABSTOP
END




IDD_DISKDEVICE_DIALOG DIALOG DISCARDABLE 0, 0, 317, 190
BEGIN
    AUTOCHECKBOX    "", IDC_TOGGLE_USEIECDEVICE,
                    15, 10, 100, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECTDISK,
                    15, 30, 51, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECTDIR,
                    15, 75, 44, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECTNONE,
                    15, 160, 33, 10, BS_AUTORADIOBUTTON
    COMBOBOX        IDC_DISKIMAGE,
                    81, 29, 190, 12, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_GROUP | WS_TABSTOP
    PUSHBUTTON      "", IDC_BROWSEDISK,
                    81, 47, 50, 14, WS_GROUP
    PUSHBUTTON      "", IDC_AUTOSTART,
                    141, 47, 50,  14, WS_GROUP
    AUTOCHECKBOX    "", IDC_TOGGLE_ATTACH_READONLY,
                    201, 47, 80, 14, BS_AUTOCHECKBOX | WS_TABSTOP
    COMBOBOX        IDC_DIR,
                    81, 74, 190, 12, CBS_DROPDOWN | CBS_SORT | WS_VSCROLL | WS_GROUP | WS_TABSTOP
    PUSHBUTTON      "", IDC_BROWSEDIR,
                    81, 92, 50, 14, WS_GROUP
    GROUPBOX        "", IDC_DISKDEVICE_OPTIONS,
                    175, 90, 95, 63
    AUTOCHECKBOX    "", IDC_TOGGLE_READP00,
                    185, 105, 62, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_TOGGLE_WRITEP00,
                    185, 120, 61, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_TOGGLE_HIDENONP00,
                    185, 135, 73, 10, BS_AUTOCHECKBOX | WS_TABSTOP
END




IDD_DATASETTE_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 170, 110
BEGIN
    AUTOCHECKBOX  "", IDC_DATASETTE_RESET_WITH_CPU,
                  7, 7, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    GROUPBOX      "", IDC_DATASETTE_MOTOR_GROUP,
                  5, 25, 160, 60
    LTEXT         "", IDC_DATASETTE_DELAY_TRIGGER,
                  42, 42, 120, 8
    COMBOBOX      IDC_DATASETTE_SPEED_TUNING,
                  9, 41, 30, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT         "", IDC_DATASETTE_DELAY_AT_ZERO,
                  60, 62, 100, 8
    COMBOBOX      IDC_DATASETTE_ZERO_GAP_DELAY,
                  9, 61, 48, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    DEFPUSHBUTTON "", IDOK,
                  30, 90, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  90, 90, 50, 14, WS_TABSTOP
END



IDD_JOY_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 226, 161
BEGIN
    GROUPBOX      "", IDC_JOYSTICK_IN_PORT_1,
                  7, 5, 102, 113
    COMBOBOX      IDC_JOY_DEV1,
                  12, 16, 93, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_SELECT_FIRE_BUTTON_1,
                  12, 34, 70, 8
    COMBOBOX      IDC_JOY_FIRE1_BUTTON,
                  12, 47, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_AUTO_FIRE_BUTTON_SETTINGS_1,
                  12, 61, 93, 8
    LTEXT         "", IDC_AUTOFIRE_SPEED_1,
                  12, 74, 70, 8
    EDITTEXT      IDC_JOY_FIRE1_SPEED,
                  87, 71, 18, 16, WS_TABSTOP | 0x2000L
    COMBOBOX      IDC_JOY_FIRE1_AXIS,
                  12, 87, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    COMBOBOX      IDC_JOY_AUTOFIRE1_BUTTON,
                  12, 102, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    GROUPBOX      "", IDC_JOYSTICK_IN_PORT_2,
                  117, 5, 102, 113
    COMBOBOX      IDC_JOY_DEV2,
                  122, 16, 93, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_SELECT_FIRE_BUTTON_2,
                  122, 34, 70, 8
    COMBOBOX      IDC_JOY_FIRE2_BUTTON,
                  122, 47, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_AUTO_FIRE_BUTTON_SETTINGS_2,
                  122, 61, 93, 8
    LTEXT         "", IDC_AUTOFIRE_SPEED_2,
                  122, 74, 70, 8
    EDITTEXT      IDC_JOY_FIRE2_SPEED,
                  197, 71, 18, 16, WS_TABSTOP | 0x2000L
    COMBOBOX      IDC_JOY_FIRE2_AXIS,
                  122, 87, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    COMBOBOX      IDC_JOY_AUTOFIRE2_BUTTON,
                  122, 102, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    PUSHBUTTON    "", IDC_JOY_CONFIG_A,
                  8, 120, 60, 14, WS_TABSTOP
    PUSHBUTTON    "", IDC_JOY_CONFIG_B,
                  159, 120, 60, 14, WS_TABSTOP
    PUSHBUTTON    "", IDC_JOY_CALIBRATE,
                  78, 120, 70, 14, WS_TABSTOP
    DEFPUSHBUTTON "", IDOK,
                  48, 141, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  129, 141, 50, 14, WS_TABSTOP
END



IDD_EXTRA_JOY_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 226, 181
BEGIN
    COMBOBOX      IDC_EXTRA_JOY_ADAPTER,
                  9, 9, 93, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_VSCROLL | WS_TABSTOP
    GROUPBOX      "", IDC_JOYSTICK_IN_PORT_1,
                  7, 25, 102, 113
    COMBOBOX      IDC_JOY_DEV1,
                  12, 36, 93, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_VSCROLL | WS_TABSTOP
    LTEXT         "", IDC_SELECT_FIRE_BUTTON_1,
                  12, 54, 70, 8
    COMBOBOX      IDC_JOY_FIRE1_BUTTON,
                  12, 67, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_AUTO_FIRE_BUTTON_SETTINGS_1,
                  12, 81, 93, 8
    LTEXT         "", IDC_AUTOFIRE_SPEED_1,
                  12, 94, 70, 8
    EDITTEXT      IDC_JOY_FIRE1_SPEED,
                  87, 91, 18, 16, WS_TABSTOP | 0x2000L
    COMBOBOX      IDC_JOY_FIRE1_AXIS,
                  12, 107, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    COMBOBOX      IDC_JOY_AUTOFIRE1_BUTTON,
                  12, 122, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    GROUPBOX      "", IDC_JOYSTICK_IN_PORT_2,
                  117, 25, 102, 113
    COMBOBOX      IDC_JOY_DEV2,
                  122, 36, 93, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_SELECT_FIRE_BUTTON_2,
                  122, 54, 70, 8
    COMBOBOX      IDC_JOY_FIRE2_BUTTON,
                  122, 67, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT         "", IDC_AUTO_FIRE_BUTTON_SETTINGS_2,
                  122, 81, 93, 8
    LTEXT         "", IDC_AUTOFIRE_SPEED_2,
                  122, 94, 70, 8
    EDITTEXT      IDC_JOY_FIRE2_SPEED,
                  197, 91, 18, 16, WS_TABSTOP | 0x2000L
    COMBOBOX      IDC_JOY_FIRE2_AXIS,
                  122, 107, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    COMBOBOX      IDC_JOY_AUTOFIRE2_BUTTON,
                  122, 122, 93, 60, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    PUSHBUTTON    "", IDC_JOY_CONFIG_A,
                  8, 140, 60, 14, WS_TABSTOP
    PUSHBUTTON    "", IDC_JOY_CONFIG_B,
                  159, 140, 60, 14, WS_TABSTOP
    PUSHBUTTON    "", IDC_JOY_CALIBRATE,
                  78, 140, 70, 14, WS_TABSTOP
    DEFPUSHBUTTON "", IDOK,
                  48, 161, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  129, 161, 50, 14, WS_TABSTOP
END




IDD_CONFIG_KEYSET_DIALOG DIALOG DISCARDABLE 0, 0, 130, 190
BEGIN
    PUSHBUTTON    "", IDC_KEYSET_SW,    7,   5,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_SW,      80,   8, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_S,     7,  23,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_S,       80,  26, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_SE,    7,  41,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_SE,      80,  44, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_W,     7,  59,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_W,       80,  62, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_E,     7,  77,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_E,       80,  80, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_NW,    7,  95,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_NW,      80,  98, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_N,     7, 113,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_N,       80, 116, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_NE,    7, 131,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_NE,      80, 134, 100,  8
    PUSHBUTTON    "", IDC_KEYSET_FIRE,  7, 149,  60, 14, WS_TABSTOP
    LTEXT         "", IDC_KEY_FIRE,    80, 152, 100,  8
    DEFPUSHBUTTON "", IDOK,            15, 170,  50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,        70, 170,  50, 14, WS_TABSTOP
END



IDD_CONFIG_KEY_DIALOG DIALOG DISCARDABLE 0, 0, 120, 24
BEGIN
END



IDD_SOUND_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 130
BEGIN
#ifdef USE_DXSOUND
    AUTORADIOBUTTON "", IDC_SOUND_DIRECTX,
                    10, 10, 60, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SOUND_WMM,
                    75, 10, 60, 10, BS_AUTORADIOBUTTON
#endif
    LTEXT           "", IDC_SOUND_OUTPUT_MODE,
                    7, 25, 118, 8
    COMBOBOX        IDC_SOUND_OUTPUT,
                    100, 22, 70, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP

    LTEXT           "", IDC_SOUND_SAMPLE_FREQUENCY,
                    7, 40, 118, 8
    COMBOBOX        IDC_SOUND_FREQ,
                    100, 37, 70, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP

    LTEXT           "", IDC_SOUND_BUFFER_SIZE,
                    7, 55, 118, 8
    COMBOBOX        IDC_SOUND_BUFFER,
                    100, 52, 70, 76, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP

    LTEXT           "", IDC_SOUND_FRAGMENT_SIZE_LABEL,
                    7, 70, 118, 8
    COMBOBOX        IDC_SOUND_FRAGMENT_SIZE,
                    100, 67, 70, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP

    LTEXT           "", IDC_SOUND_SYNCH_METHOD,
                    7, 85, 118, 8
    COMBOBOX        IDC_SOUND_SYNCH,
                    100, 82, 70, 68, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    40, 110, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    95, 110, 50, 14, WS_TABSTOP
END




IDD_OPEN_TEMPLATE DIALOG DISCARDABLE 0, 0, 350, 180
BEGIN
    GROUPBOX        "", IDC_IMAGE_CONTENTS,
                    3, 0, 185, 138
    LISTBOX         IDC_PREVIEW,
                    6, 9, 178, 125, WS_BORDER | WS_VSCROLL | LBS_NOTIFY | LBS_NOINTEGRALHEIGHT
    AUTOCHECKBOX    "", IDC_TOGGLE_ATTACH_READONLY,
                    195, 0, 80, 20, BS_AUTOCHECKBOX | WS_TABSTOP
END



IDD_OPENDISK_TEMPLATE DIALOG DISCARDABLE 0, 0, 350, 180
BEGIN
    GROUPBOX     "", IDC_IMAGE_CONTENTS,
                 3, 0, 185, 138
    LISTBOX      IDC_PREVIEW,
                 6, 9, 178, 125, WS_BORDER | WS_VSCROLL | LBS_NOTIFY | LBS_NOINTEGRALHEIGHT
    AUTOCHECKBOX "", IDC_TOGGLE_ATTACH_READONLY,
                 195, 0, 80, 20, BS_AUTOCHECKBOX | WS_TABSTOP
    GROUPBOX     "", IDC_NEW_IMAGE,
                 190, 25, 80, 90
    LTEXT        "", IDC_NAME,
                 198, 40, 20, 8
    EDITTEXT     IDC_BLANK_IMAGE_NAME,
                 195, 48, 70, 12, WS_TABSTOP
    LTEXT        "", IDC_ID,
                 198, 63, 15, 8
    EDITTEXT     IDC_BLANK_IMAGE_ID,
                 195, 71, 20, 12, WS_TABSTOP
    LTEXT        "", IDC_TYPE,
                 233, 63, 20, 8
    COMBOBOX     IDC_BLANK_IMAGE_TYPE,
                 230, 71, 35, 80, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP
    PUSHBUTTON   "", IDC_BLANK_IMAGE,
                 205, 93, 50, 14, WS_TABSTOP
END



IDD_OPENTAPE_TEMPLATE DIALOG DISCARDABLE 0, 0, 350, 180
BEGIN
    GROUPBOX   "", IDC_IMAGE_CONTENTS,
               3, 0, 185, 138
    LISTBOX    IDC_PREVIEW,
               6, 9, 178, 125, WS_BORDER | WS_VSCROLL | LBS_NOTIFY | LBS_NOINTEGRALHEIGHT
    GROUPBOX   "", IDC_NEW_TAP_IMAGE,
               190, 0, 80, 40
    PUSHBUTTON "", IDC_BLANK_IMAGE,
               205, 20, 50, 14, WS_TABSTOP
END



IDD_SNAPSHOT_SAVE_DIALOG DIALOG DISCARDABLE 0, 0, 250, 35
BEGIN
    AUTOCHECKBOX "", IDC_TOGGLE_SNAPSHOT_SAVE_DISKS,
                 10, 5, 135, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_SNAPSHOT_SAVE_ROMS,
                 10, 18, 135, 10, BS_AUTOCHECKBOX | WS_TABSTOP
END



IDD_MEDIAFILE_DIALOG DIALOG DISCARDABLE 0, 0, 300, 100
BEGIN
    LTEXT    "", IDC_SELECT_DRIVER,
             5, 0, 45, 20
    COMBOBOX IDC_SCREENSHOT_DRIVER,
             55, 0, 155, 200, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP
    GROUPBOX "", IDC_FFMPEG_SETTINGS,
             5, 20, 250, 75
    LTEXT    "", IDC_FORMAT,
             15, 37, 40, 20
    COMBOBOX IDC_SCREENSHOT_FFMPEGFORMAT,
             50, 35, 60, 200, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP
    LTEXT    "", IDC_AUDIO_CODEC,
             15, 57, 45, 15
    COMBOBOX IDC_SCREENSHOT_FFMPEGAUDIOCODEC,
             65, 55, 80, 200, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP
    LTEXT    "", IDC_AUDIO_BITRATE,
             155, 57, 25, 15
    EDITTEXT IDC_SCREENSHOT_FFMPEGAUDIOBITRATE,
             180, 55, 40, 12, WS_GROUP | WS_TABSTOP
    LTEXT    "", IDC_VIDEO_CODEC,
             15, 77, 45, 15
    COMBOBOX IDC_SCREENSHOT_FFMPEGVIDEOCODEC,
             65, 75, 80, 200, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP
    LTEXT    "", IDC_VIDEO_BITRATE,
             155, 77, 25, 15
    EDITTEXT IDC_SCREENSHOT_FFMPEGVIDEOBITRATE,
             180, 75, 40, 12, WS_GROUP | WS_TABSTOP
END



IDD_CONSOLE_SAVE_DIALOG DIALOG DISCARDABLE 0, 0, 250, 22
BEGIN
    AUTOCHECKBOX "", IDC_TOGGLE_CONSOLE_APPEND,
                 10, 5, 135, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
END



IDD_FULLSCREEN_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 180, 60
BEGIN
    AUTOCHECKBOX "", IDC_TOGGLE_VIDEO_VBLANK_SYNC,
                 9, 13, 100, 8, BS_AUTOCHECKBOX | WS_TABSTOP
END



IDD_FULLSCREEN_SETTINGS_DX9_DIALOG DIALOG DISCARDABLE  0, 0, 180,124
BEGIN
    LTEXT        "", IDC_FULLSCREEN_DRIVER,
                 9, 2, 120, 8
    COMBOBOX     IDC_FULLSCREEN_DEVICE,
                 9, 13, 150, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT        "", IDC_FULLSCREEN_DRIVER_BITDEPTH,
                 9, 32, 100, 8
    COMBOBOX     IDC_FULLSCREEN_BITDEPTH,
                 99, 28, 60, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT        "", IDC_FULLSCREEN_DRIVER_RESOLUTION,
                 9, 47, 100, 8
    COMBOBOX     IDC_FULLSCREEN_RESOLUTION,
                 99, 43, 60, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT        "", IDC_FULLSCREEN_DRIVER_REFRESHRATE,
                 9, 62, 100, 8
    COMBOBOX     IDC_FULLSCREEN_REFRESHRATE,
                 99, 58, 60, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_VIDEO_VBLANK_SYNC,
                 9, 77, 100, 8, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_VIDEO_DX_PRIMARY,
                 9, 89, 120, 8, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_KEEP_ASPECT_RATIO,
                 9, 101, 115, 8, BS_AUTOCHECKBOX | WS_TABSTOP
    EDITTEXT     IDC_ASPECT_RATIO,
                 127, 99, 32, 12, WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_TRUE_ASPECT_RATIO,
                 9, 113, 115, 8, BS_AUTOCHECKBOX | WS_TABSTOP
    EDITTEXT     IDC_GEOMETRY_ASPECT_RATIO,
                 127, 111, 32, 12, WS_TABSTOP | WS_DISABLED
END



IDD_VIDEO_AUDIO_LEAK_DIALOG DIALOG DISCARDABLE  0, 0, 180, 87
BEGIN
    AUTOCHECKBOX "", IDC_TOGGLE_VIDEO_AUDIO_LEAK,
                 12, 12, 70, 10, BS_AUTOCHECKBOX | WS_TABSTOP
END



IDD_VIDEO_COLORS_DIALOG DIALOG DISCARDABLE  0, 0, 180, 87
BEGIN
    LTEXT    "", IDC_VIDEO_COLORS_GAMMA_LABEL,
             12, 12, 40, 8
    EDITTEXT IDC_VIDEO_COLORS_GAMMA,
             85, 10, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_COLORS_TINT_LABEL,
             12, 24, 40, 8
    EDITTEXT IDC_VIDEO_COLORS_TINT,
             85, 22, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_COLORS_SATURATION_LABEL,
             12, 36, 40, 8
    EDITTEXT IDC_VIDEO_COLORS_SATURATION,
             85, 34, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_COLORS_CONTRAST_LABEL,
             12, 48, 40, 8
    EDITTEXT IDC_VIDEO_COLORS_CONTRAST,
             85, 46, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_COLORS_BRIGHTNESS_LABEL,
             12, 60, 40, 8
    EDITTEXT IDC_VIDEO_COLORS_BRIGHTNESS,
             85, 58, 32, 12, WS_TABSTOP
END



IDD_VIDEO_CRT_EMULATION_DIALOG DIALOG DISCARDABLE  0, 0, 180, 87
BEGIN
    LTEXT    "", IDC_VIDEO_CRT_SCANLINE_SHADE_LABEL,
             12, 12, 60, 8
    EDITTEXT IDC_VIDEO_CRT_SCANLINE_SHADE,
             105, 10, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_CRT_BLUR_LABEL,
             12, 24, 60, 8
    EDITTEXT IDC_VIDEO_CRT_BLUR,
             105, 22, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_CRT_ODDLINE_PHASE_LABEL,
             12, 36, 60, 8
    EDITTEXT IDC_VIDEO_CRT_ODDLINE_PHASE,
             105, 34, 32, 12, WS_TABSTOP
    LTEXT    "", IDC_VIDEO_CRT_ODDLINE_OFFSET_LABEL,
             12, 48, 60, 8
    EDITTEXT IDC_VIDEO_CRT_ODDLINE_OFFSET,
             105, 46, 32, 12, WS_TABSTOP
END



IDD_VIDEO_PALETTE_DIALOG DIALOG DISCARDABLE  0, 0, 180, 87
BEGIN
    AUTOCHECKBOX "", IDC_TOGGLE_VIDEO_EXTPALETTE,
                 12, 12, 70, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    COMBOBOX     IDC_VIDEO_CUSTOM_NAME,
                 12, 11, 120, 112, CBS_DROPDOWN | WS_VSCROLL | WS_GROUP | WS_TABSTOP
    PUSHBUTTON   "", IDC_VIDEO_CUSTOM_BROWSE,
                 12, 12+18, 50, 14, WS_GROUP
END



IDD_RENDER_FILTER_DIALOG DIALOG DISCARDABLE  0, 0, 180,124
BEGIN
    LTEXT        "", IDC_VIDEO_RENDER_FILTER_LABEL,
                 9, 12, 120, 8
    COMBOBOX     IDC_VIDEO_RENDER_FILTER,
                 9, 11, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
END



IDD_RAM_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 170, 210
BEGIN
    GROUPBOX      "", IDC_RAM_INIT_AT_POWERUP,
                  5, 5, 160, 180
    LTEXT         "", IDC_RAM_VALUE_FIRST_BYTE,
                  55, 17, 100, 8
    COMBOBOX      IDC_RAMINIT_STARTVALUE, 9, 15, 40, 80,
                  CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT         "", IDC_RAM_LENGTH_CONSTANT_VALUES,
                  55, 32, 100, 8
    COMBOBOX      IDC_RAMINIT_VALUEINVERT,
                  9, 30, 40, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT         "", IDC_RAM_LENGTH_CONSTANT_PATTERN,
                  55, 47, 100, 8
    COMBOBOX      IDC_RAMINIT_PATTERNINVERT,
                  9, 45, 40, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    EDITTEXT      IDC_RAMINIT_PREVIEW,
                  9, 60, 152, 110, (0x4L) | WS_VSCROLL | ES_READONLY
    DEFPUSHBUTTON "", IDOK, 30, 187, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL, 90, 187, 50, 14, WS_TABSTOP
END



IDD_CUSTOM_SPEED_DIALOG DIALOG DISCARDABLE  0, 0, 160, 55
BEGIN
    LTEXT         "", IDC_ENTER_CUSTOM_SPEED,
                  5, 7, 80, 8
    EDITTEXT      IDC_CUSTOM_SPEED,
                  90, 7, 60, 12, WS_TABSTOP

    DEFPUSHBUTTON N_("OK"), IDOK,
                  25, 35, 50, 14, WS_TABSTOP
    PUSHBUTTON    N_("Cancel"), IDCANCEL,
                  85, 35, 50, 14, WS_TABSTOP
END



IDD_PRINTER_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 285, 175
BEGIN
    AUTOCHECKBOX    "", IDC_PRINTER_USEIECDEVICE,
                    15, 10, 100, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_PRINTER_EMULATION,
                    15, 25, 70, 8
    COMBOBOX        IDC_PRINTER_TYPE,
                    80, 24, 55, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    PUSHBUTTON      "", IDC_PRINTER_FORMFEED,
                    220, 23, 60, 15
    GROUPBOX        "", IDC_FILESYSTEM_PRINTER,
                    5, 40, 275, 130
    LTEXT           "", IDC_PRINTER_DRVR,
                    15, 52, 70, 8
    COMBOBOX        IDC_PRINTER_DRIVER,
                    80, 51, 55, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_OUTPUT,
                    15, 72, 70, 8
    COMBOBOX        IDC_PRINTER_OUTPUT,
                    80, 71, 55, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_OUTPUT_TO_FILE,
                    15, 92, 70, 8
    COMBOBOX        IDC_PRINTER_TEXTOUT,
                    80, 91, 55, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_OUTPUT_FILE1_NAME,
                    15, 112, 70, 8
    EDITTEXT        IDC_PRINTER_OUTPUT_FILE1_NAME,
                    80, 110, 100, 18, WS_TABSTOP
    LTEXT           "", IDC_OUTPUT_FILE2_NAME,
                    15, 132, 70, 8
    EDITTEXT        IDC_PRINTER_OUTPUT_FILE2_NAME,
                    80, 130, 100, 18, WS_TABSTOP
    LTEXT           "", IDC_OUTPUT_FILE3_NAME,
                    15, 152, 70, 8
    EDITTEXT        IDC_PRINTER_OUTPUT_FILE3_NAME,
                    80, 150, 100, 18, WS_TABSTOP
END



IDD_ROMSET_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 265, 265
BEGIN
    AUTORADIOBUTTON "", IDC_ROMSET_SELECT_ARCHIVE,
                    13, 8, 70, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    EDITTEXT        IDC_ROMSET_ARCHIVE_NAME,
                    13, 23, 150, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_BROWSE,
                    178, 22, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_LOAD,
                    13, 42, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_SAVE,
                    85, 42, 60, 15
    GROUPBOX        "", IDC_ROMSET_CONFIGURATION,
                    13, 60, 230, 60
    COMBOBOX        IDC_ROMSET_ARCHIVE_ACTIVE,
                    23, 75, 90, 80, CBS_DROPDOWNLIST | CBS_SORT | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_APPLY,
                    23, 95, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_NEW,
                    95, 95, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_ARCHIVE_DELETE,
                    167, 95, 60, 15
    AUTORADIOBUTTON "", IDC_ROMSET_SELECT_FILE,
                    13, 130, 60, 10, BS_AUTORADIOBUTTON
    EDITTEXT        IDC_ROMSET_FILE_NAME,
                    13, 145, 150, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON      "", IDC_ROMSET_FILE_BROWSE,
                    178, 145, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_FILE_LOAD,
                    13, 165, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_FILE_SAVE,
                    85, 165, 60, 15
    EDITTEXT        IDC_ROMSET_PREVIEW,
                    13, 195, 180, 60, (0x4L) | WS_VSCROLL | ES_READONLY | ES_AUTOHSCROLL
    PUSHBUTTON      "", IDC_ROMSET_RESOURCE_COMPUTER,
                    200, 195, 60, 15
    PUSHBUTTON      "", IDC_ROMSET_RESOURCE_DRIVE,
                    200, 215, 60, 15
END



IDD_ROMSET_ENTER_NAME_DIALOG DIALOG DISCARDABLE  0, 0, 180, 55
BEGIN
    LTEXT         "", IDC_ENTER_CONFIGURATION_NAME,
                  5, 7, 80, 8
    EDITTEXT      IDC_ROMSET_ENTER_NAME,
                  90, 7, 80, 12, WS_TABSTOP | ES_AUTOHSCROLL
    DEFPUSHBUTTON "", IDOK,
                  35, 35, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  95, 35, 50, 14, WS_TABSTOP
END



IDD_RS232_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 180, 120
BEGIN
    LTEXT         "", IDC_RS232_DEV_1,
                  9, 8, 60, 8
    EDITTEXT      IDC_RS232_DEVICE1,
                  75, 7, 85, 12, WS_TABSTOP | ES_AUTOHSCROLL
    LTEXT         "", IDC_RS232_DEV_2,
                  9, 28, 60, 8
    EDITTEXT      IDC_RS232_DEVICE2,
                  75, 27, 85, 12, WS_TABSTOP | ES_AUTOHSCROLL
    LTEXT         "", IDC_RS232_DEV_3,
                  9, 48, 60, 8
    EDITTEXT      IDC_RS232_DEVICE3,
                  75, 47, 85, 12, WS_TABSTOP | ES_AUTOHSCROLL
    LTEXT         "", IDC_RS232_DEV_4,
                  9, 68, 60, 8
    EDITTEXT      IDC_RS232_DEVICE4,
                  75, 67, 85, 12, WS_TABSTOP | ES_AUTOHSCROLL
    DEFPUSHBUTTON "", IDOK,
                  30, 100, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  90, 100, 50, 14, WS_TABSTOP
END



IDD_NETWORK_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 260, 130
BEGIN
    LTEXT        "", IDC_CURRENT_MODE,
                 9, 8, 45, 8
    EDITTEXT     IDC_NETWORK_MODE,
                 60, 7, 75, 12, WS_TABSTOP
    LTEXT        "", IDC_SERVER_BIND,
                 9, 27, 50, 8
    EDITTEXT     IDC_NETWORK_SERVER_BIND,
                 51, 26, 75, 12, WS_TABSTOP | ES_AUTOHSCROLL
    LTEXT        "", IDC_TCP_PORT,
                 9, 42, 30, 8
    EDITTEXT     IDC_NETWORK_PORT,
                 51, 41, 75, 12, WS_TABSTOP
    PUSHBUTTON   "", IDC_NETWORK_SERVER,
                 9, 60, 51, 14, WS_TABSTOP
    PUSHBUTTON   "", IDC_NETWORK_CLIENT,
                 9, 84, 50, 14, WS_TABSTOP
    EDITTEXT     IDC_NETWORK_SERVERNAME,
                 65, 85, 75, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON   "", IDC_NETWORK_DISCONNECT,
                 27, 103, 70, 14, WS_TABSTOP
    GROUPBOX     "", IDC_CONTROL,
                 140, 5, 115, 100
    LTEXT        "", IDC_SERVER,
                 195, 15, 25, 10
    LTEXT        "", IDC_CLIENT,
                 225, 15, 25, 10
    LTEXT        "", IDC_KEYBOARD,
                 150, 30, 45, 10
    AUTOCHECKBOX "", IDC_NETWORK_KEYB_SERVER,
                 200, 30, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_NETWORK_KEYB_CLIENT,
                 230, 30, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    LTEXT        "", IDC_JOYSTICK_1,
                 150, 42, 45, 10
    AUTOCHECKBOX "", IDC_NETWORK_JOY1_SERVER,
                 200, 42, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_NETWORK_JOY1_CLIENT,
                 230, 42, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    LTEXT        "", IDC_JOYSTICK_2,
                 150, 54, 45, 10
    AUTOCHECKBOX "", IDC_NETWORK_JOY2_SERVER,
                 200, 54, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_NETWORK_JOY2_CLIENT,
                 230, 54, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    LTEXT        "", IDC_DEVICES,
                 150, 66, 45, 10
    AUTOCHECKBOX "",IDC_NETWORK_DEVC_SERVER,
                 200, 66, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_NETWORK_DEVC_CLIENT,
                 230, 66, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    LTEXT        "", IDC_SETTINGS,
                 150, 78, 45, 10
    AUTOCHECKBOX "", IDC_NETWORK_RSRC_SERVER,
                 200, 78, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_NETWORK_RSRC_CLIENT,
                 230, 78, 10, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
END



IDD_TEXTDLG DIALOG DISCARDABLE  0, 0, 279, 242
BEGIN
    DEFPUSHBUTTON   "", IDOK,
                    118, 221, 50, 14
    LTEXT           "", IDC_HEADER,
                    7, 7, 186, 10
    EDITTEXT        IDC_TEXT,
                    7, 23, 265, 187, (0x4L) | WS_VSCROLL | WS_HSCROLL
END



IDD_SOUND_RECORD_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 90
BEGIN
    LTEXT         "", IDC_SOUND_RECORD_FORMAT_LABEL,
                  9, 9, 53, 8
    COMBOBOX      IDC_SOUND_RECORD_FORMAT,
                  66, 7, 50, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT         "", IDC_SOUND_RECORD_FILE_LABEL,
                  9, 24, 50, 8
    PUSHBUTTON    "", IDC_SOUND_RECORD_BROWSE,
                  66, 24, 50, 14, 0
    EDITTEXT      IDC_SOUND_RECORD_FILE,
                  9, 40, 160, 12, WS_TABSTOP
    DEFPUSHBUTTON "", IDOK,
                  30, 64, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  90, 64, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_VICE_ERROR                  N_("VICE Error!")
  IDS_VICE_INFORMATION            N_("VICE Information")
  IDS_VICE_QUESTION               N_("VICE Question")
  IDS_FFMPEG_DLL_MISMATCH         N_("Your ffmpeg dll version doesn't match.")
  IDS_DIRECTDRAW_ERROR            N_("DirectDraw error: Code:%8x Error:%s")
  IDS_CANNOT_SAVE_SETTINGS        N_("Cannot save settings.")
  IDS_CANNOT_LOAD_SETTINGS        N_("Cannot load settings.")
  IDS_DEFAULT_SETTINGS_RESTORED   N_("Default settings restored.")
  IDS_CANNOT_ATTACH_FILE          N_("Cannot attach specified file")
  IDS_START_MONITOR               N_("%s\n\nStart monitor? (No will reset, cancel will continue)")
  IDS_VICE_CPU_JAM                N_("VICE CPU JAM")
  IDS_EXTEND_TO_40_TRACKS         N_("Extend image to 40-track format?")
  IDS_DETACHED_DEVICE_S           N_("Detached device %s")
  IDS_ATTACHED_S_TO_DEVICE_S      N_("Attached %s to device#%s")
  IDS_DETACHED_TAPE               N_("Detached tape")
  IDS_HISTORY_RECORDED_UNKNOWN    N_("History recorded with unknown release")
  IDS_HISTORY_RECORDED_VICE_S     N_("History recorded with VICE-%s")
  IDS_PAUSED                      N_("paused")
  IDS_FRAME_NUMBER                N_("frame #")
  IDS_RESUMED                     N_("resumed")
  IDS_REALLY_EXIT                 N_("Do you really want to exit?\n\nAll the data present in the emulated RAM will be lost.")
  IDS_TFE_PROBLEM                 N_("TFE/RR-Net support is not available on your system,\nthere is some important part missing. Please have a\nlook at the VICE knowledge base support page\n\n      http://vicekb.trikaliotis.net/13-005\n\nfor possible reasons and to activate networking with VICE.")
  IDS_TFE_RRNET_SUPPORT           N_("TFE/RR-Net support")
  IDS_CANNOT_AUTOSTART_FILE       N_("Cannot autostart specified file.")
  IDS_ATTACHED_TAPE_S             N_("Attached tape %s")
  IDS_SETTINGS_SAVED_SUCCESS      N_("Settings saved successfully.")
  IDS_SETTINGS_LOADED_SUCCESS     N_("Settings loaded successfully.")
  IDS_ATTACH_DISK_IMAGE           N_("Attach disk image")
  IDS_ATTACH_TAPE_IMAGE           N_("Attach tape image")
  IDS_AUTOSTART_IMAGE             N_("Autostart disk/tape image")
  IDS_INVALID_CARTRIDGE           N_("Invalid cartridge image")
  IDS_BAD_CARTRIDGE_CONFIG        N_("Bad cartridge config in UI!")
  IDS_INVALID_CARTRIDGE_IMAGE     N_("Invalid cartridge image")
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    N_("Logging console output image")
  IDS_LOG_FILES_TYPE              N_("VICE console logging files (*.dbg)")
  IDS_CANNOT_WRITE_LOGFILE_S      N_("Cannot write log file `%s'.")
  IDS_LOAD_FLIP_LIST_FILE         N_("Load flip list file")
  IDS_CANNOT_READ_FLIP_LIST       N_("Cannot read flip list file")
  IDS_SAVE_FLIP_LIST_FILE         N_("Save flip list file")
  IDS_CANNOT_WRITE_FLIP_LIST      N_("Cannot write flip list file")
  IDS_SELECT_KEYMAP_FILE          N_("Select keymap file")
  IDS_SAVE_KEYMAP_FILE            N_("Save keymap file")
  IDS_CANNOT_WRITE_KEYMAP_FILE    N_("Cannot write keymap file")
  IDS_SAVE_CONFIG_FILE            N_("Save config file")
  IDS_LOAD_CONFIG_FILE            N_("Load config file")
  IDS_MAPPING                     N_("Mapping")
  IDS_KEYBOARD_SETTINGS           N_("Keyboard settings")
  IDS_ATTACH                      N_("Attach")
  IDS_PLEASE_ENTER_A_FILENAME     N_("Please enter a filename.")
  IDS_OVERWRITE_EXISTING_IMAGE    N_("Overwrite existing image?")
  IDS_CANNOT_CREATE_IMAGE         N_("Cannot create image file!")
  IDS_COMMAND_LINE_OPTIONS        N_("Command line options")
  IDS_COMMAND_OPTIONS_AVAIL       N_("Which command line options are available?")
  IDS_NO_DRIVER_SELECT_SUPPORT    N_("No driver selected or selected driver not supported")
  IDS_CANT_WRITE_SCREENSHOT_S     N_("Cannot write screenshot file `%s'.")
  IDS_AUTOSTART_DISK_IMAGE        N_("Autostart disk image")
  IDS_SELECT_FS_DIRECTORY         N_("Select file system directory")
  IDS_PRINTER_USERPORT            N_("Printer Userport")
  IDS_PRINTER_4                   N_("Printer 4")
  IDS_PRINTER_5                   N_("Printer 5")
  IDS_PRINTER_6                   N_("Printer 6")
  IDS_DRIVE_8                     N_("Drive 8")
  IDS_DRIVE_9                     N_("Drive 9")
  IDS_DRIVE_10                    N_("Drive 10")
  IDS_DRIVE_11                    N_("Drive 11")
  IDS_PERIPHERAL_SETTINGS         N_("Peripheral settings")
  IDS_CANT_WRITE_SNAPSHOT_FILE    N_("Can't write snapshot file.")
  IDS_CANNOT_READ_SNAPSHOT_IMG    N_("Cannot read snapshot image")
  IDS_LOAD_S_ROM_IMAGE            N_("Load %s ROM image")
  IDS_SELECT_ROMSET_ARCHIVE       N_("Select romset archive")
  IDS_CANNOT_LOAD_ROMSET_ARCH     N_("Cannot load romset archive!")
  IDS_CANNOT_SAVE_ROMSET_ARCH     N_("Cannot save romset archive!")
  IDS_CANNOT_LOAD_ROMSET_FILE     N_("Cannot load romset file!")
  IDS_CANNOT_SAVE_ROMSET_FILE     N_("Cannot save romset file!")
  IDS_SELECT_ROMSET_FILE          N_("Select romset file")
  IDS_ROMSET                      N_("Romset")
  IDS_COMPUTER                    N_("Computer")
  IDS_DRIVE                       N_("Drive")
  IDS_ROM_SETTINGS                N_("ROM settings")
  IDS_SAVE_SNAPSHOT_IMAGE         N_("Save snapshot image")
  IDS_CANNOT_WRITE_SNAPSHOT_S     N_("Cannot write snapshot file `%s'.")
  IDS_LOAD_SNAPSHOT_IMAGE         N_("Load snapshot image")
  IDS_COULD_NOT_LOAD_PALETTE      N_("Could not load palette file.")
  IDS_LOAD_VICE_PALETTE_FILE      N_("Load VICE palette file")
  IDS_FULLSCREEN                  N_("Fullscreen/DirectX")
  IDS_CRT_EMULATION               N_("CRT emulation")
  IDS_RENDER_FILTER               N_("Render filter")
  IDS_SCALE2X                     N_("Scale2x")
  IDS_VIDEO_SETTINGS              N_("Video settings")
  IDS_FILE_SYSTEM                 N_("File system")
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             N_("Real IEC device")
#endif
  IDS_RS232_DEVICE_I              N_("RS232 device %i")
  IDS_ATTACH_CRT_CART_IMAGE       N_("Attach CRT cartridge image")
  IDS_ATTACH_RAW_8KB_CART_IMAGE   N_("Attach raw 8KB cartridge image")
  IDS_ATTACH_RAW_16KB_CART_IMG    N_("Attach raw 16KB cartridge image")
  IDS_ATTACH_AR_CART_IMAGE        N_("Attach raw 32KB Action Replay cartridge image")
  IDS_ATTACH_AR3_CART_IMAGE       N_("Attach raw 16KB Action Replay MK3 cartridge image")
  IDS_ATTACH_AR4_CART_IMAGE       N_("Attach raw 32KB Action Replay MK4 cartridge image")
  IDS_ATTACH_STARDOS_CART_IMAGE   N_("Attach raw 16KB Stardos cartridge image")
  IDS_ATTACH_ATOMIC_P_CART_IMG    N_("Attach raw 32KB Atomic Power cartridge image")
  IDS_ATTACH_EPYX_FL_CART_IMG     N_("Attach raw 8KB Epyx FastLoad cartridge image")
  IDS_ATTACH_IEEE488_CART_IMG     N_("Attach IEEE-488 Interface cartridge image")
  IDS_ATTACH_RETRO_R_CART_IMG     N_("Attach raw 64KB Retro Replay cartridge image")
  IDS_ATTACH_MMC_REPLAY_CART_IMG  N_("Attach raw 512kB MMC Replay cartridge image")
  IDS_ATTACH_IDE64_CART_IMAGE     N_("Attach raw 64KB IDE64 cartridge image")
  IDS_ATTACH_SS4_CART_IMAGE       N_("Attach raw 32KB Super Snapshot V4 cartridge image")
  IDS_ATTACH_SS5_CART_IMAGE       N_("Attach raw 64KB Super Snapshot V5 cartridge image")
  IDS_ATTACH_STB_CART_IMAGE       N_("Attach raw Structured Basic cartridge image")
  IDS_SELECT_CARTRIDGE_IMAGE      N_("Select cartridge file")
  IDS_MODEL                       N_("Model")
  IDS_DRIVE_SETTINGS              N_("Drive settings")
  IDS_SELECT_START_SNAP_EVENT     N_("Select start snapshot for event history")
  IDS_SELECT_END_SNAP_EVENT       N_("Select end snapshot for event history")
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          N_("Version %s *UNSTABLE* (%s)")
  IDS_VERSION_S_REV_S_UNSTABLE    N_("Version %s rev %s *UNSTABLE* (%s)")
#else
  IDS_VERSION_S                   N_("Version %s (%s)")
  IDS_VERSION_S_REV_S             N_("Version %s rev %s (%s)")
#endif
  IDS_VICE_CONTRIBUTORS           N_("VICE contributors")
  IDS_WHO_MADE_WHAT               N_("Who made what?")
  IDS_LICENSE                     N_("License")
  IDS_NO_WARRANTY                 N_("No warranty!")
  IDS_VICE_WITHOUT_WARRANTY       N_("VICE is distributed WITHOUT ANY WARRANTY!")
  IDS_PRESS_KEY_NORTHWEST         N_("Press key for NorthWest")
  IDS_PRESS_KEY_NORTH             N_("Press key for North")
  IDS_PRESS_KEY_NORTHEAST         N_("Press key for NorthEast")
  IDS_PRESS_KEY_EAST              N_("Press key for East")
  IDS_PRESS_KEY_SOUTHEAST         N_("Press key for SouthEast")
  IDS_PRESS_KEY_SOUTH             N_("Press key for South")
  IDS_PRESS_KEY_SOUTHWEST         N_("Press key for SouthWest")
  IDS_PRESS_KEY_WEST              N_("Press key for West")
  IDS_PRESS_KEY_FIRE              N_("Press key for Fire")
  IDS_NO_USERPORT_ADAPTER         N_("No userport joy adapter")
  IDS_CGA_USERPORT_ADAPTER        N_("CGA userport joy adapter")
  IDS_PET_USERPORT_ADAPTER        N_("PET userport joy adapter")
  IDS_HUMMER_USERPORT_ADAPTER     N_("Hummer userport joy adapter")
  IDS_OEM_USERPORT_ADAPTER        N_("OEM userport joy adapter")
  IDS_HIT_USERPORT_ADAPTER        N_("HIT userport joy adapter")
  IDS_KINGSOFT_USERPORT_ADAPTER   N_("Kingsoft userport joy adapter")
  IDS_STARBYTE_USERPORT_ADAPTER   N_("Starbyte userport joy adapter")
  IDS_NO_SIDCART_JOY              N_("Disable SID cartridge joystick")
  IDS_SIDCART_JOY                 N_("Enable SID cartridge joystick")
  IDS_NUMPAD_AND_RCTRL            N_("Numpad + RCtrl")
  IDS_KEYSET_A                    N_("Keyset A")
  IDS_KEYSET_B                    N_("Keyset B")
  IDS_ALL_BUTTONS_AS_FIRE         N_("All buttons used as fire")
  IDS_NUMERIC_SEE_ABOVE           N_("numeric (see above)")
  IDS_NO_BUTTON_NO_AUTOFIRE       N_("No button - Autofire disabled")
  IDS_ALL_FILES_FILTER            N_("All files (*.*)")
  IDS_PALETTE_FILES_FILTER        N_("VICE palette files (*.vpl)")
  IDS_SNAPSHOT_FILES_FILTER       N_("VICE snapshot files (*.vsf)")
  IDS_CBM_IMAGE_FILES_FILTER      N_("CBM files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)")
  IDS_IDE64_IMAGE_FILES_FILTER    N_("IDE64 files (*.fdd;*.hdd;*.iso;*.cfa)")
  IDS_DISK_IMAGE_FILES_FILTER     N_("Disk image files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)")
  IDS_TAPE_IMAGE_FILES_FILTER     N_("Tape image files (*.t64;*.tap)")
  IDS_ZIPPED_FILES_FILTER         N_("Zipped files (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)")
  IDS_CRT_FILES_FILTER            N_("CRT cartridge image files (*.crt)")
  IDS_RAW_CART_FILES_FILTER       N_("Raw cartridge image files (*.bin)")
  IDS_FLIP_LIST_FILES_FILTER      N_("VICE flip list files (*.vfl)")
  IDS_ROMSET_FILES_FILTER         N_("VICE romset files (*.vrs)")
  IDS_ROMSET_ARCHIVES_FILTER      N_("VICE romset archives (*.vra)")
  IDS_KEYMAP_FILES_FILTER         N_("VICE keymap files (*.vkm)")
  IDS_PRGP00_FILES_FILTER         N_("Commodore emulator files (*.prg;*.p00)")
  IDS_FLEXIBLE                    N_("Flexible")
  IDS_ADJUSTING                   N_("Adjusting")
  IDS_EXACT                       N_("Exact")
  IDS_SOUND_DRIVER_DIRECTX        N_("Sound driver: DirectX")
  IDS_SOUND_DRIVER_WMM            N_("Sound driver: WMM")
  IDS_SYSTEM                      N_("System")
  IDS_MONO                        N_("Mono")
  IDS_STEREO                      N_("Stereo")
  IDS_MEDIA_FILES_FILTER          N_("Media files (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)")
  IDS_SPACE_KB                    N_(" kB")
  IDS_CONFIGURE_KEYSET_A          N_("Configure Keyset A")
  IDS_CONFIGURE_KEYSET_B          N_("Configure Keyset B")
  IDS_SAVE_MEDIA_IMAGE            N_("Save media file")
  IDS_S_AT_D_SPEED                N_("%s at %d%% speed, %d fps%s")
  IDS_TAPE                        N_("Tape")
  IDS_JOYSTICK_C                  N_("Joystick")
  IDS_RECORDING                   N_("Recording\n%02d:%02d")
  IDS_PLAYBACK                    N_("Playback\n%02d:%02d (%02d:%02d)")
  IDS_UNKNOWN                     N_("Unknown")
  IDS_P_NUMBER                    N_("number")
  IDS_SET_INPUT_JOYSTICK_1        N_("Set input device for joystick #1")
  IDS_SET_INPUT_JOYSTICK_2        N_("Set input device for joystick #2")
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  N_("Set input device for extra joystick #1")
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  N_("Set input device for extra joystick #2")
  IDS_SAVE_SETTINGS_ON_EXIT       N_("Save settings on exit")
  IDS_NO_SAVE_SETTINGS_ON_EXIT    N_("Never save settings on exit")
  IDS_CONFIRM_QUIT_VICE           N_("Confirm quitting VICE")
  IDS_NO_CONFIRM_QUIT_VICE        N_("Never confirm quitting VICE")
  IDS_USE_ALL_CPU_SMP             N_("Use all CPU on SMP systems")
  IDS_USE_FIRST_CPU_SMP           N_("Use only first CPU on SMP systems")
  IDS_START_VICE_FULLSCREEN_MODE  N_("Start VICE in fullscreen mode")
  IDS_DISABLE_DX9                 N_("Disable DirectX9 video driver")
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         N_("An unexpected error occured. Received signal %d (%s).")
#else
  IDS_RECEIVED_SIGNAL_D           N_("An unexpected error occured. Received signal %d.")
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        N_("Idle")
  IDS_SERVER_LISTENING            N_("Server listening")
  IDS_CONNECTED_SERVER            N_("Connected server")
  IDS_CONNECTED_CLIENT            N_("Connected client")
  IDS_INVALID_PORT_NUMBER         N_("Invalid port number")
  IDS_ERROR_STARTING_SERVER       N_("An error occured starting the server.")
  IDS_ERROR_CONNECTING_CLIENT     N_("An error occured connecting the client.")
#endif
  IDS_SOUND_RECORDING_STARTED     N_("Sound Recording started")
  IDS_SOUND_RECORDING_STOPPED     N_("Sound Recording stopped")
  IDS_OK                          N_("OK")
  IDS_CANCEL                      N_("Cancel")
  IDS_NONE                        N_("None")
  IDS_BROWSE                      N_("Browse")
  IDS_SPECIFY_MIDI_IN             N_("Specify MIDI-In device")
  IDS_SPECIFY_MIDI_OUT            N_("Specify MIDI-Out device")
  IDS_ERROR_SAVING_EASYFLASH_CRT  N_("Error saving EasyFlash crt file")
  IDS_NO_EASYFLASH_CART_INSERTED  N_("No EasyFlash cartridge inserted")
  IDS_DATASETTE_CAPTION           N_("Datasette settings")
  IDS_DATASETTE_RESET_WITH_CPU    N_("Reset Datasette with CPU")
  IDS_DATASETTE_MOTOR_GROUP       N_("Speed of motor while reading")
  IDS_DATASETTE_DELAY_TRIGGER     N_("cycle(s) additional delay each trigger")
  IDS_DATASETTE_DELAY_AT_ZERO     N_("Datasette zero gap delay")
  IDS_TOGGLE_USEIECDEVICE         N_("Use IEC Device")
  IDS_SELECTDISK                  N_("Disk image")
  IDS_SELECTDIR                   N_("Directory")
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  N_("Real IEC device")
#endif
  IDS_SELECTNONE                  N_("None")
  IDS_AUTOSTART                   N_("Autostart")
  IDS_BROWSEDIR                   N_("Browse")
  IDS_TOGGLE_ATTACH_READONLY      N_("Attach read only")
  IDS_TOGGLE_READP00              N_("Read P00 files")
  IDS_TOGGLE_WRITEP00             N_("Write P00 files")
  IDS_TOGGLE_HIDENONP00           N_("Hide non-P00 files")
  IDS_JOYSTICK_CAPTION            N_("Joystick settings")
  IDS_JOYSTICK_IN_PORT_1          N_("Joystick in port #1")
  IDS_SELECT_FIRE_BUTTON          N_("Select fire button")
  IDS_AUTO_FIRE_BUTTON_SETTINGS   N_("Auto fire button settings")
  IDS_AUTOFIRE_SPEED              N_("Autofire speed")
  IDS_JOYSTICK_IN_PORT_2          N_("Joystick in port #2")
  IDS_JOY_CONFIG_A                N_("Configure Keyset A")
  IDS_JOY_CONFIG_B                N_("Configure Keyset B")
  IDS_JOY_CALIBRATE               N_("Calibrate Joystick(s)")
  IDS_EXTRA_JOYSTICK_CAPTION      N_("Extra joystick settings")
  IDS_JOYSTICK_IN_EXTRA_PORT_1    N_("Joystick in extra port #1")
  IDS_JOYSTICK_IN_EXTRA_PORT_2    N_("Joystick in extra port #2")
  IDS_KEYSET_SW                   N_("South West")
  IDS_KEYSET_S                    N_("South")
  IDS_KEYSET_SE                   N_("South East")
  IDS_KEYSET_W                    N_("West")
  IDS_KEYSET_E                    N_("East")
  IDS_KEYSET_NW                   N_("North West")
  IDS_KEYSET_N                    N_("North")
  IDS_KEYSET_NE                   N_("North East")
  IDS_KEYSET_FIRE                 N_("Fire button")
  IDS_SOUND_CAPTION               N_("Configure Sound Device Settings")
  IDS_SOUND_DIRECTX               N_("DirectX driver")
  IDS_SOUND_WMM                   N_("WMM driver")
  IDS_SOUND_OUTPUT_MODE           N_("Sound output mode")
  IDS_SOUND_SAMPLE_FREQUENCY      N_("Sample rate")
  IDS_SOUND_BUFFER_SIZE           N_("Sound Buffer Size")
  IDS_SOUND_FRAGMENT_SIZE_LABEL   N_("Sound Fragment Size")
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL N_("Very small")
  IDS_SOUND_FRAGMENT_SIZE_SMALL   N_("Small")
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  N_("Medium")
  IDS_SOUND_FRAGMENT_SIZE_LARGE   N_("Large")
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE N_("Very large")
  IDS_SOUND_SYNCH_METHOD          N_("Synchronization Method")
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  N_("Save currently attached disk images")
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   N_("Save currently loaded ROM images")
  IDS_FULLSCREEN_DRIVER           N_("Driver")
  IDS_FULLSCREEN_DRVR_BITDEPTH    N_("Bitdepth")
  IDS_FULLSCREEN_DRVR_RESOLUTION  N_("Resolution")
  IDS_FULLSCREEN_DRVR_REFRESHRATE N_("Refresh rate")
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    N_("VBLANK synchronization")
  IDS_TOGGLE_VIDEO_DX_PRIMARY     N_("Render to DX Primary surface")
  IDS_TOGGLE_KEEP_ASPECT_RATIO    N_("Keep aspect ratio")
  IDS_TOGGLE_TRUE_ASPECT_RATIO    N_("True aspect ratio")
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F N_("Value %.3f for %s is out of range, using %.3f instead")
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D N_("Value %d for %s is out of range, using %d instead")
  IDS_AUDIO_LEAK                  N_("Audio leak")
  IDS_COLORS_GAMMA                N_("Gamma")
  IDS_COLORS_TINT                 N_("Tint")
  IDS_COLORS_SATURATION           N_("Saturation")
  IDS_COLORS_CONTRAST             N_("Contrast")
  IDS_COLORS_BRIGHTNESS           N_("Brightness")
  IDS_CRT_SCANLINE_SHADE          N_("Scanline shade")
  IDS_CRT_BLUR                    N_("Blur")
  IDS_CRT_ODDLINE_PHASE           N_("Odd lines phase")
  IDS_CRT_ODDLINE_OFFSET          N_("Odd lines offset")
  IDS_VICII_PALETTE               N_("VICII Palette")
  IDS_VIC_PALETTE                 N_("VIC Palette")
  IDS_CRTC_PALETTE                N_("CRTC Palette")
  IDS_VDC_PALETTE                 N_("VDC Palette")
  IDS_TED_PALETTE                 N_("TED Palette")
  IDS_VICII_COLORS                N_("VICII Colors")
  IDS_VIC_COLORS                  N_("VIC Colors")
  IDS_CRTC_COLORS                 N_("CRTC Colors")
  IDS_VDC_COLORS                  N_("VDC Colors")
  IDS_TED_COLORS                  N_("TED Colors")
  IDS_VICII_CRT_EMULATION         N_("VICII CRT emulation")
  IDS_VIC_CRT_EMULATION           N_("VIC CRT emulation")
  IDS_CRTC_CRT_EMULATION          N_("CRTC CRT emulation")
  IDS_VDC_CRT_EMULATION           N_("VDC CRT emulation")
  IDS_TED_CRT_EMULATION           N_("TED CRT emulation")
  IDS_VICII_RENDER_FILTER         N_("VICII Render filter")
  IDS_VIC_RENDER_FILTER           N_("VIC Render filter")
  IDS_CRTC_RENDER_FILTER          N_("CRTC Render filter")
  IDS_VDC_RENDER_FILTER           N_("VDC Render filter")
  IDS_TED_RENDER_FILTER           N_("TED Render filter")
  IDS_VICII_AUDIO_LEAK            N_("VICII Audio leak")
  IDS_VIC_AUDIO_LEAK              N_("VIC Audio leak")
  IDS_CRTC_AUDIO_LEAK             N_("CRTC Audio leak")
  IDS_VDC_AUDIO_LEAK              N_("VDC Audio leak")
  IDS_TED_AUDIO_LEAK              N_("TED Audio leak")
  IDS_TOGGLE_VIDEO_EXTPALETTE     N_("External Palette")
  IDS_RAM_CAPTION                 N_("RAM settings")
  IDS_RAM_INIT_AT_POWERUP         N_("Initialization at powerup")
  IDS_RAM_VALUE_FIRST_BYTE        N_("Value of first byte")
  IDS_RAM_LENGTH_CONSTANT_VALUES  N_("Length of constant values")
  IDS_RAM_LENGTH_CONSTANT_PATTERN N_("Length of constant pattern")
  IDS_PRINTER_EMULATION           N_("Printer emulation")
  IDS_PRINTER_FORMFEED            N_("Send Formfeed")
  IDS_FILESYSTEM_PRINTER          N_("File system printer")
  IDS_PRINTER_DRVR                N_("Printer driver")
  IDS_OUTPUT                      N_("Output")
  IDS_OUTPUT_TO_FILE              N_("Output to file #")
  IDS_OUTPUT_FILE1_NAME           N_("Output file #1 name")
  IDS_OUTPUT_FILE2_NAME           N_("Output file #2 name")
  IDS_OUTPUT_FILE3_NAME           N_("Output file #3 name")
  IDS_ROMSET_SELECT_ARCHIVE       N_("Romset archive")
  IDS_ROMSET_ARCHIVE_LOAD         N_("Load archive")
  IDS_ROMSET_ARCHIVE_SAVE         N_("Save archive")
  IDS_ROMSET_CONFIGURATION        N_("Configuration")
  IDS_ROMSET_ARCHIVE_APPLY        N_("Apply")
  IDS_ROMSET_ARCHIVE_NEW          N_("New")
  IDS_ROMSET_ARCHIVE_DELETE       N_("Delete")
  IDS_ROMSET_SELECT_FILE          N_("Romset file")
  IDS_ROMSET_FILE_LOAD            N_("Load romset")
  IDS_ROMSET_FILE_SAVE            N_("Save romset")
  IDS_CUSTOM_SPEED_CAPTION        N_("Custom speed")
  IDS_ENTER_CUSTOM_SPEED          N_("Enter custom speed [%]")
  IDS_NEW_CONFIGURATION           N_("New configuration")
  IDS_ENTER_CONFIGURATION_NAME    N_("Enter configuration name")
  IDS_RS232_CAPTION               N_("RS232 settings")
  IDS_RS232_DEV_1                 N_("RS232 device 1")
  IDS_RS232_DEV_2                 N_("RS232 device 2")
  IDS_RS232_DEV_3                 N_("RS232 device 3")
  IDS_RS232_DEV_4                 N_("RS232 device 4")
  IDS_NETWORK_CAPTION             N_("Netplay Settings")
  IDS_CURRENT_MODE                N_("Current mode")
  IDS_SERVER_BIND                 N_("Server Bind")
  IDS_TCP_PORT                    N_("TCP port")
  IDS_NETWORK_SERVER              N_("Start server")
  IDS_NETWORK_CLIENT              N_("Connect to")
  IDS_NETWORK_DISCONNECT          N_("Disconnect")
  IDS_CONTROL                     N_("Control")
  IDS_SERVER                      N_("Server")
  IDS_CLIENT                      N_("Client")
  IDS_KEYBOARD                    N_("Keyboard")
  IDS_JOYSTICK_1                  N_("Joystick 1")
  IDS_JOYSTICK_2                  N_("Joystick 2")
  IDS_DEVICES                     N_("Devices")
  IDS_SETTINGS                    N_("Settings")
  IDS_TOGGLE_CONSOLE_APPEND       N_("Append log to existing file")
  IDS_IMAGE_CONTENTS              N_("Image Contents")
  IDS_NEW_IMAGE                   N_("New Image")
  IDS_NAME                        N_("Name")
  IDS_ID                          N_("ID")
  IDS_TYPE                        N_("Type")
  IDS_BLANK_IMAGE                 N_("Create Image")
  IDS_NEW_TAP_IMAGE               N_("New TAP Image")
  IDS_SAVE                        N_("Save")
  IDS_SELECT_DRIVER               N_("Select Driver")
  IDS_FFMPEG_SETTINGS             N_("FFMPEG settings")
  IDS_FORMAT                      N_("Format")
  IDS_AUDIO_CODEC                 N_("Audio codec")
  IDS_BITRATE                     N_("bitrate")
  IDS_VIDEO_CODEC                 N_("Video codec")
  IDS_SOUND_RECORD_CAPTION        N_("Sound record settings")
  IDS_SOUND_RECORD_FORMAT_LABEL   N_("Sound Record Format")
  IDS_SOUND_RECORD_FILE_LABEL     N_("Sound Record File")
  IDS_KERNAL                      N_("Kernal")
  IDS_SCPU64                      N_("SCPU64")
  IDS_BASIC                       N_("Basic")
  IDS_CHARACTER                   N_("Character")
  IDS_COMPUTER_RESOURCES_CAPTION  N_("Computer resources")
  IDS_COMPUTER_RESOURCES          N_("Computer resources saved to romset")
  IDS_DRIVE_RESOURCES_CAPTION     N_("Drive resources")
  IDS_DRIVE_RESOURCES             N_("Drive resources saved to romset")
  IDS_SYMBOLIC                    N_("Symbolic")
  IDS_POSITIONAL                  N_("Positional")
  IDS_DUMP_KEYSET                 N_("Dump keyset")
  IDS_DUMP_SHORTCUTS              N_("Dump shortcuts")
  IDS_SYMBOLIC_US                 N_("Symbolic US")
  IDS_SYMBOLIC_DE                 N_("Symbolic DE")
  IDS_GR_SYM                      N_("Gr Sym.")
  IDS_GR_POS                      N_("Gr Pos.")
  IDS_UK_SYM                      N_("UK Sym.")
  IDS_UK_POS                      N_("UK Pos.")
  IDS_DE_SYM                      N_("DE Sym.")
  IDS_DE_POS                      N_("DE Pos.")
  IDS_MEMORY                      N_("Memory")
  IDS_DRIVE_TYPE                  N_("Drive type")
  IDS_40_TRACK_HANDLING           N_("40 track handling")
  IDS_SELECT_DRIVE_EXTEND_NEVER   N_("Never extend")
  IDS_SELECT_DRIVE_EXTEND_ASK     N_("Ask on extend")
  IDS_SELECT_DRIVE_EXTEND_ACCESS  N_("Extend on access")
  IDS_IDLE_METHOD                 N_("Idle method")
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE N_("Trap idle")
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  N_("Skip cycles")
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE N_("Parallel cable")
  IDS_STANDARD                    N_("Standard")
  IDS_DRIVE_EXPANSION             N_("Drive expansion")
  IDS_TOGGLE_DRIVE_EXPANSION_2000 N_("$2000-$3FFF RAM")
  IDS_TOGGLE_DRIVE_EXPANSION_4000 N_("$4000-$5FFF RAM")
  IDS_TOGGLE_DRIVE_EXPANSION_6000 N_("$6000-$7FFF RAM")
  IDS_TOGGLE_DRIVE_EXPANSION_8000 N_("$8000-$9FFF RAM")
  IDS_TOGGLE_DRIVE_EXPANSION_A000 N_("$A000-$BFFF RAM")
  IDS_PLUS4_VIC20_MEMORY          N_("Memory")
  IDS_SID_GENGROUP1               N_("SID model")
  IDS_SID_FILTERS                 N_("SID filters")
  IDS_MP_FILE                     N_("File")
  IDS_MP_ATTACH_DISK_IMAGE        N_("Attach disk image")
  IDS_MP_DETACH_DISK_IMAGE        N_("Detach disk image")
  IDS_MP_FLIP_LIST                N_("Flip list")
  IDS_MP_DATASETTE_CONTROL        N_("Datassette control")
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   N_("Attach cartridge image")
  IDS_MP_RESET                    N_("Reset")
  IDS_MP_DEBUG                    N_("Debug")
#ifdef DEBUG
  IDS_MP_MODE                     N_("Mode")
#endif
  IDS_MP_EDIT                     N_("Edit")
  IDS_MP_SNAPSHOT                 N_("Snapshot")
  IDS_MP_RECORDING_START_MODE     N_("Recording start mode")
  IDS_MP_OPTIONS                  N_("Options")
  IDS_MP_REFRESH_RATE             N_("Refresh rate")
  IDS_MP_MAXIMUM_SPEED            N_("Maximum speed")
  IDS_MP_VIDEO_STANDARD           N_("Video standard")
  IDS_MP_DRIVE_SYNC_FACTOR        N_("Drive sync factor")
  IDS_MP_SETTINGS                 N_("Settings")
  IDS_MP_CARTRIDGE_IO_SETTINGS    N_("Cartridge/IO settings")
  IDS_MP_LANGUAGE                 N_("Language")
  IDS_MP_HELP                     N_("Help")
  IDS_MP_VIEW                     N_("View")
  IDS_MP_WINDOW                   N_("Window")
  IDS_MI_EXIT                     N_("Exit")
  IDS_MI_ABOUT                    N_("About VICE")
  IDS_MI_PAUSE                    N_("Pause")
  IDS_MI_EDIT_COPY                N_("Copy")
  IDS_MI_EDIT_PASTE               N_("Paste")
  IDS_MI_AUTOSTART                N_("Autostart disk/tape image")
  IDS_MI_RESET_HARD               N_("Hard")
  IDS_MI_RESET_SOFT               N_("Soft")
  IDS_MI_DRIVE8                   N_("Drive 8")
  IDS_MI_DRIVE9                   N_("Drive 9")
  IDS_MI_DRIVE10                  N_("Drive 10")
  IDS_MI_DRIVE11                  N_("Drive 11")
  IDS_MI_ATTACH_TAPE              N_("Attach tape image")
  IDS_MI_DETACH_TAPE              N_("Detach tape image")
  IDS_MI_DETACH_ALL               N_("All")
  IDS_MI_TOGGLE_SOUND             N_("Sound playback")
  IDS_MI_TOGGLE_DOUBLESIZE        N_("Double size")
  IDS_MI_TOGGLE_DOUBLESCAN        N_("Double scan")
  IDS_MI_TOGGLE_DOUBLEVERTICAL    N_("Double vertical")
  IDS_MI_DRIVE_TRUE_EMULATION     N_("True drive emulation")
  IDS_MI_DRIVE_SOUND_EMULATION    N_("Drive sound emulation")
  IDS_MI_AUTOSTART_HANDLE_TDE     N_("Handle True Drive Emulation on autostart")
  IDS_MI_TOGGLE_VIDEOCACHE        N_("Video cache")
  IDS_MI_DRIVE_SETTINGS           N_("Drive settings")
  IDS_MI_CART_SMART_ATTACH        N_("Smart-attach image")
  IDS_MI_CART_ATTACH_CRT          N_("CRT image")
  IDS_MI_CART_ATTACH_8KB          N_("Generic 8KB image")
  IDS_MI_CART_ATTACH_16KB         N_("Generic 16KB image")
  IDS_MI_CART_ATTACH_AR           N_("Action Replay image")
  IDS_MI_CART_ATTACH_AR3          N_("Action Replay MK3 image")
  IDS_MI_CART_ATTACH_AR4          N_("Action Replay MK4 image")
  IDS_MI_CART_ATTACH_STARDOS      N_("Stardos image")
  IDS_MI_CART_ATTACH_AT           N_("Atomic Power image")
  IDS_MI_CART_ATTACH_EPYX         N_("Epyx FastLoad image")
  IDS_MI_CART_ATTACH_IEEE488      N_("IEEE-488 Interface image")
  IDS_MI_CART_ATTACH_RR           N_("Retro Replay image")
  IDS_MI_CART_ATTACH_MMC_REPLAY   N_("MMC Replay image")
  IDS_MI_CART_ATTACH_IDE64        N_("IDE64 interface image")
  IDS_MI_CART_ATTACH_SS4          N_("Super Snapshot V4 image")
  IDS_MI_CART_ATTACH_SS5          N_("Super Snapshot V5 image")
  IDS_MI_CART_ATTACH_STB          N_("Structured BASIC image")
  IDS_MI_FLIP_ADD                 N_("Add current image (Unit 8)")
  IDS_MI_FLIP_REMOVE              N_("Remove current image (Unit 8)")
  IDS_MI_FLIP_NEXT                N_("Attach next image (Unit 8)")
  IDS_MI_FLIP_PREVIOUS            N_("Attach previous image (Unit 8)")
  IDS_MI_FLIP_LOAD                N_("Load flip list file")
  IDS_MI_FLIP_SAVE                N_("Save flip list file")
  IDS_MI_DATASETTE_STOP           N_("Stop")
  IDS_MI_DATASETTE_START          N_("Start")
  IDS_MI_DATASETTE_FORWARD        N_("Forward")
  IDS_MI_DATASETTE_REWIND         N_("Rewind")
  IDS_MI_DATASETTE_RECORD         N_("Record")
  IDS_MI_DATASETTE_RESET          N_("Reset")
  IDS_MI_DATASETTE_RESET_COUNTER  N_("Reset Counter")
  IDS_MI_CART_SET_DEFAULT         N_("Set cartridge as default")
  IDS_MI_TOGGLE_CART_RESET        N_("Reset on cart change")
  IDS_MI_CART_DETACH              N_("Detach cartridge image(s)")
  IDS_MI_CART_FREEZE              N_("Cartridge freeze")
  IDS_MI_MONITOR                  N_("Monitor")
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        N_("Normal")
  IDS_MI_DEBUG_MODE_SMALL         N_("Small")
  IDS_MI_DEBUG_MODE_HISTORY       N_("History")
  IDS_MI_DEBUG_MODE_AUTOPLAY      N_("History Autoplay")
  IDS_MI_TOGGLE_MAINCPU_TRACE     N_("Main CPU Trace")
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   N_("Drive0 CPU Trace")
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   N_("Drive1 CPU Trace")
#endif
  IDS_MI_SNAPSHOT_LOAD            N_("Load snapshot image")
  IDS_MI_SNAPSHOT_SAVE            N_("Save snapshot image")
  IDS_MI_LOADQUICK                N_("Load quicksnapshot image")
  IDS_MI_SAVEQUICK                N_("Save quicksnapshot image")
  IDS_MI_EVENT_TOGGLE_RECORD      N_("Start/Stop Recording History")
  IDS_MI_EVENT_TOGGLE_PLAYBACK    N_("Start/Stop Playback History")
  IDS_MI_EVENT_SETMILESTONE       N_("Set recording milestone")
  IDS_MI_EVENT_RESETMILESTONE     N_("Return to milestone")
  IDS_MI_EVENT_START_MODE_SAVE    N_("Save new snapshot")
  IDS_MI_EVENT_START_MODE_LOAD    N_("Load existing snapshot")
  IDS_MI_EVENT_START_MODE_RESET   N_("Start with reset")
  IDS_MI_EVENT_START_MODE_PLAYBCK N_("Overwrite Playback")
  IDS_MI_EVENT_DIRECTORY          N_("Select History files/directory")
  IDS_MI_MEDIAFILE                N_("Save/stop media file")
  IDS_MI_SOUND_RECORD_START       N_("Record sound to file")
  IDS_MI_SOUND_RECORD_STOP        N_("Stop Sound record")
  IDS_MI_REFRESH_RATE_AUTO        N_("Auto")
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   N_("No limit")
  IDS_MI_MAXIMUM_SPEED_CUSTOM     N_("Custom")
  IDS_MI_TOGGLE_WARP_MODE         N_("Warp mode")
  IDS_MI_TOGGLE_ALWAYSONTOP       N_("Always on Top")
  IDS_MI_TOGGLE_DX9DISABLE        N_("Disable DirectX9 video driver")
  IDS_MI_SWAP_JOYSTICK            N_("Swap joysticks")
  IDS_MI_SWAP_EXTRA_JOYSTICK      N_("Swap userport joysticks")
  IDS_MI_ALLOW_JOY_OPPOSITE       N_("Allow opposite directions")
  IDS_MI_JOYKEYS_TOGGLE           N_("Enable Joy Keys")
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   N_("Virtual device traps")
  IDS_MI_MOUSE                    N_("Grab mouse events")
  IDS_MI_C64MODEL_SETTINGS        N_("C64 model settings")
  IDS_MI_AUTOSTART_SETTINGS       N_("Autostart settings")
  IDS_MI_VIDEO_SETTINGS           N_("Video settings")
  IDS_MI_DEVICEMANAGER            N_("Peripheral settings")
  IDS_MI_JOY_SETTINGS             N_("Joystick settings")
  IDS_MI_USERPORT_JOY_SETTINGS    N_("Userport joystick settings")
  IDS_MI_SIDCART_JOY_SETTINGS     N_("Sidcart joystick settings")
  IDS_MI_KEYBOARD_SETTINGS        N_("Keyboard settings")
  IDS_MI_SOUND_SETTINGS           N_("Sound settings")
  IDS_MI_ROM_SETTINGS             N_("ROM settings")
  IDS_MI_RAM_SETTINGS             N_("RAM settings")
  IDS_MI_DATASETTE_SETTINGS       N_("Datasette settings")
  IDS_MI_VICII_SETTINGS           N_("VIC-II settings")
  IDS_MI_MOUSE_SETTINGS           N_("Mouse settings")
  IDS_MI_SID_SETTINGS             N_("SID settings")
  IDS_MI_RS232_SETTINGS           N_("RS232 settings")
  IDS_MI_REU_SETTINGS             N_("REU settings")
  IDS_MI_GEORAM_SETTINGS          N_("GEO-RAM settings")
  IDS_MI_RAMCART_SETTINGS         N_("RamCart settings")
  IDS_MI_DQBB_SETTINGS            N_("Double Quick Brown Box settings")
  IDS_MI_EXPERT_SETTINGS          N_("Expert Cartridge settings")
  IDS_MI_ISEPIC_SETTINGS          N_("ISEPIC settings")
  IDS_MI_MMC64_SETTINGS           N_("MMC64 settings")
  IDS_MI_MMCREPLAY_SETTINGS       N_("MMC Replay settings")
  IDS_MI_RR_SETTINGS              N_("Retro Replay settings")
  IDS_MI_MAGICVOICE_SETTINGS      N_("Magic Voice settings")
  IDS_MI_MIDI_SETTINGS            N_("MIDI settings")
  IDS_MI_DIGIMAX_SETTINGS         N_("DigiMAX settings")
  IDS_MI_DS12C887RTC_SETTINGS     N_("DS12C887 RTC settings")
  IDS_MI_LIGHTPEN_SETTINGS        N_("Lightpen settings")
  IDS_MI_IDE64_SETTINGS           N_("IDE64 settings")
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             N_("Ethernet settings")
#endif
  IDS_MI_ACIA_SETTINGS            N_("ACIA settings")
  IDS_MI_RS232USER_SETTINGS       N_("RS232 userport settings")
  IDS_MI_EASYFLASH_SETTINGS       N_("EasyFlash settings")
  IDS_MI_SFX_SE_SETTINGS          N_("SFX Sound Expander settings")
  IDS_MI_TOGGLE_SFX_SS            N_("Enable the SFX Sound Sampler cartridge")
  IDS_MI_TOGGLE_USERPORT_RTC      N_("Enable the Userport RTC expansion")
  IDS_MI_SETTINGS_SAVE_FILE       N_("Save current settings to specified file")
  IDS_MI_SETTINGS_LOAD_FILE       N_("Load settings from specified file")
  IDS_MI_SETTINGS_SAVE            N_("Save current settings")
  IDS_MI_SETTINGS_LOAD            N_("Load saved settings")
  IDS_MI_SETTINGS_DEFAULT         N_("Set default settings")
  IDS_MI_SAVE_SETTINGS_ON_EXIT    N_("Save settings on exit")
  IDS_MI_CONFIRM_ON_EXIT          N_("Confirm quiting VICE")
  IDS_MI_LANG_EN                  N_("English")
  IDS_MI_LANG_DA                  N_("Danish")
  IDS_MI_LANG_DE                  N_("German")
  IDS_MI_LANG_ES                  N_("Spanish")
  IDS_MI_LANG_FR                  N_("French")
  IDS_MI_LANG_HU                  N_("Hungarian")
  IDS_MI_LANG_IT                  N_("Italian")
  IDS_MI_LANG_KO                  N_("Korean")
  IDS_MI_LANG_NL                  N_("Dutch")
  IDS_MI_LANG_PL                  N_("Polish")
  IDS_MI_LANG_RU                  N_("Russian")
  IDS_MI_LANG_SV                  N_("Swedish")
  IDS_MI_LANG_TR                  N_("Turkish")
  IDS_MI_CMDLINE                  N_("Command line options")
  IDS_MI_CONTRIBUTORS             N_("Contributors")
  IDS_MI_LICENSE                  N_("License")
  IDS_MI_WARRANTY                 N_("No warranty!")
  IDS_MI_TOGGLE_FULLSCREEN        N_("Fullscreen")
  IDS_MI_SIDCART_SETTINGS         N_("SID cart settings")
  IDS_MI_MON_OPEN                 N_("Open")
  IDS_MI_MON_SAVE                 N_("Save")
  IDS_MI_MON_PRINT                N_("Print")
  IDS_MI_MON_EXIT                 N_("Exit        Alt+F4")
  IDS_MI_MON_STOP_DEBUG           N_("Stop Debug")
  IDS_MI_MON_STOP_EXEC            N_("Stop Execution")
  IDS_MI_MON_STEP_INTO            N_("Step into")
  IDS_MI_MON_STEP_OVER            N_("Step over")
  IDS_MI_MON_SKIP_RETURN          N_("Step until return")
  IDS_MI_MON_GOTO_CURSOR          N_("Go to cursor")
  IDS_MI_MON_EVAL                 N_("Evaluate")
  IDS_MI_MON_CURRENT              N_("Current instruction")
  IDS_MI_MON_WND_EVAL             N_("Evaluation window")
  IDS_MI_MON_WND_REG              N_("Register window")
  IDS_MI_MON_WND_MEM              N_("Memory window")
  IDS_MI_MON_WND_DIS              N_("Disassembly window")
  IDS_MI_MON_WND_CONSOLE          N_("Console window")
  IDS_MI_MON_COMPUTER             N_("Computer")
  IDS_MI_MON_DRIVE8               N_("Drive 8")
  IDS_MI_MON_DRIVE9               N_("Drive 9")
  IDS_MI_MON_CASCADE              N_("Cascade")
  IDS_MI_MON_TILE_VERT            N_("Tile vertically")
  IDS_MI_MON_TILE_HORIZ           N_("Tile horizontally")
  IDS_MI_MON_ARRANGE_ICONS        N_("Arrange icons")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE-fejl!"
  IDS_VICE_INFORMATION            "VICE-information"
  IDS_VICE_QUESTION               "VICE-sp�rgsm�l"
  IDS_FFMPEG_DLL_MISMATCH         "Versionen p� din ffmpeg-dll passer ikke."
  IDS_DIRECTDRAW_ERROR            "DirectDraw-fejl: Kode:%8x Fejl:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Kunne ikke gemme indstillinger."
  IDS_CANNOT_LOAD_SETTINGS        "Kunne ikke indl�se indstillinger."
  IDS_DEFAULT_SETTINGS_RESTORED   "Standardindstillinger gendannet."
  IDS_CANNOT_ATTACH_FILE          "Kan ikke tilslutte den valgte fil"
  IDS_START_MONITOR               "%s\n\nStart monitor? (Nej resetter, Annuler Forts�tter)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Udvid disk-image til 40 spor?"
  IDS_DETACHED_DEVICE_S           "Frakoblet enhed %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Tilsluttet %s til enhed %s"
  IDS_DETACHED_TAPE               "Frakoblet b�nd"
  IDS_HISTORY_RECORDED_UNKNOWN    "Historik optaget med ukendt version"
  IDS_HISTORY_RECORDED_VICE_S     "Historik optaget med VICE-%s"
  IDS_PAUSED                      "pauset"
  IDS_FRAME_NUMBER                "frame #"
  IDS_RESUMED                     "fortsat"
  IDS_REALLY_EXIT                 "Vil du virkelig afslutte?\n\nAlle data i emuleret RAM g�r tabt."
  IDS_TFE_PROBLEM                 "TFE/RR-Net er ikke underst�ttet p� dit system,\nder mangler en vital del. Se venligst VICE knowledge\nbase supportsiden\n\n      http://vicekb.trikaliotis.net/13-005\n\nfor mulige �rsager og for at aktivere netv�rk med VICE."
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net-underst�ttelse"
  IDS_CANNOT_AUTOSTART_FILE       "Kan ikke autostarte valgt fil"
  IDS_ATTACHED_TAPE_S             "Tilsluttet b�nd %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Indstillingerne er gemt."
  IDS_SETTINGS_LOADED_SUCCESS     "Indstillinger indl�st med success."
  IDS_ATTACH_DISK_IMAGE           "Tilslut disk-image"
  IDS_ATTACH_TAPE_IMAGE           "Tilslut b�nd-image"
  IDS_AUTOSTART_IMAGE             "Autostart disk-/b�nd-image"
  IDS_INVALID_CARTRIDGE           "Ugyldigt cartridge-image"
  IDS_BAD_CARTRIDGE_CONFIG        "Ugyldig cartridgekonfiguration i brugergr�nseflade!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Ugyldigt cartridge-image"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Log konsol uddata image"
  IDS_LOG_FILES_TYPE              "VICE konsolloggfiler (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Kan ikke skrive logfil \042%s\042."
  IDS_LOAD_FLIP_LIST_FILE         "Indl�s bladrelistefil"
  IDS_CANNOT_READ_FLIP_LIST       "Kunne ikke l�se bladrelistefil"
  IDS_SAVE_FLIP_LIST_FILE         "Gem bladrelistefil"
  IDS_CANNOT_WRITE_FLIP_LIST      "Kunne ikke skrive bladrelistefil"
  IDS_SELECT_KEYMAP_FILE          "V�lg tastelayout"
  IDS_SAVE_KEYMAP_FILE            "Gem tastelayout"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Kunne ikke gemme tastelayour"
  IDS_SAVE_CONFIG_FILE            "Gem indstillinger"
  IDS_LOAD_CONFIG_FILE            "Indl�s indstillinger"
  IDS_MAPPING                     "Mapning"
  IDS_KEYBOARD_SETTINGS           "Tastaturindstillinger"
  IDS_ATTACH                      "Tilslut"
  IDS_PLEASE_ENTER_A_FILENAME     "Angiv filnavn."
  IDS_OVERWRITE_EXISTING_IMAGE    "Overskriv eksisterende image?"
  IDS_CANNOT_CREATE_IMAGE         "Kunne ikke oprette image-fil!"
  IDS_COMMAND_LINE_OPTIONS        "Kommandolinjeparametre"
  IDS_COMMAND_OPTIONS_AVAIL       "Hvilke kommandolinjeparametre er tilg�ngelige?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Ingen driver valgt, eller valgt driver ikke underst�ttet"
  IDS_CANT_WRITE_SCREENSHOT_S     "Kunne ikke gemme screenshot \042%s\042."
  IDS_AUTOSTART_DISK_IMAGE        "Autostart disk-image"
  IDS_SELECT_FS_DIRECTORY         "Angiv katalog"
  IDS_PRINTER_USERPORT            "Printer brugerport"
  IDS_PRINTER_4                   "Printer 4"
  IDS_PRINTER_5                   "Printer 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Drev 8"
  IDS_DRIVE_9                     "Drev 9"
  IDS_DRIVE_10                    "Drev 10"
  IDS_DRIVE_11                    "Drev 11"
  IDS_PERIPHERAL_SETTINGS         "Eksterne enhedsindstillinger"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Kunne ikke skrive snapshot fil."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Kunne ikke indl�se snapshot fil"
  IDS_LOAD_S_ROM_IMAGE            "Indl�s %s-ROM-fil"
  IDS_SELECT_ROMSET_ARCHIVE       "V�lg ROM-set arkiv"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Kunne ikke indl�se ROM-set arkiv!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Kunne ikke gemme ROM-set arkiv!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Kunne ikke indl�se ROM-set fil!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Kunne ikke gemme ROM-set fil!"
  IDS_SELECT_ROMSET_FILE          "V�lg ROM-set fil"
  IDS_ROMSET                      "ROM-set"
  IDS_COMPUTER                    "Computer"
  IDS_DRIVE                       "Drev"
  IDS_ROM_SETTINGS                "ROM-indstillinger"
  IDS_SAVE_SNAPSHOT_IMAGE         "Gem snapshot"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Kunne ikke gemme snapshot \042%s\042."
  IDS_LOAD_SNAPSHOT_IMAGE         "Indl�s snapshot"
  IDS_COULD_NOT_LOAD_PALETTE      "Kunne ikke indl�se palettefil."
  IDS_LOAD_VICE_PALETTE_FILE      "Indl�s VICE-palette"
  IDS_FULLSCREEN                  "Fuldsk�rm/DirectX"
  IDS_CRT_EMULATION               "CRT-emulering"
  IDS_RENDER_FILTER               "Renderingsfilter"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Grafikindstillinger"
  IDS_FILE_SYSTEM                 "Filsystem"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "�gte IEC-enhed"
#endif
  IDS_RS232_DEVICE_I              "RS232-enhed %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Tilslut CRT-cartridge image"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Tilslut r�t 8kB-cartridge image"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Tilslut r�t 16kB-cartridge image"
  IDS_ATTACH_AR_CART_IMAGE        "Tilslut r�t 32KB Action Replay cartridge image"
  IDS_ATTACH_AR3_CART_IMAGE       "Tilslut r�t 16KB Action Replay MK3 cartridge image"
  IDS_ATTACH_AR4_CART_IMAGE       "Tilslut r�t 32KB Action Replay MK4 cartridge image"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Tilslut r�t 16KB StarDOS cartridge image"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Tilslut r�t 32kB Atomic Power-cartridge image"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Tilslut r�t 8kB Epyx FastLoad cartridge image"
  IDS_ATTACH_IEEE488_CART_IMG     "Tilslut IEEE-488 interface cartridge image"
  IDS_ATTACH_RETRO_R_CART_IMG     "Tilslut r�t 64kB-Retro Replay-cartridge image"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Tilslut r�t 512kB MMC Replay cartridge image"
  IDS_ATTACH_IDE64_CART_IMAGE     "Tilslut r�t 64kB IDE64-cartridge image"
  IDS_ATTACH_SS4_CART_IMAGE       "Tilslut r�t 32kB Super Snapshot V4 cartridge image"
  IDS_ATTACH_SS5_CART_IMAGE       "Tilslut r�t 64kB Super Snapshot V5 cartridge image"
  IDS_ATTACH_STB_CART_IMAGE       "Tilslut r� Strucured BASIC-cartridge image"
  IDS_SELECT_CARTRIDGE_IMAGE      "V�lg cartridge-fil"
  IDS_MODEL                       "Model"
  IDS_DRIVE_SETTINGS              "Diskettedrevsindstillinger"
  IDS_SELECT_START_SNAP_EVENT     "V�lg start-snapshot for h�ndelseshistorik"
  IDS_SELECT_END_SNAP_EVENT       "V�lg slut-snapshot for h�ndelseshistorik"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *USTABIL* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE bidragsydere"
  IDS_WHO_MADE_WHAT               "Hvem har lavet hvad?"
  IDS_LICENSE                     "Licens"
  IDS_NO_WARRANTY                 "Ingen garanti!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE distribueres UDEN NOGEN SOM HELST GARANTI!"
  IDS_PRESS_KEY_NORTHWEST         "Tryk tast for nordvest"
  IDS_PRESS_KEY_NORTH             "Tryk tast for nord"
  IDS_PRESS_KEY_NORTHEAST         "Tryk tast for nord�st"
  IDS_PRESS_KEY_EAST              "Tryk tast for �st"
  IDS_PRESS_KEY_SOUTHEAST         "Tryk tast for syd�st"
  IDS_PRESS_KEY_SOUTH             "Tryk tast for syd"
  IDS_PRESS_KEY_SOUTHWEST         "Tryk tast for sydvest"
  IDS_PRESS_KEY_WEST              "Tryk tast for vest"
  IDS_PRESS_KEY_FIRE              "Tryk tast for skyd"
  IDS_NO_USERPORT_ADAPTER         "Ingen brugerportjoystickadapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA brugerportjoystickadapter"
  IDS_PET_USERPORT_ADAPTER        "PET brugerportjoystickadapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer brugerport joystick adapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM brugerportjoystickadapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT brugerportjoystickadapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft brugerportjoystickadapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte brugerportjoystickadapter"
  IDS_NO_SIDCART_JOY              "Deaktiv�r SID-cartridge joystick"
  IDS_SIDCART_JOY                 "Aktiv�r SID-cartridge joystick"
  IDS_NUMPAD_AND_RCTRL            "Numerisk tastatur + h�jre Ctrl"
  IDS_KEYSET_A                    "Tastes�t A"
  IDS_KEYSET_B                    "Tastes�t B"
  IDS_ALL_BUTTONS_AS_FIRE         "Alle knapper bruges som skydeknap"
  IDS_NUMERIC_SEE_ABOVE           "numerisk (se ovenfor)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Ingen knap - Autofire inaktiv"
  IDS_ALL_FILES_FILTER            "Alle filer (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE-palettefiler (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE-snapshot filer (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM-filer (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64-filer (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk-image filer (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "B�nd-image filer (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Pakkede filer (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT cartridge-image filer (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "R� cartridge-image filer (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE-bladrelistefiler (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE-ROM-set filer (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE-ROM-set arkiver (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE-tastes�t filer (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodoreemulatorfiler (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Fleksibel"
  IDS_ADJUSTING                   "Tilpassende"
  IDS_EXACT                       "N�jagtig"
  IDS_SOUND_DRIVER_DIRECTX        "Lyd-driver: DirectX"
  IDS_SOUND_DRIVER_WMM            "Lyd-driver: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Mediefiler (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Konfigur�r tastes�t A"
  IDS_CONFIGURE_KEYSET_B          "Konfigur�r tastes�t B"
  IDS_SAVE_MEDIA_IMAGE            "Gem mediefil"
  IDS_S_AT_D_SPEED                "%s med %d%% hastighed, %d b/s%s"
  IDS_TAPE                        "B�nd:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Optager\n%02d:%02d"
  IDS_PLAYBACK                    "Afspiller\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Ukendt"
  IDS_P_NUMBER                    "<nummer>"
  IDS_SET_INPUT_JOYSTICK_1        "V�lg inddataenhed for joystick 1"
  IDS_SET_INPUT_JOYSTICK_2        "V�lg inddataenhed for joystick 2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "V�lg inddataenhed for ekstra joystick 1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "V�lg inddataenhed for ekstra joystick 2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Gem indstillinger n�r programmet afsluttes"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Gem aldrig indstillinger n�r programmet afsluttes"
  IDS_CONFIRM_QUIT_VICE           "Bekr�ft programafslutning"
  IDS_NO_CONFIRM_QUIT_VICE        "Bekr�ft ikke programafslutning"
  IDS_USE_ALL_CPU_SMP             "Brug alle CPU'er p� SMP-systemer"
  IDS_USE_FIRST_CPU_SMP           "Brug kun f�rste CPU p� SMP-systemer"
  IDS_START_VICE_FULLSCREEN_MODE  "Start VICE i fullscreen-tilstand"
  IDS_DISABLE_DX9                 "Deaktiv�r DirectX9 videodriver"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Uventet fejl. Modtog signal %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Uventet fejl. Modtog signal %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Venter"
  IDS_SERVER_LISTENING            "Server lytter"
  IDS_CONNECTED_SERVER            "Tilsluttet server"
  IDS_CONNECTED_CLIENT            "Tilsluttet klient"
  IDS_INVALID_PORT_NUMBER         "Ugyldigt portnummer"
  IDS_ERROR_STARTING_SERVER       "Fejl under start af serveren."
  IDS_ERROR_CONNECTING_CLIENT     "Fejl under tilslutning af klienten."
#endif
  IDS_SOUND_RECORDING_STARTED     "Lydoptagelse startet..."
  IDS_SOUND_RECORDING_STOPPED     "Lydoptagelse stoppet..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Annull�r"
  IDS_NONE                        "Ingen"
  IDS_BROWSE                      "Gennemse..."
  IDS_SPECIFY_MIDI_IN             "Angiv enhed for MIDI-ind"
  IDS_SPECIFY_MIDI_OUT            "Angiv enhed for MIDI-ud"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Fejl under skrivning af EasyFlash CRT-fil"
  IDS_NO_EASYFLASH_CART_INSERTED  "Intet EasyFlash cartridge isat"
  IDS_DATASETTE_CAPTION           "Datasetteindstillinger"
  IDS_DATASETTE_RESET_WITH_CPU    "Reset Datasette ved CPU-reset"
  IDS_DATASETTE_MOTOR_GROUP       "Datasettehastighed under l�sning"
  IDS_DATASETTE_DELAY_TRIGGER     "klok ekstra forsinkelse per puls"
  IDS_DATASETTE_DELAY_AT_ZERO     "Datasette nulgabs-forsinkelse"
  IDS_TOGGLE_USEIECDEVICE         "Anvend IEC-enhed"
  IDS_SELECTDISK                  "Diskimage"
  IDS_SELECTDIR                   "Katalog"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "�gte IEC-enhed"
#endif
  IDS_SELECTNONE                  "Ingen"
  IDS_AUTOSTART                   "Start automatisk"
  IDS_BROWSEDIR                   "Gennemse..."
  IDS_TOGGLE_ATTACH_READONLY      "Tilslut skrivebeskyttet"
  IDS_TOGGLE_READP00              "L�s P00-filer"
  IDS_TOGGLE_WRITEP00             "Skriv P00-filer"
  IDS_TOGGLE_HIDENONP00           "Skjul ikke-P00-filer"
  IDS_JOYSTICK_CAPTION            "Joystick indstillinger"
  IDS_JOYSTICK_IN_PORT_1          "Joystick i port 1"
  IDS_SELECT_FIRE_BUTTON          "V�lg skydeknap"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Autofireindstillinger"
  IDS_AUTOFIRE_SPEED              "Autofirehastighed (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick i port 2"
  IDS_JOY_CONFIG_A                "Konfigur�r tastes�t A"
  IDS_JOY_CONFIG_B                "Konfigur�r tastes�t B"
  IDS_JOY_CALIBRATE               "Kalibr�r Joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Ekstra joystickindstillinger"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick i ekstra port 1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick i ekstra port 2"
  IDS_KEYSET_SW                   "Sydvest"
  IDS_KEYSET_S                    "Syd"
  IDS_KEYSET_SE                   "Syd�st"
  IDS_KEYSET_W                    "Vest"
  IDS_KEYSET_E                    "�st"
  IDS_KEYSET_NW                   "Nordvest"
  IDS_KEYSET_N                    "Nord"
  IDS_KEYSET_NE                   "Nord�st"
  IDS_KEYSET_FIRE                 "Skydeknap"
  IDS_SOUND_CAPTION               "Indstillinger for lydenheder"
  IDS_SOUND_DIRECTX               "DirectX-driver"
  IDS_SOUND_WMM                   "WMM-driver"
  IDS_SOUND_OUTPUT_MODE           "Lydindstillinger"
  IDS_SOUND_SAMPLE_FREQUENCY      "Samplingfrekvens :"
  IDS_SOUND_BUFFER_SIZE           "Lydbufferst�rrelse :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "lydfragmentst�rrelse :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Lille"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Medium"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Stor"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "Synkroniseringsmetode :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Gem tilsluttede disk-images"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Gem tilsluttede ROM-images"
  IDS_FULLSCREEN_DRIVER           "Driver:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdybde:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Opl�sning:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Opdateringsfrekvens:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK-synkronisering"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Rend�r til DXs prim�re overflade"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Fast aspektforhold (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "�gte aspektforhold"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "V�rdi %.3f for %s er udenfor det tilladte, bruger %.3f istedet"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "V�rdi %d for %s er udenfor det tilladte, bruger %d istedet"
  IDS_AUDIO_LEAK                  "Audiol�kage"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Farvetone (0..2)"
  IDS_COLORS_SATURATION           "M�tning (0..2)"
  IDS_COLORS_CONTRAST             "Kontrast (0..2)"
  IDS_COLORS_BRIGHTNESS           "Lysstyrke (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Skanlinjeskygge (0..1)"
  IDS_CRT_BLUR                    "Udtv�ring (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Fase for ulige linjer (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Offset for ulige linjer (0..2)"
  IDS_VICII_PALETTE               "VICII-palette"
  IDS_VIC_PALETTE                 "VIC-palette"
  IDS_CRTC_PALETTE                "CRTC-palette"
  IDS_VDC_PALETTE                 "VDC-palette"
  IDS_TED_PALETTE                 "TED-palette"
  IDS_VICII_COLORS                "VICII Farver"
  IDS_VIC_COLORS                  "VIC Farver"
  IDS_CRTC_COLORS                 "CRTC Farver"
  IDS_VDC_COLORS                  "VDC Farver"
  IDS_TED_COLORS                  "TED Farver"
  IDS_VICII_CRT_EMULATION         "VICII CRT-emulering"
  IDS_VIC_CRT_EMULATION           "VIC CRT-emulering"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT-emulering"
  IDS_VDC_CRT_EMULATION           "VDC CRT-emulering"
  IDS_TED_CRT_EMULATION           "TED CRT-emulering"
  IDS_VICII_RENDER_FILTER         "VICII renderingsfilter"
  IDS_VIC_RENDER_FILTER           "VIC renderingsfilter"
  IDS_CRTC_RENDER_FILTER          "CRTC renderingsfilter"
  IDS_VDC_RENDER_FILTER           "VDC renderingsfilter"
  IDS_TED_RENDER_FILTER           "TED renderingsfilter"
  IDS_VICII_AUDIO_LEAK            "VICII Audiol�kage"
  IDS_VIC_AUDIO_LEAK              "VIC Audiol�kage"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audiol�kage"
  IDS_VDC_AUDIO_LEAK              "VDC Audiol�kage"
  IDS_TED_AUDIO_LEAK              "TED Audiol�kage"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Ekstern palette:"
  IDS_RAM_CAPTION                 "RAM-indstillinger"
  IDS_RAM_INIT_AT_POWERUP         "Initialisering ved power-up"
  IDS_RAM_VALUE_FIRST_BYTE        "V�rdi p� f�rste byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "L�ngde af konstant v�rdi"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "L�ngde af konstant m�nster"
  IDS_PRINTER_EMULATION           "Printeremulering"
  IDS_PRINTER_FORMFEED            "Send sideskift"
  IDS_FILESYSTEM_PRINTER          "Filsystemprinter"
  IDS_PRINTER_DRVR                "Printerdriver"
  IDS_OUTPUT                      "Uddata"
  IDS_OUTPUT_TO_FILE              "Uddata til fil #"
  IDS_OUTPUT_FILE1_NAME           "Navn p� uddatafil #1"
  IDS_OUTPUT_FILE2_NAME           "Navn p� uddatafil #2"
  IDS_OUTPUT_FILE3_NAME           "Navn p� uddatafil #3"
  IDS_ROMSET_SELECT_ARCHIVE       "ROM-set arkiv"
  IDS_ROMSET_ARCHIVE_LOAD         "Indl�s arkiv"
  IDS_ROMSET_ARCHIVE_SAVE         "Gem arkiv"
  IDS_ROMSET_CONFIGURATION        "Indstillinger"
  IDS_ROMSET_ARCHIVE_APPLY        "Anvend"
  IDS_ROMSET_ARCHIVE_NEW          "Ny"
  IDS_ROMSET_ARCHIVE_DELETE       "Slet"
  IDS_ROMSET_SELECT_FILE          "ROM-set fil"
  IDS_ROMSET_FILE_LOAD            "Indl�s ROM-set"
  IDS_ROMSET_FILE_SAVE            "Gem ROM-set"
  IDS_CUSTOM_SPEED_CAPTION        "Egen hastighet"
  IDS_ENTER_CUSTOM_SPEED          "Angiv hastighed [%]"
  IDS_NEW_CONFIGURATION           "Ny indstillingsfil"
  IDS_ENTER_CONFIGURATION_NAME    "Angiv konfigurationsnavn"
  IDS_RS232_CAPTION               "RS232-indstillinger"
  IDS_RS232_DEV_1                 "RS232-enhed 1"
  IDS_RS232_DEV_2                 "RS232-enhed 2"
  IDS_RS232_DEV_3                 "RS232-enhed 3"
  IDS_RS232_DEV_4                 "RS232-enhed 4"
  IDS_NETWORK_CAPTION             "N�tv�rksspilindstillinger"
  IDS_CURRENT_MODE                "Nuv�rende tilstand"
  IDS_SERVER_BIND                 "Serverbinding"
  IDS_TCP_PORT                    "TCP-port"
  IDS_NETWORK_SERVER              "Start server"
  IDS_NETWORK_CLIENT              "Tilslut til"
  IDS_NETWORK_DISCONNECT          "Afbryd forbindelse"
  IDS_CONTROL                     "Styring"
  IDS_SERVER                      "Server"
  IDS_CLIENT                      "Klient"
  IDS_KEYBOARD                    "Tastatur"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Enheder"
  IDS_SETTINGS                    "Indstillinger"
  IDS_TOGGLE_CONSOLE_APPEND       "Tilf�j log i eksisterende fil"
  IDS_IMAGE_CONTENTS              "Indhold i image"
  IDS_NEW_IMAGE                   "Nyt image"
  IDS_NAME                        "Navn"
  IDS_ID                          "ID"
  IDS_TYPE                        "Type"
  IDS_BLANK_IMAGE                 "Opret image"
  IDS_NEW_TAP_IMAGE               "Nyt TAP-image"
  IDS_SAVE                        "Gem"
  IDS_SELECT_DRIVER               "V�lg driver"
  IDS_FFMPEG_SETTINGS             "FFMPEG-indstillinger"
  IDS_FORMAT                      "Format"
  IDS_AUDIO_CODEC                 "Lydkodeks"
  IDS_BITRATE                     "bitrate"
  IDS_VIDEO_CODEC                 "Videokodeks"
  IDS_SOUND_RECORD_CAPTION        "Lydoptagelsesindstillinger"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Format for lydoptagelse"
  IDS_SOUND_RECORD_FILE_LABEL     "Lydoptagelsesfil"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Tegngenerator"
  IDS_COMPUTER_RESOURCES_CAPTION  "Computerressourcer"
  IDS_COMPUTER_RESOURCES          "Computerressourcer gemt i ROM-set"
  IDS_DRIVE_RESOURCES_CAPTION     "Drev-ressourcer"
  IDS_DRIVE_RESOURCES             "Drev-ressourcer gemt i ROM-set"
  IDS_SYMBOLIC                    "Symbolsk"
  IDS_POSITIONAL                  "Positionsbestemt"
  IDS_DUMP_KEYSET                 "Gem tastes�t"
  IDS_DUMP_SHORTCUTS              "Gem genveje"
  IDS_SYMBOLIC_US                 "Symbolsk US"
  IDS_SYMBOLIC_DE                 "Symbolsk DE"
  IDS_GR_SYM                      "Gr sym."
  IDS_GR_POS                      "Gr pos."
  IDS_UK_SYM                      "UK sym."
  IDS_UK_POS                      "UK pos."
  IDS_DE_SYM                      "DE sym."
  IDS_DE_POS                      "DE pos."
  IDS_MEMORY                      "Hukommelse"
  IDS_DRIVE_TYPE                  "Drevtype"
  IDS_40_TRACK_HANDLING           "H�ndtering af 40 spor"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Udvid aldrig"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Sp�rg ved udviddelse"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Udvid ved tilgang"
  IDS_IDLE_METHOD                 "Tomgangsmetode"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Fang inaktive"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Spring over cykler"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Parallelkabel"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Drevudviddelse"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Hukommelse"
  IDS_SID_GENGROUP1               "SID-model"
  IDS_SID_FILTERS                 "SID-filtre"
  IDS_MP_FILE                     "Fil"
  IDS_MP_ATTACH_DISK_IMAGE        "Tilslut disk-image"
  IDS_MP_DETACH_DISK_IMAGE        "Frakobl disk-image"
  IDS_MP_FLIP_LIST                "Bladreliste"
  IDS_MP_DATASETTE_CONTROL        "Datasettestyring"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Tilslut cartridge-image..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Tilstand"
#endif
  IDS_MP_EDIT                     "Redig�r"
  IDS_MP_SNAPSHOT                 "Snapshot"
  IDS_MP_RECORDING_START_MODE     "Start-tilstand for optagelse"
  IDS_MP_OPTIONS                  "Valg"
  IDS_MP_REFRESH_RATE             "Opdateringsfrekvens"
  IDS_MP_MAXIMUM_SPEED            "Maksimal hastighed"
  IDS_MP_VIDEO_STANDARD           "TV-standard"
  IDS_MP_DRIVE_SYNC_FACTOR        "Synkfaktor for diskettedrev"
  IDS_MP_SETTINGS                 "Indstillinger"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Modul/IO-indstillinger"
  IDS_MP_LANGUAGE                 "Sprog"
  IDS_MP_HELP                     "Hj�lp"
  IDS_MP_VIEW                     "Vis"
  IDS_MP_WINDOW                   "Vindue"
  IDS_MI_EXIT                     "Afslut"
  IDS_MI_ABOUT                    "Om VICE..."
  IDS_MI_PAUSE                    "Pause"
  IDS_MI_EDIT_COPY                "Kopi�r"
  IDS_MI_EDIT_PASTE               "Inds�t"
  IDS_MI_AUTOSTART                "Autostart disk-/b�nd-image..."
  IDS_MI_RESET_HARD               "H�rd"
  IDS_MI_RESET_SOFT               "Bl�d"
  IDS_MI_DRIVE8                   "Drev 8"
  IDS_MI_DRIVE9                   "Drev 9"
  IDS_MI_DRIVE10                  "Drev 10"
  IDS_MI_DRIVE11                  "Drev 11"
  IDS_MI_ATTACH_TAPE              "Tilslut b�nd-image..."
  IDS_MI_DETACH_TAPE              "Frakobl b�nd-image"
  IDS_MI_DETACH_ALL               "Alle"
  IDS_MI_TOGGLE_SOUND             "Sl� lydemulering til"
  IDS_MI_TOGGLE_DOUBLESIZE        "Dobbelt st�rrelse"
  IDS_MI_TOGGLE_DOUBLESCAN        "Dobbelt-skan"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Vertikal fordobling"
  IDS_MI_DRIVE_TRUE_EMULATION     "�gte drev-emulering"
  IDS_MI_DRIVE_SOUND_EMULATION    "Emul�r drevlyd"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Anvend �gte drev-emulering ved autostart"
  IDS_MI_TOGGLE_VIDEOCACHE        "Grafikcache"
  IDS_MI_DRIVE_SETTINGS           "Diskettedrevsindstillinger..."
  IDS_MI_CART_SMART_ATTACH        "Smart-tilslut image..."
  IDS_MI_CART_ATTACH_CRT          "CRT-fil..."
  IDS_MI_CART_ATTACH_8KB          "Standard 8KB-image..."
  IDS_MI_CART_ATTACH_16KB         "Standard 16KB-image..."
  IDS_MI_CART_ATTACH_AR           "Action Replay-image..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 image..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 image..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos image..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power-image..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad image..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE488-interface image..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay-image..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay-image..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64-interface image..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 image..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 image..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC-image..."
  IDS_MI_FLIP_ADD                 "Tilf�j nuv�rende image (Enhed 8)"
  IDS_MI_FLIP_REMOVE              "Fjern nuv�rende image (Enhed 8)"
  IDS_MI_FLIP_NEXT                "Tilslut n�ste image (Enhed 8)"
  IDS_MI_FLIP_PREVIOUS            "Tilslut forrige image (Enhed 8)"
  IDS_MI_FLIP_LOAD                "Indl�s bladrelistefil"
  IDS_MI_FLIP_SAVE                "Gem bladrelistefil"
  IDS_MI_DATASETTE_STOP           "Stop"
  IDS_MI_DATASETTE_START          "Start"
  IDS_MI_DATASETTE_FORWARD        "Spol frem"
  IDS_MI_DATASETTE_REWIND         "Spol tilbage"
  IDS_MI_DATASETTE_RECORD         "Optag"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Nulstil t�ller"
  IDS_MI_CART_SET_DEFAULT         "V�lg cartridge som standard"
  IDS_MI_TOGGLE_CART_RESET        "Reset ved cartridge-skift"
  IDS_MI_CART_DETACH              "Frakobl cartridge-image"
  IDS_MI_CART_FREEZE              "Cartridgets frys-funktion"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "Lille"
  IDS_MI_DEBUG_MODE_HISTORY       "Historik"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Automatisk afspilning af Historik"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Hoved-CPU trace"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Enhed 0 CPU trace"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Enhed 1 CPU trace"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Indl�s snapshot..."
  IDS_MI_SNAPSHOT_SAVE            "Gem snapshot..."
  IDS_MI_LOADQUICK                "Hurtig-indl�s snapshot"
  IDS_MI_SAVEQUICK                "Hurtig-gem snapshot"
  IDS_MI_EVENT_TOGGLE_RECORD      "Start/stop optagelse af historik"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Start/stop afspilning af historik"
  IDS_MI_EVENT_SETMILESTONE       "Angiv optagelses-bogm�rke"
  IDS_MI_EVENT_RESETMILESTONE     "G� til bogm�rke"
  IDS_MI_EVENT_START_MODE_SAVE    "Gem nyt snapshot"
  IDS_MI_EVENT_START_MODE_LOAD    "Indl�s eksisterende snapshot"
  IDS_MI_EVENT_START_MODE_RESET   "Start med reset"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Overskriv afspilning"
  IDS_MI_EVENT_DIRECTORY          "V�lg historikfiler/-katalog"
  IDS_MI_MEDIAFILE                "Gem/stop mediefil..."
  IDS_MI_SOUND_RECORD_START       "Optag lyd til en fil..."
  IDS_MI_SOUND_RECORD_STOP        "Stop lydoptagelse"
  IDS_MI_REFRESH_RATE_AUTO        "Auto"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Ubegr�nset"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Egen"
  IDS_MI_TOGGLE_WARP_MODE         "Warp-tilstand"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Altid �verst"
  IDS_MI_TOGGLE_DX9DISABLE        "Deaktiv�r DirectX9 videodriver"
  IDS_MI_SWAP_JOYSTICK            "Byt om p� joystickportene"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Byt om p� brugerportjoysticks"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Tillad modsatte retninger"
  IDS_MI_JOYKEYS_TOGGLE           "Aktiv�r joystick via keyboard"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtuelle enheds-traps"
  IDS_MI_MOUSE                    "Fang musseh�ndelser"
  IDS_MI_C64MODEL_SETTINGS        "C64-model indstillinger..."
  IDS_MI_AUTOSTART_SETTINGS       "Autostart-indstillinger..."
  IDS_MI_VIDEO_SETTINGS           "Grafikindstillinger..."
  IDS_MI_DEVICEMANAGER            "Eksterne enhedsindstillinger..."
  IDS_MI_JOY_SETTINGS             "Joystick indstillinger..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Brugerportjoystickindstillinger..."
  IDS_MI_SIDCART_JOY_SETTINGS     "SidCart joystickindstillinger..."
  IDS_MI_KEYBOARD_SETTINGS        "Tastaturindstillinger..."
  IDS_MI_SOUND_SETTINGS           "Lydindstillinger..."
  IDS_MI_ROM_SETTINGS             "ROM-indstillinger..."
  IDS_MI_RAM_SETTINGS             "RAM-indstillinger..."
  IDS_MI_DATASETTE_SETTINGS       "Datasetteindstillinger..."
  IDS_MI_VICII_SETTINGS           "VIC-II-indstillinger..."
  IDS_MI_MOUSE_SETTINGS           "Musseindstillinger..."
  IDS_MI_SID_SETTINGS             "SID-indstillinger..."
  IDS_MI_RS232_SETTINGS           "RS232-indstillinger..."
  IDS_MI_REU_SETTINGS             "REU-indstillinger..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM-indstillinger..."
  IDS_MI_RAMCART_SETTINGS         "RamCart-indstillinger..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box indstillinger..."
  IDS_MI_EXPERT_SETTINGS          "Expert Cartridge-indstillinger..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC-indstillinger..."
  IDS_MI_MMC64_SETTINGS           "MMC64-indstillinger..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay-indstillinger..."
  IDS_MI_RR_SETTINGS              "Retro Replay-indstillinger..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice indstillinger..."
  IDS_MI_MIDI_SETTINGS            "MIDI-indstillinger..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX-indstillinger..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC-indstillinger..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lyspenindstillinger..."
  IDS_MI_IDE64_SETTINGS           "IDE64-indstillinger..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernetindstillinger..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA-indstillinger..."
  IDS_MI_RS232USER_SETTINGS       "RS232-brugerportindstillinger..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash-indstillinger..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander-indstillinger..."
  IDS_MI_TOGGLE_SFX_SS            "Aktiv�r SFX Sound Sampler cartridge"
  IDS_MI_TOGGLE_USERPORT_RTC      "Aktiv�r RTC-udviddelse p� brugerport"
  IDS_MI_SETTINGS_SAVE_FILE       "Gem indstillinger som"
  IDS_MI_SETTINGS_LOAD_FILE       "Indl�s indstillinger fra"
  IDS_MI_SETTINGS_SAVE            "Gen aktuelle indstillinger"
  IDS_MI_SETTINGS_LOAD            "Indl�s gemte indstillinger"
  IDS_MI_SETTINGS_DEFAULT         "Gendan standard indstillinger"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Gem indstillinger n�r programmet afsluttes"
  IDS_MI_CONFIRM_ON_EXIT          "Bekr�ft programafslutning"
  IDS_MI_LANG_EN                  "Engelsk"
  IDS_MI_LANG_DA                  "Dansk"
  IDS_MI_LANG_DE                  "Tysk"
  IDS_MI_LANG_ES                  "Spansk"
  IDS_MI_LANG_FR                  "Fransk"
  IDS_MI_LANG_HU                  "Ungarsk"
  IDS_MI_LANG_IT                  "Italiensk"
  IDS_MI_LANG_KO                  "Koreansk"
  IDS_MI_LANG_NL                  "Hollandsk"
  IDS_MI_LANG_PL                  "Polsk"
  IDS_MI_LANG_RU                  "Russisk"
  IDS_MI_LANG_SV                  "Svensk"
  IDS_MI_LANG_TR                  "Tyrkisk"
  IDS_MI_CMDLINE                  "Kommandolinjeparametre"
  IDS_MI_CONTRIBUTORS             "Bidragsydere"
  IDS_MI_LICENSE                  "Licens"
  IDS_MI_WARRANTY                 "Ingen garanti!"
  IDS_MI_TOGGLE_FULLSCREEN        "Fuldsk�rm"
  IDS_MI_SIDCART_SETTINGS         "SID-cartridgeindstillinger..."
  IDS_MI_MON_OPEN                 "�bn"
  IDS_MI_MON_SAVE                 "Gem"
  IDS_MI_MON_PRINT                "Print"
  IDS_MI_MON_EXIT                 "Afslut        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Stop debugging"
  IDS_MI_MON_STOP_EXEC            "Stop Eksekvering"
  IDS_MI_MON_STEP_INTO            "Step ind i"
  IDS_MI_MON_STEP_OVER            "Step over"
  IDS_MI_MON_SKIP_RETURN          "Step til retur"
  IDS_MI_MON_GOTO_CURSOR          "G� til cursor"
  IDS_MI_MON_EVAL                 "Evalu�r udtryk"
  IDS_MI_MON_CURRENT              "Aktuel instruktion"
  IDS_MI_MON_WND_EVAL             "Evalueringsvindue"
  IDS_MI_MON_WND_REG              "Registervindue"
  IDS_MI_MON_WND_MEM              "Hukommelsesvindue"
  IDS_MI_MON_WND_DIS              "Disassembleringsvindue"
  IDS_MI_MON_WND_CONSOLE          "Konsolvindue"
  IDS_MI_MON_COMPUTER             "Computer"
  IDS_MI_MON_DRIVE8               "Drev 8"
  IDS_MI_MON_DRIVE9               "Drev 9"
  IDS_MI_MON_CASCADE              "Kaskade"
  IDS_MI_MON_TILE_VERT            "Side om side"
  IDS_MI_MON_TILE_HORIZ           "Over og under"
  IDS_MI_MON_ARRANGE_ICONS        "Arrang�r ikoner"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE Fehler!"
  IDS_VICE_INFORMATION            "VICE Information"
  IDS_VICE_QUESTION               "VICE Frage"
  IDS_FFMPEG_DLL_MISMATCH         "Deube ffmpeg dll Version passt leider nicht."
  IDS_DIRECTDRAW_ERROR            "DirectDraw error: Code:%8x Error:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Fehler beim Speichern der Einstellungen."
  IDS_CANNOT_LOAD_SETTINGS        "Fehler beim Laden der Einstellungen."
  IDS_DEFAULT_SETTINGS_RESTORED   "Standard wiederhergestellt"
  IDS_CANNOT_ATTACH_FILE          "Kann Image Datei nicht einlegen"
  IDS_START_MONITOR               "%s\n\nMonitor starten? (Nein: reset, Abbruch: weiter)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Image Dateu auf 40-Spur Format erweitern?"
  IDS_DETACHED_DEVICE_S           "Ger�t %s entfernt"
  IDS_ATTACHED_S_TO_DEVICE_S      "%s mit Ger�t#%s verbunden"
  IDS_DETACHED_TAPE               "Band Image entfernt"
  IDS_HISTORY_RECORDED_UNKNOWN    "History mit unbekanter Version aufgezeichnet"
  IDS_HISTORY_RECORDED_VICE_S     "History mit Vice-%s aufgezeichnet"
  IDS_PAUSED                      "pausiert"
  IDS_FRAME_NUMBER                "Rahmen #"
  IDS_RESUMED                     "wiederhergestellt"
  IDS_REALLY_EXIT                 "Willst Du wirklich beenden?\nDaten im emulierten Speicher RAM gehen verloren."
  IDS_TFE_PROBLEM                 "TFE/RR-Net ist auf Deinem System nicht verf�gbar, \nes fehlt eine wichtige Komponente. Siehe auch\n\n      http://vicekb.trikaliotis.net/13-005\n\nf�r m�gliche Ursachen und zur Aktivierung der Netzwerkunterst�tzung in Vice."
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net Unterst�tzung"
  IDS_CANNOT_AUTOSTART_FILE       "Autostart von angeforderter Datei fehlgeschlagen."
  IDS_ATTACHED_TAPE_S             "Band Image %s eingelegt"
  IDS_SETTINGS_SAVED_SUCCESS      "Einstellungen erfolgreich gespeichert"
  IDS_SETTINGS_LOADED_SUCCESS     "Einstellungen erfolgreich geladen."
  IDS_ATTACH_DISK_IMAGE           "Disk Image einlegen"
  IDS_ATTACH_TAPE_IMAGE           "Band Image einlegen"
  IDS_AUTOSTART_IMAGE             "Autostart von Disk/Band Image"
  IDS_INVALID_CARTRIDGE           "Ung�ltiges Erweiterungsmodul Image"
  IDS_BAD_CARTRIDGE_CONFIG        "Fehlerhafte Modul Konfiguration im UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Ung�ltiges Erweiterungsmodul Image"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Konsole Log Ausgabe Image"
  IDS_LOG_FILES_TYPE              "VICE Konsole Log Dateien (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Kann Log-Datei %s nicht schreiben"
  IDS_LOAD_FLIP_LIST_FILE         "Fliplist Datei laden"
  IDS_CANNOT_READ_FLIP_LIST       "Lesen von Fliplist Datei fehlgeschlagen"
  IDS_SAVE_FLIP_LIST_FILE         "Fliplist Datei speichern"
  IDS_CANNOT_WRITE_FLIP_LIST      "Schreiben von Fliplist Datei fehlgeschlagen"
  IDS_SELECT_KEYMAP_FILE          "Symbolische Keymap Datei definieren"
  IDS_SAVE_KEYMAP_FILE            "Keymap Datei speichern"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Schreiben von keymap Datei fehlgeschlagen"
  IDS_SAVE_CONFIG_FILE            "Speichere Konfigurationsdatei"
  IDS_LOAD_CONFIG_FILE            "Lade Konfigurationsdatei"
  IDS_MAPPING                     "Zuordnung"
  IDS_KEYBOARD_SETTINGS           "Tastatur Einstellungen"
  IDS_ATTACH                      "Einlegen"
  IDS_PLEASE_ENTER_A_FILENAME     "Bitte Dateinamen eingeben."
  IDS_OVERWRITE_EXISTING_IMAGE    "Existierende Datei �berschreiben?"
  IDS_CANNOT_CREATE_IMAGE         "Kann Imagedatei nicht erzeugen!"
  IDS_COMMAND_LINE_OPTIONS        "Kommandozeilen Paramteter"
  IDS_COMMAND_OPTIONS_AVAIL       "Welche Kommandozeilen Parameter sind verf�gbar?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Kein Treiber ausgew�hlt oder gew�hlter Treiber wird nicht unterst�tzt"
  IDS_CANT_WRITE_SCREENSHOT_S     "Kann Snapshot Datei `%s' nicht speichern."
  IDS_AUTOSTART_DISK_IMAGE        "Autostart Disk Image"
  IDS_SELECT_FS_DIRECTORY         "Systemverzeichnis w�hlen"
  IDS_PRINTER_USERPORT            "Drucker Userport"
  IDS_PRINTER_4                   "Drucker 4"
  IDS_PRINTER_5                   "Drucker 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Laufwerk 8"
  IDS_DRIVE_9                     "Laufwerk 9"
  IDS_DRIVE_10                    "Laufwerk 10"
  IDS_DRIVE_11                    "Laufwerk 11"
  IDS_PERIPHERAL_SETTINGS         "Peripherie Einstellungen"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Kann Snapshot Datei nicht speichern."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Kann Snapshot Datei nicht laden"
  IDS_LOAD_S_ROM_IMAGE            "Lade %s ROM Image Datei"
  IDS_SELECT_ROMSET_ARCHIVE       "ROM Satz Archiv w�hlen"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Kann ROM Satz Archiv nicht laden!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Fehler beim speichern des ROM Satz Archivs!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Kann ROM Satz Datei nicht laden!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Fehler beim speichern der ROM Satz Datei!"
  IDS_SELECT_ROMSET_FILE          "ROM Satz Datei w�hlen"
  IDS_ROMSET                      "Rom Satz"
  IDS_COMPUTER                    "Computer"
  IDS_DRIVE                       "Laufwerk"
  IDS_ROM_SETTINGS                "ROM Einstellungen"
  IDS_SAVE_SNAPSHOT_IMAGE         "Snapshot Datei speichern"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Kann Snapshot Datei `%s' nicht speichern."
  IDS_LOAD_SNAPSHOT_IMAGE         "Snapshot laden"
  IDS_COULD_NOT_LOAD_PALETTE      "Kann Paletten Datei nicht laden."
  IDS_LOAD_VICE_PALETTE_FILE      "VICE Paletten Datei laden"
  IDS_FULLSCREEN                  "Vollbild/Direct X"
  IDS_CRT_EMULATION               "CRT Emulation"
  IDS_RENDER_FILTER               "Render Filter"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Video Einstellungen"
  IDS_FILE_SYSTEM                 "Dateisystem"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Reales IEC Ger�t"
#endif
  IDS_RS232_DEVICE_I              "RS232 Ger�t %i"
  IDS_ATTACH_CRT_CART_IMAGE       "CRT Erweiterungsmodul Image einlegen"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "8KB Erweiterungsmodul (raw) Image einlegen"
  IDS_ATTACH_RAW_16KB_CART_IMG    "16KB Erweiterungsmodul (raw) Image einlegen"
  IDS_ATTACH_AR_CART_IMAGE        "32kB Action Replay Image (raw) einlegen"
  IDS_ATTACH_AR3_CART_IMAGE       "16kB Action Replay MK3 Image (raw) einlegen"
  IDS_ATTACH_AR4_CART_IMAGE       "32kB Action Replay MK4 Image einlegen"
  IDS_ATTACH_STARDOS_CART_IMAGE   "16kB Stardos Erweiterungsmodul Image (raw) einlegen"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "32kB Atomic Power Image einlegen"
  IDS_ATTACH_EPYX_FL_CART_IMG     "8kB Epyx Fastload Image (raw) einlegen"
  IDS_ATTACH_IEEE488_CART_IMG     "IEEE Schnittstellen Erweiterungsmodul Image einlegen"
  IDS_ATTACH_RETRO_R_CART_IMG     "64kB Retro Replay Image einlegen"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "512kB MMC Replay Image (raw) einlegen"
  IDS_ATTACH_IDE64_CART_IMAGE     "64kB IDE64 Image einlegen"
  IDS_ATTACH_SS4_CART_IMAGE       "32kB Super Snapshot V4 Image (raw) einlegen"
  IDS_ATTACH_SS5_CART_IMAGE       "64kB Super Snapshot V5 Image (raw) einlegen"
  IDS_ATTACH_STB_CART_IMAGE       "Erweiterungsmodul Structured Basic (raw) Image einlegen"
  IDS_SELECT_CARTRIDGE_IMAGE      "Erweiterungsmodul Image Datei w�hlen"
  IDS_MODEL                       "Modell"
  IDS_DRIVE_SETTINGS              "Floppy Einstellungen"
  IDS_SELECT_START_SNAP_EVENT     "Startsnapshot f�r Ereignishistory festlegen"
  IDS_SELECT_END_SNAP_EVENT       "Startsnapshot f�r Ereignishistory festlegen"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *INSTABIL* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *INSTABIL* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE Hackers"
  IDS_WHO_MADE_WHAT               "Wer hat was gemacht?"
  IDS_LICENSE                     "Lizenz"
  IDS_NO_WARRANTY                 "Keine Garantie!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE ist ohne Garantie"
  IDS_PRESS_KEY_NORTHWEST         "Dr�cke Taste f�r NordWest"
  IDS_PRESS_KEY_NORTH             "Dr�cke Taste f�r Nord"
  IDS_PRESS_KEY_NORTHEAST         "Dr�cke Taste f�r NordOst"
  IDS_PRESS_KEY_EAST              "Dr�cke Taste f�r Ost"
  IDS_PRESS_KEY_SOUTHEAST         "Dr�cke Taste f�r S�dOst"
  IDS_PRESS_KEY_SOUTH             "Dr�cke Taste f�r S�d"
  IDS_PRESS_KEY_SOUTHWEST         "Dr�cke Taste f�r S�dWest"
  IDS_PRESS_KEY_WEST              "Dr�cke Taste f�r West"
  IDS_PRESS_KEY_FIRE              "Dr�cke Taste f�r Feuer"
  IDS_NO_USERPORT_ADAPTER         "Kein Userport Joystick Adapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA Userport Joystick Adapter"
  IDS_PET_USERPORT_ADAPTER        "PET Userport Joystick Adapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer Userport Joystick Adapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM Userport Joystick Adapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT Userport Joystick Adapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft Userport Joystick Adapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte Userport Joystick Adapter"
  IDS_NO_SIDCART_JOY              "SIDcart Modul deaktivieren"
  IDS_SIDCART_JOY                 "SIDcart Modul aktivieren"
  IDS_NUMPAD_AND_RCTRL            "Numpad + RCtrl"
  IDS_KEYSET_A                    "Tastaturbelegung A"
  IDS_KEYSET_B                    "Tastaturbelegung B"
  IDS_ALL_BUTTONS_AS_FIRE         "Alle Kn�pfe als Feuer"
  IDS_NUMERIC_SEE_ABOVE           "Numerisch (siehe oben)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Kein Knopf - Autofeuer deaktiviert"
  IDS_ALL_FILES_FILTER            "Alle Dateien (*.*)"
  IDS_PALETTE_FILES_FILTER        "Vice Paletten Dateien (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE Snapshot Dateien (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM Dateien (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 Dateien (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk Image Dateien (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Band Image Dateien (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Komprimierte Dateien (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT Erweiterungsmodul Dateien (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Raw Erweiterungsmodul Dateien (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE Fliplist Dateien (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE ROM Satzs Dateien (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE ROM Satz Archiv Dateien (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE Keymap Dateien (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodore Emulator Dateien (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexibel"
  IDS_ADJUSTING                   "Anpassend"
  IDS_EXACT                       "Exakt"
  IDS_SOUND_DRIVER_DIRECTX        "Sound Treiber: DirectX"
  IDS_SOUND_DRIVER_WMM            "Sound Treiber: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Media Dateien (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Konfiguriere Tastaturbelegung A"
  IDS_CONFIGURE_KEYSET_B          "Konfiguriere Tastaturbelegung B"
  IDS_SAVE_MEDIA_IMAGE            "Media Image speichern"
  IDS_S_AT_D_SPEED                "%s bei %d%% Geschwindigkeit, %d fps%s"
  IDS_TAPE                        "Band:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Aufnahme\n%02d:%02d"
  IDS_PLAYBACK                    "Wiedergabe\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Unbekannt"
  IDS_P_NUMBER                    "<Nummer>"
  IDS_SET_INPUT_JOYSTICK_1        "Input Ger�t f�r Joystick #1 definieren"
  IDS_SET_INPUT_JOYSTICK_2        "Input Ger�t f�r Joystick #2 definieren"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Input Ger�t f�r extra Joystick #1 definieren"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Input Ger�t f�r extra Joystick #2 definieren"
  IDS_SAVE_SETTINGS_ON_EXIT       "Einstellungen beim Beenden speichern"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Einstellungen beim Beenden nie speichern"
  IDS_CONFIRM_QUIT_VICE           "Best�tige beenden von VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Keine Best�tigung beim Beenden von VICE"
  IDS_USE_ALL_CPU_SMP             "Alle SMP CPUs benutzen"
  IDS_USE_FIRST_CPU_SMP           "Nur erste SMP SPU nutzen"
  IDS_START_VICE_FULLSCREEN_MODE  "Aktiviere VICE Vollbild Modus"
  IDS_DISABLE_DX9                 "DirectX9 Video Treiber deaktivieren"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Ein unerwarteter Fehler ist aufgetreten. Signal %d (%s) empfangen."
#else
  IDS_RECEIVED_SIGNAL_D           "Ein unerwarteter Fehler ist aufgetreten. Signal %d empfangen."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Idle"
  IDS_SERVER_LISTENING            "Server wartet auf Verbindung"
  IDS_CONNECTED_SERVER            "Server verbunden"
  IDS_CONNECTED_CLIENT            "Verbunden, Client"
  IDS_INVALID_PORT_NUMBER         "Ung�ltige Port Nummer"
  IDS_ERROR_STARTING_SERVER       "Fehler beim Starten des Netplay Servers."
  IDS_ERROR_CONNECTING_CLIENT     "Fehler beim Verbindungsaufbau zum Client"
#endif
  IDS_SOUND_RECORDING_STARTED     "Tonaufnahme gestartet..."
  IDS_SOUND_RECORDING_STOPPED     "Tonaufnahme gestoppt..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Abbruch"
  IDS_NONE                        "Kein"
  IDS_BROWSE                      "St�bern..."
  IDS_SPECIFY_MIDI_IN             "MIDI-In Ger�t spezifieren"
  IDS_SPECIFY_MIDI_OUT            "MIDI-Out Ger�t spezifieren"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Fehler beim Speichern der EasyFlash CRT Datei"
  IDS_NO_EASYFLASH_CART_INSERTED  "Kein Easyflash Image eingelegt"
  IDS_DATASETTE_CAPTION           "Datasette Einstellungen"
  IDS_DATASETTE_RESET_WITH_CPU    "Zur�cksetzen des Bandlaufwerks bei CPU Reset"
  IDS_DATASETTE_MOTOR_GROUP       "Motorgeschwindigkeit beim Lesen"
  IDS_DATASETTE_DELAY_TRIGGER     "Zyklen zus�tzliche Verz�gerung bei jedem Trigger"
  IDS_DATASETTE_DELAY_AT_ZERO     "Bandlaufwerk Zero Gap Verz�gerung"
  IDS_TOGGLE_USEIECDEVICE         "IEC Ger�t aktivieren"
  IDS_SELECTDISK                  "Disk Image"
  IDS_SELECTDIR                   "Verzeichnis"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Reales IEC Ger�t"
#endif
  IDS_SELECTNONE                  "Kein"
  IDS_AUTOSTART                   "Autostart"
  IDS_BROWSEDIR                   "St�bern..."
  IDS_TOGGLE_ATTACH_READONLY      "Schreibgesch�tzt einlegen"
  IDS_TOGGLE_READP00              "P00 Datei Laden"
  IDS_TOGGLE_WRITEP00             "P00 Dateien Schreiben"
  IDS_TOGGLE_HIDENONP00           "Non-P00 Dateien ausblenden"
  IDS_JOYSTICK_CAPTION            "Joystick Einstellungen"
  IDS_JOYSTICK_IN_PORT_1          "Joystick in Port #1"
  IDS_SELECT_FIRE_BUTTON          "Feuerknopf ausw�hlen"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Automatische Feuerknopf Einstellungen"
  IDS_AUTOFIRE_SPEED              "Autofeuer Geschwindigkeit (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick in Port #2"
  IDS_JOY_CONFIG_A                "Konfiguriere Tastaturbelegung A"
  IDS_JOY_CONFIG_B                "Konfiguriere Tastaturbelegung B"
  IDS_JOY_CALIBRATE               "Joysticks kalibrieren"
  IDS_EXTRA_JOYSTICK_CAPTION      "Extra Joystick Einstellungen"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick in extra Port #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick in extra Port #2"
  IDS_KEYSET_SW                   "S�d West"
  IDS_KEYSET_S                    "S�den"
  IDS_KEYSET_SE                   "S�d Ost"
  IDS_KEYSET_W                    "Westen"
  IDS_KEYSET_E                    "Osten"
  IDS_KEYSET_NW                   "Nord West"
  IDS_KEYSET_N                    "Norden"
  IDS_KEYSET_NE                   "Nord Ost"
  IDS_KEYSET_FIRE                 "Feuerknopf"
  IDS_SOUND_CAPTION               "Sound Ger�t Einstellungen konfigurieren"
  IDS_SOUND_DIRECTX               "DirectX Treiber"
  IDS_SOUND_WMM                   "WMM Treiber"
  IDS_SOUND_OUTPUT_MODE           "Ton Ausgabe Modus"
  IDS_SOUND_SAMPLE_FREQUENCY      "Sample Rate :"
  IDS_SOUND_BUFFER_SIZE           "Sound Puffergr��e :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Sound Fragmentgr��e :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Sehr klein"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Klein"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Mittel"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Gro�"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Sehr gro�"
  IDS_SOUND_SYNCH_METHOD          "Synchronisationsmethode :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Aktuell eingelegte Diskimages speichern"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Aktuelle ROMs speichern"
  IDS_FULLSCREEN_DRIVER           "Treiber:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Farbtiefe:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Aufl�sung:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Wiederholrate:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK Synchronisation"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "DX Primary Oberfl�chenrendering"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Seitenverh�ltnis beibehalten (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Echtes Seitenverh�ltnis"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Wert %.3f f�r %s ist unzul�ssig, benutze %.3f"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Wert %d f�r %s ist unzul�ssig, benutze %d"
  IDS_AUDIO_LEAK                  "Audio Leak"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Farbton (0..2)"
  IDS_COLORS_SATURATION           "S�ttigung (0..2)"
  IDS_COLORS_CONTRAST             "Kontrast (0..2)"
  IDS_COLORS_BRIGHTNESS           "Helligkeit (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Scanline Schatten (0..1)"
  IDS_CRT_BLUR                    "Unsch�rfe (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Ungerade Zeilenphase (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Ungerader Zeilenoffset (0..2)"
  IDS_VICII_PALETTE               "VICII Paletten"
  IDS_VIC_PALETTE                 "VIC Palette"
  IDS_CRTC_PALETTE                "CRTC Palette"
  IDS_VDC_PALETTE                 "VDC Palette"
  IDS_TED_PALETTE                 "TED Palette"
  IDS_VICII_COLORS                "VICII Farben"
  IDS_VIC_COLORS                  "VIC Farben"
  IDS_CRTC_COLORS                 "CRTC Farben"
  IDS_VDC_COLORS                  "VDC Farben"
  IDS_TED_COLORS                  "TED Farben"
  IDS_VICII_CRT_EMULATION         "VICII CRT Emulation"
  IDS_VIC_CRT_EMULATION           "VIC CRT Emulation"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT Emulation"
  IDS_VDC_CRT_EMULATION           "VDC CRT Emulation"
  IDS_TED_CRT_EMULATION           "TED CRT Emulation"
  IDS_VICII_RENDER_FILTER         "VICII Render Filter"
  IDS_VIC_RENDER_FILTER           "VIC Render Filter"
  IDS_CRTC_RENDER_FILTER          "CRTC Render Filter"
  IDS_VDC_RENDER_FILTER           "VDC Render Filter"
  IDS_TED_RENDER_FILTER           "TED Render Filter"
  IDS_VICII_AUDIO_LEAK            "VICII Audio Leak"
  IDS_VIC_AUDIO_LEAK              "VIC Audio Leak"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audio Leak"
  IDS_VDC_AUDIO_LEAK              "VDC Audio Leak"
  IDS_TED_AUDIO_LEAK              "TED Audio Leak"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Externe Farbtabelle:"
  IDS_RAM_CAPTION                 "RAM Einstellungen"
  IDS_RAM_INIT_AT_POWERUP         "Initialisierung beim Kaltstart"
  IDS_RAM_VALUE_FIRST_BYTE        "Wert erstes Byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "L�nge der konstanten Werte"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "L�nge des konstanten Musters"
  IDS_PRINTER_EMULATION           "Drucke Emulation"
  IDS_PRINTER_FORMFEED            "Seitenvorschub senden"
  IDS_FILESYSTEM_PRINTER          "Druck auf Dateisystem"
  IDS_PRINTER_DRVR                "Drucker Treiber"
  IDS_OUTPUT                      "Ausgabe"
  IDS_OUTPUT_TO_FILE              "Ausgabe auf Datei #"
  IDS_OUTPUT_FILE1_NAME           "Ausgabe Datei #1 Name"
  IDS_OUTPUT_FILE2_NAME           "Ausgabe Datei #2 Name"
  IDS_OUTPUT_FILE3_NAME           "Ausgabe Datei #3 Name"
  IDS_ROMSET_SELECT_ARCHIVE       "ROM Satz Archiv"
  IDS_ROMSET_ARCHIVE_LOAD         "Archiv laden"
  IDS_ROMSET_ARCHIVE_SAVE         "Archiv speichern"
  IDS_ROMSET_CONFIGURATION        "Konfigurationen"
  IDS_ROMSET_ARCHIVE_APPLY        "Best�tigen"
  IDS_ROMSET_ARCHIVE_NEW          "Neu"
  IDS_ROMSET_ARCHIVE_DELETE       "L�schen"
  IDS_ROMSET_SELECT_FILE          "ROM Satz Datei"
  IDS_ROMSET_FILE_LOAD            "Romsatz laden"
  IDS_ROMSET_FILE_SAVE            "Romsatz speichern"
  IDS_CUSTOM_SPEED_CAPTION        "Benutzerdefinierte Geschwindigkeit"
  IDS_ENTER_CUSTOM_SPEED          "Geschwindigkeit [%] einstellen"
  IDS_NEW_CONFIGURATION           "Neue Konfiguration"
  IDS_ENTER_CONFIGURATION_NAME    "Konfigurationsnamen eingeben"
  IDS_RS232_CAPTION               "RS232 Einstellungen"
  IDS_RS232_DEV_1                 "RS232 Ger�t 1"
  IDS_RS232_DEV_2                 "RS232 Ger�t 2"
  IDS_RS232_DEV_3                 "RS232 Ger�t 3"
  IDS_RS232_DEV_4                 "RS232 Ger�t 4"
  IDS_NETWORK_CAPTION             "Netplay Einstellungen"
  IDS_CURRENT_MODE                "Aktueller Modus"
  IDS_SERVER_BIND                 "Server Bind"
  IDS_TCP_PORT                    "TCP Port: "
  IDS_NETWORK_SERVER              "Server starten"
  IDS_NETWORK_CLIENT              "Verbinden mit"
  IDS_NETWORK_DISCONNECT          "Verbindung Trennen"
  IDS_CONTROL                     "Kontrolle"
  IDS_SERVER                      "Server"
  IDS_CLIENT                      "Client"
  IDS_KEYBOARD                    "Tastatur"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Ger�te"
  IDS_SETTINGS                    "Einstellungen"
  IDS_TOGGLE_CONSOLE_APPEND       "An bestehende Log Datei anh�ngen"
  IDS_IMAGE_CONTENTS              "Image Datei Inhalt"
  IDS_NEW_IMAGE                   "Neue Image Datei"
  IDS_NAME                        "Name"
  IDS_ID                          "ID"
  IDS_TYPE                        "Typ"
  IDS_BLANK_IMAGE                 "Image Datei erzeugen"
  IDS_NEW_TAP_IMAGE               "Neue TAP Image Datei"
  IDS_SAVE                        "Speichern"
  IDS_SELECT_DRIVER               "Treiber ausw�hlen"
  IDS_FFMPEG_SETTINGS             "FFMPEG Einstellungen"
  IDS_FORMAT                      "Format"
  IDS_AUDIO_CODEC                 "Audiocodec"
  IDS_BITRATE                     "Bitrate"
  IDS_VIDEO_CODEC                 "Videocodec"
  IDS_SOUND_RECORD_CAPTION        "Tonaufnahme Einstellungen"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Tonaufnahmeformat"
  IDS_SOUND_RECORD_FILE_LABEL     "Tonaufnahmedatei"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Zeichensatz"
  IDS_COMPUTER_RESOURCES_CAPTION  "Computer resourcen"
  IDS_COMPUTER_RESOURCES          "Computer Resourcen zum ROM Satz gespeichert"
  IDS_DRIVE_RESOURCES_CAPTION     "Floppy Resourcen"
  IDS_DRIVE_RESOURCES             "Floppy Resourcen zum ROM Satz gespeichert"
  IDS_SYMBOLIC                    "Symbolisch"
  IDS_POSITIONAL                  "Positional"
  IDS_DUMP_KEYSET                 "Aktuelle Keymap in Datei speichern"
  IDS_DUMP_SHORTCUTS              "Aktuelle Tastenk�rzel in Datei speichern"
  IDS_SYMBOLIC_US                 "Symbolisch US"
  IDS_SYMBOLIC_DE                 "Symbolisch DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "Speicher"
  IDS_DRIVE_TYPE                  "Ger�te Typ"
  IDS_40_TRACK_HANDLING           "40 Spur Umgang"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Nie Erweitern"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Bei Erweiterung R�ckfrage"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Erweitern wenn n�tig"
  IDS_IDLE_METHOD                 "Idle Methode"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Trap idle"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Zyklen auslassen"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Parallel Kabel"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Laufwerk Erweiterung"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Speicher"
  IDS_SID_GENGROUP1               "SID Modell"
  IDS_SID_FILTERS                 "SID Filter"
  IDS_MP_FILE                     "Datei"
  IDS_MP_ATTACH_DISK_IMAGE        "Disk Image einlegen"
  IDS_MP_DETACH_DISK_IMAGE        "Disk Image entfernen"
  IDS_MP_FLIP_LIST                "Flipliste"
  IDS_MP_DATASETTE_CONTROL        "Bandlaufwerk Kontrolle"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Erweiterungsmodul einlegen..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Modus"
#endif
  IDS_MP_EDIT                     "Bearbeiten"
  IDS_MP_SNAPSHOT                 "Snapshot"
  IDS_MP_RECORDING_START_MODE     "Aufnahme Start Modus"
  IDS_MP_OPTIONS                  "Optionen"
  IDS_MP_REFRESH_RATE             "Wiederholrate"
  IDS_MP_MAXIMUM_SPEED            "Maximale Geschwindigkeit"
  IDS_MP_VIDEO_STANDARD           "Video Standard"
  IDS_MP_DRIVE_SYNC_FACTOR        "Laufwerkt Sync Faktor"
  IDS_MP_SETTINGS                 "Einstellungen"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Erweiterungsmodul I/O Einstellungen"
  IDS_MP_LANGUAGE                 "Sprache"
  IDS_MP_HELP                     "Hilfe"
  IDS_MP_VIEW                     "Ansehen"
  IDS_MP_WINDOW                   "Fenster"
  IDS_MI_EXIT                     "Exit"
  IDS_MI_ABOUT                    "�ber VICE..."
  IDS_MI_PAUSE                    "Pause"
  IDS_MI_EDIT_COPY                "Kopie"
  IDS_MI_EDIT_PASTE               "Einf�gen"
  IDS_MI_AUTOSTART                "Autostart von Disk/Band Image..."
  IDS_MI_RESET_HARD               "Hart"
  IDS_MI_RESET_SOFT               "Weich"
  IDS_MI_DRIVE8                   "Laufwerk 8"
  IDS_MI_DRIVE9                   "Laufwerk 9"
  IDS_MI_DRIVE10                  "Laufwerk 10"
  IDS_MI_DRIVE11                  "Laufwerk 11"
  IDS_MI_ATTACH_TAPE              "Band Image einlegen..."
  IDS_MI_DETACH_TAPE              "Band Image entfernen"
  IDS_MI_DETACH_ALL               "Alle"
  IDS_MI_TOGGLE_SOUND             "Sound Wiedergabe"
  IDS_MI_TOGGLE_DOUBLESIZE        "Doppelte Gr��e"
  IDS_MI_TOGGLE_DOUBLESCAN        "Doppelt Scan"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Vertical verdpoppeln"
  IDS_MI_DRIVE_TRUE_EMULATION     "Pr�zise Floppy Emulation"
  IDS_MI_DRIVE_SOUND_EMULATION    "Laufwerk Ger�uschemulation"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Pr�zise Floppy Emulation bei Autostart beachten"
  IDS_MI_TOGGLE_VIDEOCACHE        "Video Cache"
  IDS_MI_DRIVE_SETTINGS           "Floppy Einstellungen..."
  IDS_MI_CART_SMART_ATTACH        "Smart-Einlegen Image Date..."
  IDS_MI_CART_ATTACH_CRT          "CRT Image..."
  IDS_MI_CART_ATTACH_8KB          "Generisches 8kB Image..."
  IDS_MI_CART_ATTACH_16KB         "Generisches 16kB Image..."
  IDS_MI_CART_ATTACH_AR           "Action Replay Image..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 Image..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 Image..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos Image..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power Image..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx Fastload Image..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE 488 Schnittstellenmodul..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay Image..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay Image..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 Schnittstellenmodul..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 Image..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 Image..."
  IDS_MI_CART_ATTACH_STB          "Structured Basic Image..."
  IDS_MI_FLIP_ADD                 "Aktuelles Image hinzuf�gen (Ger�t 8)"
  IDS_MI_FLIP_REMOVE              "Aktuelles Image entfernen (Ger�t 8)"
  IDS_MI_FLIP_NEXT                "N�chstes Image (Ger�t 8)"
  IDS_MI_FLIP_PREVIOUS            "Voriges Image (Ger�t 8)"
  IDS_MI_FLIP_LOAD                "Fliplist Datei laden"
  IDS_MI_FLIP_SAVE                "Fliplist Datei speichern"
  IDS_MI_DATASETTE_STOP           "Stop"
  IDS_MI_DATASETTE_START          "Start"
  IDS_MI_DATASETTE_FORWARD        "Forward"
  IDS_MI_DATASETTE_REWIND         "Rewind"
  IDS_MI_DATASETTE_RECORD         "Record"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Z�hler zur�cksetzen"
  IDS_MI_CART_SET_DEFAULT         "Aktuelles Erweiterungsmodul als Standard aktivieren"
  IDS_MI_TOGGLE_CART_RESET        "Reset bei Wechsel von Erweiterungsmodulen"
  IDS_MI_CART_DETACH              "Erweiterungsmodul Image(s) entfernen"
  IDS_MI_CART_FREEZE              "Erweiterungsmodul Freeze"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "Klein"
  IDS_MI_DEBUG_MODE_HISTORY       "History"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "History Automatische Wiedergabe"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Haupt CPU Trace"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Laufwerk0 CPU Trace"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Laufwerk1 CPU Trace"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Snapshot laden..."
  IDS_MI_SNAPSHOT_SAVE            "Snapshot Datei speichern..."
  IDS_MI_LOADQUICK                "Snapshot Image laden"
  IDS_MI_SAVEQUICK                "Quick-Snapshot Datei speichern"
  IDS_MI_EVENT_TOGGLE_RECORD      "Start/Stop Aufnahme History"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Start/Stop Wiedergabe History"
  IDS_MI_EVENT_SETMILESTONE       "Setze Aufnahme Meilenstein"
  IDS_MI_EVENT_RESETMILESTONE     "R�ckkehr zum Meilenstein"
  IDS_MI_EVENT_START_MODE_SAVE    "Speichere neuen Snapshot"
  IDS_MI_EVENT_START_MODE_LOAD    "Lade existierenden Snapshot"
  IDS_MI_EVENT_START_MODE_RESET   "Mit Reset starten"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Laufende Aufnahme �berschreiben"
  IDS_MI_EVENT_DIRECTORY          "Verzeichnis f�r Event Aufnahme"
  IDS_MI_MEDIAFILE                "Speichern/stop media Datei..."
  IDS_MI_SOUND_RECORD_START       "Tonaufnahme in Datei..."
  IDS_MI_SOUND_RECORD_STOP        "Tonaufnahme stoppen"
  IDS_MI_REFRESH_RATE_AUTO        "Automatisch"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Kein Limit"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Benutzerdefiniert"
  IDS_MI_TOGGLE_WARP_MODE         "Warp modus"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Immer im Vordergrund"
  IDS_MI_TOGGLE_DX9DISABLE        "DirectX9 Video Treiber deaktivieren"
  IDS_MI_SWAP_JOYSTICK            "Joystick ports austauschen"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Userport Joystick ports austauschen"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Gegen�berliegende Richtungen zulassen"
  IDS_MI_JOYKEYS_TOGGLE           "Joystick Tasten aktivieren"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtuelle Ger�te Traps"
  IDS_MI_MOUSE                    "Maus Ereignisse abfangen"
  IDS_MI_C64MODEL_SETTINGS        "C64 Modell Einstellungen..."
  IDS_MI_AUTOSTART_SETTINGS       "Autostart Einstellungen..."
  IDS_MI_VIDEO_SETTINGS           "Video Einstellungen..."
  IDS_MI_DEVICEMANAGER            "Peripherie Einstellungen..."
  IDS_MI_JOY_SETTINGS             "Joystick Einstellungen..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Userport Joystick Einstellungen..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sidcart Joystick Einstellungen..."
  IDS_MI_KEYBOARD_SETTINGS        "Tastatur Einstellungen..."
  IDS_MI_SOUND_SETTINGS           "Sound Einstellungen..."
  IDS_MI_ROM_SETTINGS             "ROM Einstellungen..."
  IDS_MI_RAM_SETTINGS             "RAM Einstellungen..."
  IDS_MI_DATASETTE_SETTINGS       "Datasette Einstellungen..."
  IDS_MI_VICII_SETTINGS           "VIC-II Einstellungen..."
  IDS_MI_MOUSE_SETTINGS           "Maus Einstellungen..."
  IDS_MI_SID_SETTINGS             "SID Einstellungen..."
  IDS_MI_RS232_SETTINGS           "RS232 Einstellungen..."
  IDS_MI_REU_SETTINGS             "REU Einstellungen..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM Einstellungen..."
  IDS_MI_RAMCART_SETTINGS         "RamCart Einstellungen..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box Einstellungen..."
  IDS_MI_EXPERT_SETTINGS          "Expert Cartridge Einstellungen..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC Einstellungen..."
  IDS_MI_MMC64_SETTINGS           "MMC64 Einstellungen..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay Einstellungen..."
  IDS_MI_RR_SETTINGS              "Retro Replay Einstellungen..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice Einstellungen..."
  IDS_MI_MIDI_SETTINGS            "MIDI Einstellungen..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX Einstellungen..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC Einstellungen..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lichtgriffel Einstellungen..."
  IDS_MI_IDE64_SETTINGS           "IDE64 Einstellungen..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernet Einstellungen..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA Einstellungen..."
  IDS_MI_RS232USER_SETTINGS       "RS232 Userport Einstellungen..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash Einstellungen..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander Einstellungen..."
  IDS_MI_TOGGLE_SFX_SS            "SFX Sound Sampler Modul aktivieren"
  IDS_MI_TOGGLE_USERPORT_RTC      "Userport RTC Erweiterung aktivieren"
  IDS_MI_SETTINGS_SAVE_FILE       "Speichere Einstellungen in angegebene Datei"
  IDS_MI_SETTINGS_LOAD_FILE       "Lade Einstellungen aus Datei"
  IDS_MI_SETTINGS_SAVE            "Einstellungen speichern"
  IDS_MI_SETTINGS_LOAD            "Gespeicherte Einstellungen Laden"
  IDS_MI_SETTINGS_DEFAULT         "Standard Einstellungen wiederherstellen"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Einstellungen beim Beenden speichern"
  IDS_MI_CONFIRM_ON_EXIT          "Best�tige beenden von VICE"
  IDS_MI_LANG_EN                  "Englisch"
  IDS_MI_LANG_DA                  "D�nisch"
  IDS_MI_LANG_DE                  "Deutsch"
  IDS_MI_LANG_ES                  "Spanisch"
  IDS_MI_LANG_FR                  "Franz�sisch"
  IDS_MI_LANG_HU                  "Ungarisch"
  IDS_MI_LANG_IT                  "Italienisch"
  IDS_MI_LANG_KO                  "Koreanisch"
  IDS_MI_LANG_NL                  "Holl�ndisch"
  IDS_MI_LANG_PL                  "Polnisch"
  IDS_MI_LANG_RU                  "Russisch"
  IDS_MI_LANG_SV                  "Schwedisch"
  IDS_MI_LANG_TR                  "T�rkisch"
  IDS_MI_CMDLINE                  "Kommandozeilen Paramteter"
  IDS_MI_CONTRIBUTORS             "VICE Hackers"
  IDS_MI_LICENSE                  "Lizenz"
  IDS_MI_WARRANTY                 "Keine Garantie!"
  IDS_MI_TOGGLE_FULLSCREEN        "Vollbild"
  IDS_MI_SIDCART_SETTINGS         "SID Modul Einstellungen..."
  IDS_MI_MON_OPEN                 "�ffnen"
  IDS_MI_MON_SAVE                 "Speichern"
  IDS_MI_MON_PRINT                "Drucken"
  IDS_MI_MON_EXIT                 "Exit        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Stop Debug"
  IDS_MI_MON_STOP_EXEC            "Stop Ausf�hrung"
  IDS_MI_MON_STEP_INTO            "Step in"
  IDS_MI_MON_STEP_OVER            "Step �ber"
  IDS_MI_MON_SKIP_RETURN          "Step bis return"
  IDS_MI_MON_GOTO_CURSOR          "Gehe zu cursor"
  IDS_MI_MON_EVAL                 "Auswerten"
  IDS_MI_MON_CURRENT              "Aktuelle Instruktion"
  IDS_MI_MON_WND_EVAL             "Auswertungsfenster"
  IDS_MI_MON_WND_REG              "Registerfenster"
  IDS_MI_MON_WND_MEM              "Speicherfenster"
  IDS_MI_MON_WND_DIS              "Disassemblerfenster"
  IDS_MI_MON_WND_CONSOLE          "Konsolenfenster"
  IDS_MI_MON_COMPUTER             "Computer"
  IDS_MI_MON_DRIVE8               "Laufwerk 8"
  IDS_MI_MON_DRIVE9               "Laufwerk 9"
  IDS_MI_MON_CASCADE              "Kaskadiert"
  IDS_MI_MON_TILE_VERT            "Vertical anordnen"
  IDS_MI_MON_TILE_HORIZ           "Horizontal anordnen"
  IDS_MI_MON_ARRANGE_ICONS        "Icons Anordnen"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "�Error VICE!"
  IDS_VICE_INFORMATION            "Informaci�n VICE"
  IDS_VICE_QUESTION               "VICE cuestion"
  IDS_FFMPEG_DLL_MISMATCH         "Su versi�n de ffmpeg dll no se corresponde."
  IDS_DIRECTDRAW_ERROR            "Error DirectDraw: C�digo:%8x Error:%s"
  IDS_CANNOT_SAVE_SETTINGS        "No puedo grabar ajustes"
  IDS_CANNOT_LOAD_SETTINGS        "No puedo cargar ajustes."
  IDS_DEFAULT_SETTINGS_RESTORED   "Ajustes por defecto restaurados."
  IDS_CANNOT_ATTACH_FILE          "No puedo insertar el fichero especificado"
  IDS_START_MONITOR               "%s\n\n�Inicio el monitor? (No resetear�, cancelar continuar�)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "�Imagen extendida a formato 40-tracks?"
  IDS_DETACHED_DEVICE_S           "Extraer perif�rico %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Insertado %s en unidad#%s"
  IDS_DETACHED_TAPE               "Cinta extraida"
  IDS_HISTORY_RECORDED_UNKNOWN    "Historial grabado con veri�n desconocida"
  IDS_HISTORY_RECORDED_VICE_S     "Historial grabado con VICE-%s"
  IDS_PAUSED                      "Detener"
  IDS_FRAME_NUMBER                "Cuadro #"
  IDS_RESUMED                     "Continuar"
  IDS_REALLY_EXIT                 "�Realmente quieres salir?\n\nSe perder�n todos los datos presentes en la RAM emulada."
  IDS_TFE_PROBLEM                 "El soporte TFE/RR-Net no est� disponible en su sistema,\nhay partes importantes perdidas.Echele una\nojeada a la base de soporte  VICE knowledge\n\n      http://vicekb.trikaliotis.net/13-005\n\nPara las posibles razones y activar networking con VICE."
  IDS_TFE_RRNET_SUPPORT           "Soporte TFE/RR-Net"
  IDS_CANNOT_AUTOSTART_FILE       "No puedo autoarrancar el fichero especificado."
  IDS_ATTACHED_TAPE_S             "Cinta insertada %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Ajustes grabados correctamente"
  IDS_SETTINGS_LOADED_SUCCESS     "Ajustes cargados con �xito."
  IDS_ATTACH_DISK_IMAGE           "Insertar imagen de disco"
  IDS_ATTACH_TAPE_IMAGE           "Insertar imagen de cinta"
  IDS_AUTOSTART_IMAGE             "Autoarranque imagen de disco/cinta"
  IDS_INVALID_CARTRIDGE           "Imagen de cartucho incorrecta"
  IDS_BAD_CARTRIDGE_CONFIG        "�Configuracion erronea del cartucho en UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Imagen de cartucho incorrecta"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Imagen de salida de la consola log"
  IDS_LOG_FILES_TYPE              "Ficheros de la consola log VICE  (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "No puedo grabar fichero log `%s'."
  IDS_LOAD_FLIP_LIST_FILE         "Cargar lista de ficheros a conmutar"
  IDS_CANNOT_READ_FLIP_LIST       "No puedo leer fichero de lista de intercambio"
  IDS_SAVE_FLIP_LIST_FILE         "Grabar lista de ficheros a conmutar"
  IDS_CANNOT_WRITE_FLIP_LIST      "No puedo grabar fichero de lista de intercambio"
  IDS_SELECT_KEYMAP_FILE          "Seleccionar fichero de mapa de teclado"
  IDS_SAVE_KEYMAP_FILE            "Grabar fichero de mapa de teclado"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "No puedo grabar fichero de mapa de teclado"
  IDS_SAVE_CONFIG_FILE            "Grabar fichero de configuraci�n"
  IDS_LOAD_CONFIG_FILE            "Cargar fichero de configuraci�n"
  IDS_MAPPING                     "Mapeado"
  IDS_KEYBOARD_SETTINGS           "Ajustes de teclado"
  IDS_ATTACH                      "Insertar"
  IDS_PLEASE_ENTER_A_FILENAME     "Por favor, introduzca nombre de fichero."
  IDS_OVERWRITE_EXISTING_IMAGE    "�Sobreescribo la imagen actual?"
  IDS_CANNOT_CREATE_IMAGE         "�No puedo crear fichero imagen!"
  IDS_COMMAND_LINE_OPTIONS        "Opciones de la linea de comandos"
  IDS_COMMAND_OPTIONS_AVAIL       "�Qu� opciones L.comandos est�n disponibles?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "controlador no seleccionado o no disponible"
  IDS_CANT_WRITE_SCREENSHOT_S     "No puedo grabar el fichero de Captura de pantalla `%s'."
  IDS_AUTOSTART_DISK_IMAGE        "Autoarranque de imagen de disco"
  IDS_SELECT_FS_DIRECTORY         "Seleccionar fichero de directorio del sistema"
  IDS_PRINTER_USERPORT            "Port de impresora"
  IDS_PRINTER_4                   "Impresora 4"
  IDS_PRINTER_5                   "Impresora 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Unidad disco 8"
  IDS_DRIVE_9                     "Unidad disco 9"
  IDS_DRIVE_10                    "Unidad disco 10"
  IDS_DRIVE_11                    "Unidad disco 11"
  IDS_PERIPHERAL_SETTINGS         "Ajustes de perif�ricos"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "No puedo grabar Instant�nea"
  IDS_CANNOT_READ_SNAPSHOT_IMG    "No puedo leer Instant�nea"
  IDS_LOAD_S_ROM_IMAGE            "Cargar imagen de la ROM %s"
  IDS_SELECT_ROMSET_ARCHIVE       "Seleccionar archivo ROM set"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "�No puedo cargar el archivo ROM set!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "�No puedo grabar el archivo ROM set!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "�No puedo cargar el fichero ROM set!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "�No puedo grabar el fichero ROM set!"
  IDS_SELECT_ROMSET_FILE          "Seleccionar fichero ROM set"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "Ordenador"
  IDS_DRIVE                       "Drive"
  IDS_ROM_SETTINGS                "Ajustes ROM"
  IDS_SAVE_SNAPSHOT_IMAGE         "Grabar Instant�nea"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "No puedo grabar Instant�nea `%s'."
  IDS_LOAD_SNAPSHOT_IMAGE         "Cargar Instant�nea"
  IDS_COULD_NOT_LOAD_PALETTE      "No puedo cargar fichero de paleta."
  IDS_LOAD_VICE_PALETTE_FILE      "Cargar fichero de paleta VICE"
  IDS_FULLSCREEN                  "Pantalla completa/DirectX"
  IDS_CRT_EMULATION               "Emulaci�n CRT"
  IDS_RENDER_FILTER               "Filtro de renderizado"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Ajustes de video"
  IDS_FILE_SYSTEM                 "Fichero de sistema"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Periferico real IEC"
#endif
  IDS_RS232_DEVICE_I              "Perif�rico RS232 %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Insertar imagen de cartucho CRT"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Insertar imagen de cartucho 8KB"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Insertar imagen de cartucho 16KB"
  IDS_ATTACH_AR_CART_IMAGE        "Insertar imagen cartucho Action Replay 32KB"
  IDS_ATTACH_AR3_CART_IMAGE       "Insertar imagen cartucho Action Replay MK3 16KB"
  IDS_ATTACH_AR4_CART_IMAGE       "Insertar imagen cartucho Action Replay MK4 32KB"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Insertar imagen cartucho Stardos 16KB"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Insertar imagen cartucho Atomic Power 32KB"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Insertar imagen cartucho Epyx Fastload 8KB"
  IDS_ATTACH_IEEE488_CART_IMG     "Insertar imagen de cartucho Interface IEEE-488"
  IDS_ATTACH_RETRO_R_CART_IMG     "Insertar imagen cartucho Retro Replay 64KB"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Insertar imagen cartucho MMC Replay 512KB"
  IDS_ATTACH_IDE64_CART_IMAGE     "Insertar imagen cartucho IDE64 64KB"
  IDS_ATTACH_SS4_CART_IMAGE       "Insertar imagen cartucho Super Snapshot V4 32KB"
  IDS_ATTACH_SS5_CART_IMAGE       "Insertar imagen cartucho Super Snapshot V5 64KB"
  IDS_ATTACH_STB_CART_IMAGE       "Insertar imagen cartucho Structured Basic"
  IDS_SELECT_CARTRIDGE_IMAGE      "Seleccionar imagen cartucho"
  IDS_MODEL                       "Modelo"
  IDS_DRIVE_SETTINGS              "Ajustes unidad disco"
  IDS_SELECT_START_SNAP_EVENT     "Selecionar inicio volcado para historial de eventos"
  IDS_SELECT_END_SNAP_EVENT       "Seleccionar fin volcado para historial de eventos"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Versi�n %s *INESTABLE* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Versi�n %s rev %s *INESTABLE* (%s)"
#else
  IDS_VERSION_S                   "Versi�n %s (%s)"
  IDS_VERSION_S_REV_S             "Versi�n %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "Colaboradores VICE"
  IDS_WHO_MADE_WHAT               "�Quien hizo qu�?"
  IDS_LICENSE                     "Licencia"
  IDS_NO_WARRANTY                 "�Sin garantias!"
  IDS_VICE_WITHOUT_WARRANTY       "�VICE se distribuye SIN NINGUNA GARANTIA!"
  IDS_PRESS_KEY_NORTHWEST         "Pulsa tecla para Noroeste"
  IDS_PRESS_KEY_NORTH             "Pulsa tecla para Norte"
  IDS_PRESS_KEY_NORTHEAST         "Pulsa tecla para Noreste"
  IDS_PRESS_KEY_EAST              "Pulsa tecla para Este"
  IDS_PRESS_KEY_SOUTHEAST         "Pulsa tecla para Sureste"
  IDS_PRESS_KEY_SOUTH             "Pulsa tecla para Sur"
  IDS_PRESS_KEY_SOUTHWEST         "Pulsa tecla para Suroeste"
  IDS_PRESS_KEY_WEST              "Pulsa tecla para Oeste"
  IDS_PRESS_KEY_FIRE              "Pulsa tecla para Disparo"
  IDS_NO_USERPORT_ADAPTER         "No hay adaptador joystick en el puerto de usuario"
  IDS_CGA_USERPORT_ADAPTER        "Adaptador de puerto de juegos CGA"
  IDS_PET_USERPORT_ADAPTER        "Adaptador de puerto de juegos PET"
  IDS_HUMMER_USERPORT_ADAPTER     "Adaptador de puerto de juegos Hummer"
  IDS_OEM_USERPORT_ADAPTER        "Adaptador de puerto de juegos OEM"
  IDS_HIT_USERPORT_ADAPTER        "Adpatador de puerto de juegos HIT"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Adaptador puerto joy Kingsoft"
  IDS_STARBYTE_USERPORT_ADAPTER   "Adaptador puerto joy Starbyte"
  IDS_NO_SIDCART_JOY              "Deshabilitar joystic cartucho SID"
  IDS_SIDCART_JOY                 "Permitir joystic cartucho SID"
  IDS_NUMPAD_AND_RCTRL            "Teclado n�merico+CTRL dcha"
  IDS_KEYSET_A                    "Keyset A"
  IDS_KEYSET_B                    "Keyset B"
  IDS_ALL_BUTTONS_AS_FIRE         "Todos los botones como disparo"
  IDS_NUMERIC_SEE_ABOVE           "numerico (ver arriba)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Sin Botones - Autodisparo deshabilidato"
  IDS_ALL_FILES_FILTER            "Todos los ficheros (*.*)"
  IDS_PALETTE_FILES_FILTER        "Ficheros de paletas VICE  (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "Ficheros Instant�nea de VICE (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "Ficheros CBM (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "Ficheros IDE64 (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Ficheros imagen de disco (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Ficheros imagen de cinta (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Ficheros comprimidos (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "Ficheros imagen de cartucho (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Ficheros imagen cartucho raw (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "Ficheros de intercambio VICE (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "Ficheros romset VICE (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "Archivos romset VICE (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "Fichero keymap VICE (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Ficheros de emulador Commodore (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexible"
  IDS_ADJUSTING                   "Ajustado"
  IDS_EXACT                       "Exacto"
  IDS_SOUND_DRIVER_DIRECTX        "controlador de sonido: DirectX"
  IDS_SOUND_DRIVER_WMM            "controlador de sonido: VMM"
  IDS_SYSTEM                      "Sistema"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Estereo"
  IDS_MEDIA_FILES_FILTER          "Fichero media (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    "kB"
  IDS_CONFIGURE_KEYSET_A          "Configurar Keyset A"
  IDS_CONFIGURE_KEYSET_B          "Configurar Keyset B"
  IDS_SAVE_MEDIA_IMAGE            "Grabar fichero"
  IDS_S_AT_D_SPEED                "%s a %d%% velocidad, %d fps%s"
  IDS_TAPE                        "Cinta:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "grabando\n%02d:%02d"
  IDS_PLAYBACK                    "Reproduciendo\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Desconocido"
  IDS_P_NUMBER                    "<n�mero>"
  IDS_SET_INPUT_JOYSTICK_1        "Perif�rico de entrada para joystick #1"
  IDS_SET_INPUT_JOYSTICK_2        "Perif�rico de entrada para joystick #2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Perif�rico de entrada para joystick extra #1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Perif�rico de entrada para joystick extra #2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Grabar ajustes al salir"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "no grabar ajustes al salir"
  IDS_CONFIRM_QUIT_VICE           "Confirmar cierre de VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Nunca confirmar cierre de VICE"
  IDS_USE_ALL_CPU_SMP             "Usar toda la CPU en sistemas SMP"
  IDS_USE_FIRST_CPU_SMP           "Usar s�lo la primera CPU en sistemes SMP"
  IDS_START_VICE_FULLSCREEN_MODE  "Iniciar VICE en modo de pantalla completa"
  IDS_DISABLE_DX9                 "Deshabilitar controlador de video DirectX9"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Se ha producido un erros inesperado. Recibida se�al %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Se ha producido un erros inesperado. Recibida se�al %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Inactivo"
  IDS_SERVER_LISTENING            "Servidor en escucha"
  IDS_CONNECTED_SERVER            "Servidor conectado"
  IDS_CONNECTED_CLIENT            "Cliente conectado"
  IDS_INVALID_PORT_NUMBER         "N�mero de puerto incorrecto"
  IDS_ERROR_STARTING_SERVER       "Ha ocurrido error al iniciar el servidor"
  IDS_ERROR_CONNECTING_CLIENT     "Ha ocurrido error al conectar el cliente"
#endif
  IDS_SOUND_RECORDING_STARTED     "Grabaci�n de sonido iniciada..."
  IDS_SOUND_RECORDING_STOPPED     "Grabaci�n de sonido detenida..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Cancelar"
  IDS_NONE                        "No"
  IDS_BROWSE                      "Explora..."
  IDS_SPECIFY_MIDI_IN             "Especificar perif�rico entrada MIDI"
  IDS_SPECIFY_MIDI_OUT            "Especificar perif�rico salida MIDI"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Error al grabar fichero EasyFlash crt"
  IDS_NO_EASYFLASH_CART_INSERTED  "No hay cartucho EasyFlash insertado"
  IDS_DATASETTE_CAPTION           "Ajustes Datasette"
  IDS_DATASETTE_RESET_WITH_CPU    "Reiniciar Datasette con la CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Velocidad del motor durante la lectura"
  IDS_DATASETTE_DELAY_TRIGGER     "ciclos(s) adicionales de retardo para cada pulsaci�n"
  IDS_DATASETTE_DELAY_AT_ZERO     "Retardo datasette zero gap"
  IDS_TOGGLE_USEIECDEVICE         "Use perif�rico IEC"
  IDS_SELECTDISK                  "Imag. disco"
  IDS_SELECTDIR                   "Directorio"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Periferico real IEC"
#endif
  IDS_SELECTNONE                  "No"
  IDS_AUTOSTART                   "Autoarranque"
  IDS_BROWSEDIR                   "Explora..."
  IDS_TOGGLE_ATTACH_READONLY      "Inserta s�lo lectura"
  IDS_TOGGLE_READP00              "Leer ficheros P00"
  IDS_TOGGLE_WRITEP00             "Grabar ficheros P00"
  IDS_TOGGLE_HIDENONP00           "Ocultar ficheros no P00"
  IDS_JOYSTICK_CAPTION            "Ajustes de joystick"
  IDS_JOYSTICK_IN_PORT_1          "Joystick en puerto #1"
  IDS_SELECT_FIRE_BUTTON          "Seleccionar bot�n de disparo"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Ajustes de autodisparo"
  IDS_AUTOFIRE_SPEED              "Velocidad  autodisparo (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick en puerto #2"
  IDS_JOY_CONFIG_A                "Configurar Keyset A"
  IDS_JOY_CONFIG_B                "Configurar Keyset B"
  IDS_JOY_CALIBRATE               "Calibrar Joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Ajustes joystick suplementario"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick en puerto suplementario #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick en puerto suplementario #2"
  IDS_KEYSET_SW                   "Suroeste"
  IDS_KEYSET_S                    "Sur"
  IDS_KEYSET_SE                   "Sureste"
  IDS_KEYSET_W                    "Oeste"
  IDS_KEYSET_E                    "Este"
  IDS_KEYSET_NW                   "Noroeste"
  IDS_KEYSET_N                    "Norte"
  IDS_KEYSET_NE                   "Noreste"
  IDS_KEYSET_FIRE                 "Bot�n de disparo"
  IDS_SOUND_CAPTION               "Ajustes de configuraci�n del perif�rico de sonido"
  IDS_SOUND_DIRECTX               "controlador DirectX"
  IDS_SOUND_WMM                   "controlador WMM"
  IDS_SOUND_OUTPUT_MODE           "Modo salida sonido"
  IDS_SOUND_SAMPLE_FREQUENCY      "Velocidad de sampleado :"
  IDS_SOUND_BUFFER_SIZE           "Tama�o Buffer de sonido :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Tama�o fragmento de sonido :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Muy peque�o"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Peque�o"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Medio"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Grande"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Muy grande"
  IDS_SOUND_SYNCH_METHOD          "M�todo de sincronizaci�n :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Grabar imagenes de disco actualmente insertados"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Grabar imagenes ROM actualmente cargadas"
  IDS_FULLSCREEN_DRIVER           "Controlador:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Profundidad de pantalla:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Resoluci�n:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Velocidad de refresco:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "Sincronizaci�n VBLANK"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Renderizar superficie primaria DX"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Conservar proporci�n (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Proporci�n verdadera"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Valor %.3f para %s est� fuera de rango, usando %.3f en su lugar"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Valor %d for %s est� fuera de rango, usando %d en su lugar"
  IDS_AUDIO_LEAK                  "Filtro audio"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Matiz (0..2)"
  IDS_COLORS_SATURATION           "Saturacion (0..2)"
  IDS_COLORS_CONTRAST             "Contraste (0..2)"
  IDS_COLORS_BRIGHTNESS           "Brillo (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Sombra linea de escaneo (0..1)"
  IDS_CRT_BLUR                    "Blur (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Lineas fase impar (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Offset lineas impares (0..2)"
  IDS_VICII_PALETTE               "Paleta VICII"
  IDS_VIC_PALETTE                 "Paleta VIC"
  IDS_CRTC_PALETTE                "Paleta CRTC"
  IDS_VDC_PALETTE                 "Paleta VDC"
  IDS_TED_PALETTE                 "Paleta TED"
  IDS_VICII_COLORS                "Colores VIC II"
  IDS_VIC_COLORS                  "Colores VIC"
  IDS_CRTC_COLORS                 "Colores CRTC"
  IDS_VDC_COLORS                  "Colores VDC"
  IDS_TED_COLORS                  "Colores TED"
  IDS_VICII_CRT_EMULATION         "Emulaci�n CRT VIC II"
  IDS_VIC_CRT_EMULATION           "Emulaci�n CRT VIC"
  IDS_CRTC_CRT_EMULATION          "Emulaci�n CRT CRTC"
  IDS_VDC_CRT_EMULATION           "Emulaci�n CRT VDC"
  IDS_TED_CRT_EMULATION           "Emulaci�n CRT TED"
  IDS_VICII_RENDER_FILTER         "Filtro de renderizado VIC II"
  IDS_VIC_RENDER_FILTER           "Filtro de renderizado VIC"
  IDS_CRTC_RENDER_FILTER          "Filtro de renderizado CRTC"
  IDS_VDC_RENDER_FILTER           "Filtro de renderizado VDC"
  IDS_TED_RENDER_FILTER           "Filtro de renderizado TED"
  IDS_VICII_AUDIO_LEAK            "VICII Filtro audio"
  IDS_VIC_AUDIO_LEAK              "VIC Filtro Audio"
  IDS_CRTC_AUDIO_LEAK             "CRTC Filtro audio"
  IDS_VDC_AUDIO_LEAK              "VDC Filtro audio"
  IDS_TED_AUDIO_LEAK              "TED Filtro audio"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Paleta externa:"
  IDS_RAM_CAPTION                 "Ajustes RAM"
  IDS_RAM_INIT_AT_POWERUP         "Inicializaci�n en el arranque"
  IDS_RAM_VALUE_FIRST_BYTE        "Valor del primer byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Longitud de valores constantes"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Longitud de patrones constantes"
  IDS_PRINTER_EMULATION           "Emulaci�n de impresora"
  IDS_PRINTER_FORMFEED            "Enviar Formfeed"
  IDS_FILESYSTEM_PRINTER          "Imprimir fichero de sistema"
  IDS_PRINTER_DRVR                "Controlador de impresora"
  IDS_OUTPUT                      "Salida"
  IDS_OUTPUT_TO_FILE              "Salida a fichero #"
  IDS_OUTPUT_FILE1_NAME           "Nombre fichero de salida #1"
  IDS_OUTPUT_FILE2_NAME           "Nombre fichero de salida #2"
  IDS_OUTPUT_FILE3_NAME           "Nombre fichero de salida #3"
  IDS_ROMSET_SELECT_ARCHIVE       "Archivo Romset"
  IDS_ROMSET_ARCHIVE_LOAD         "Cargar archivo"
  IDS_ROMSET_ARCHIVE_SAVE         "Grabar archivo"
  IDS_ROMSET_CONFIGURATION        "Configuraci�n"
  IDS_ROMSET_ARCHIVE_APPLY        "Aplicar"
  IDS_ROMSET_ARCHIVE_NEW          "Nuevo"
  IDS_ROMSET_ARCHIVE_DELETE       "Borrar"
  IDS_ROMSET_SELECT_FILE          "Fichero Romset"
  IDS_ROMSET_FILE_LOAD            "Cargar romset"
  IDS_ROMSET_FILE_SAVE            "Grabar Romset"
  IDS_CUSTOM_SPEED_CAPTION        "Velocidad personalizada"
  IDS_ENTER_CUSTOM_SPEED          "Entrar velocidad personalizada  [%]"
  IDS_NEW_CONFIGURATION           "Nueva configuraci�n"
  IDS_ENTER_CONFIGURATION_NAME    "Entrar nombre de configuraci�n"
  IDS_RS232_CAPTION               "Ajustes RS232"
  IDS_RS232_DEV_1                 "Perif�rico RS232 1"
  IDS_RS232_DEV_2                 "Perif�rico RS232 2"
  IDS_RS232_DEV_3                 "Perif�rico RS232 3"
  IDS_RS232_DEV_4                 "Perif�rico RS232 4"
  IDS_NETWORK_CAPTION             "Ajustes Netplay"
  IDS_CURRENT_MODE                "Modo actual"
  IDS_SERVER_BIND                 "Server Bind"
  IDS_TCP_PORT                    "Puerto TCP"
  IDS_NETWORK_SERVER              "Iniciar servidor"
  IDS_NETWORK_CLIENT              "Conectar a"
  IDS_NETWORK_DISCONNECT          "Desconectar"
  IDS_CONTROL                     "Control"
  IDS_SERVER                      "Servidor"
  IDS_CLIENT                      "Cliente"
  IDS_KEYBOARD                    "Teclado"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Perif�ricos"
  IDS_SETTINGS                    "Ajustes"
  IDS_TOGGLE_CONSOLE_APPEND       "A�adir log a fichero existente"
  IDS_IMAGE_CONTENTS              "Contenidos imagen"
  IDS_NEW_IMAGE                   "Nueva imagen"
  IDS_NAME                        "Nombre"
  IDS_ID                          "ID"
  IDS_TYPE                        "Tipo"
  IDS_BLANK_IMAGE                 "Crear imagen"
  IDS_NEW_TAP_IMAGE               "Nueva imagen TAP"
  IDS_SAVE                        "Grabaci�n"
  IDS_SELECT_DRIVER               "Seleccionar controlador"
  IDS_FFMPEG_SETTINGS             "Ajustes FFMPEG"
  IDS_FORMAT                      "Formato"
  IDS_AUDIO_CODEC                 "Codec de audio"
  IDS_BITRATE                     "Velocidad de muestreo"
  IDS_VIDEO_CODEC                 "Codec de video"
  IDS_SOUND_RECORD_CAPTION        "Ajustes grabaci�n de sonido"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Formato grabaci�n de sonido"
  IDS_SOUND_RECORD_FILE_LABEL     "Fichero grabaci�n de sonido"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Caracter"
  IDS_COMPUTER_RESOURCES_CAPTION  "Recursos del ordenador"
  IDS_COMPUTER_RESOURCES          "Recursos del ordenador grabados en Ramset"
  IDS_DRIVE_RESOURCES_CAPTION     "Recursos unidad disco"
  IDS_DRIVE_RESOURCES             "Recursos unidad disco grabados en romset"
  IDS_SYMBOLIC                    "Simb�lico"
  IDS_POSITIONAL                  "Posicional"
  IDS_DUMP_KEYSET                 "Volcar teclado"
  IDS_DUMP_SHORTCUTS              "Volcar accesos r�pidos"
  IDS_SYMBOLIC_US                 "Simb�lico US"
  IDS_SYMBOLIC_DE                 "Simb�lico DE"
  IDS_GR_SYM                      "Gr Sim."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sim."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sim."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "Memoria"
  IDS_DRIVE_TYPE                  "Tipo unidad disco"
  IDS_40_TRACK_HANDLING           "Manejador 40 pistas"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "No extender nunca"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Preguntar antes de extender"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Extender al acceder"
  IDS_IDLE_METHOD                 "Metodo tiempo inactivo"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Interceptar tiempos muertos"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Saltar ciclos"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Cable paralelo"
  IDS_STANDARD                    "Estandar"
  IDS_DRIVE_EXPANSION             "Expansi�n Unidad disco"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Memoria"
  IDS_SID_GENGROUP1               "Modelo SID"
  IDS_SID_FILTERS                 "Filtros SID"
  IDS_MP_FILE                     "Archivo"
  IDS_MP_ATTACH_DISK_IMAGE        "Insertar imagen de disco"
  IDS_MP_DETACH_DISK_IMAGE        "Extraer imagen de disco"
  IDS_MP_FLIP_LIST                "Lista agrupaci�n discos"
  IDS_MP_DATASETTE_CONTROL        "Control del datasette"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Insertar imagen de cartucho..."
  IDS_MP_RESET                    "Reiniciar"
  IDS_MP_DEBUG                    "Depurar"
#ifdef DEBUG
  IDS_MP_MODE                     "Modo"
#endif
  IDS_MP_EDIT                     "Editar"
  IDS_MP_SNAPSHOT                 "Instant�nea"
  IDS_MP_RECORDING_START_MODE     "Grabar modo de inicio"
  IDS_MP_OPTIONS                  "Opciones"
  IDS_MP_REFRESH_RATE             "Velocidad de refresco"
  IDS_MP_MAXIMUM_SPEED            "Velocidad m�xima"
  IDS_MP_VIDEO_STANDARD           "Video estandar"
  IDS_MP_DRIVE_SYNC_FACTOR        "Factor sincronizaci�n unidad disco"
  IDS_MP_SETTINGS                 "Ajustes"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Ajustes entrada/salida cartucho"
  IDS_MP_LANGUAGE                 "Idioma"
  IDS_MP_HELP                     "Ayuda"
  IDS_MP_VIEW                     "Vista"
  IDS_MP_WINDOW                   "ventana"
  IDS_MI_EXIT                     "Salir"
  IDS_MI_ABOUT                    "Acerca de VICE..."
  IDS_MI_PAUSE                    "Pausa"
  IDS_MI_EDIT_COPY                "Copiar"
  IDS_MI_EDIT_PASTE               "Pegar"
  IDS_MI_AUTOSTART                "Autoarranque imagen de disco/cinta..."
  IDS_MI_RESET_HARD               "Hard"
  IDS_MI_RESET_SOFT               "Soft"
  IDS_MI_DRIVE8                   "Unidad disco 8"
  IDS_MI_DRIVE9                   "Unidad disco 9"
  IDS_MI_DRIVE10                  "Unidad disco 10"
  IDS_MI_DRIVE11                  "Unidad disco 11"
  IDS_MI_ATTACH_TAPE              "Insertar imagen de cinta..."
  IDS_MI_DETACH_TAPE              "Extraer imagen de cinta"
  IDS_MI_DETACH_ALL               "Todo"
  IDS_MI_TOGGLE_SOUND             "Reproducci�n sonido"
  IDS_MI_TOGGLE_DOUBLESIZE        "Tama�o doble"
  IDS_MI_TOGGLE_DOUBLESCAN        "Doble escaneo"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Doble vertical"
  IDS_MI_DRIVE_TRUE_EMULATION     "Emulacion unidad disco verdadera"
  IDS_MI_DRIVE_SOUND_EMULATION    "Emulacion controlador de sonido"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Manejar en autoarranque emulaci�n de disco verdadera"
  IDS_MI_TOGGLE_VIDEOCACHE        "Cach� de video"
  IDS_MI_DRIVE_SETTINGS           "Ajustes unidad disco..."
  IDS_MI_CART_SMART_ATTACH        "Imagen Smart-attach..."
  IDS_MI_CART_ATTACH_CRT          "Imagen CRT..."
  IDS_MI_CART_ATTACH_8KB          "Imagen generica 8KB..."
  IDS_MI_CART_ATTACH_16KB         "Imagen generica 16KB..."
  IDS_MI_CART_ATTACH_AR           "Imagen Action Replay..."
  IDS_MI_CART_ATTACH_AR3          "Imagen Action Replay MK3..."
  IDS_MI_CART_ATTACH_AR4          "Imagen Action Replay MK4..."
  IDS_MI_CART_ATTACH_STARDOS      "Imagen Stardos..."
  IDS_MI_CART_ATTACH_AT           "Imagen Atomic Power..."
  IDS_MI_CART_ATTACH_EPYX         "Imagen Epyx FastLoad..."
  IDS_MI_CART_ATTACH_IEEE488      "Imagen de interface IEEE-488..."
  IDS_MI_CART_ATTACH_RR           "Imagen Retro Replay..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "Imagen &MMC Replay..."
  IDS_MI_CART_ATTACH_IDE64        "Imagen interface IDE64..."
  IDS_MI_CART_ATTACH_SS4          "Imagen Super Snapshot V4..."
  IDS_MI_CART_ATTACH_SS5          "Imagen Super Snapshot V5..."
  IDS_MI_CART_ATTACH_STB          "Imagen Structured BASIC..."
  IDS_MI_FLIP_ADD                 "A�adir imagen actual (Unidad 8)"
  IDS_MI_FLIP_REMOVE              "Quitar imagen actual (Unidad 8)"
  IDS_MI_FLIP_NEXT                "Insertar imagen siguiente (Unidad 8)"
  IDS_MI_FLIP_PREVIOUS            "Insertar imagen previa (Unidad 8)"
  IDS_MI_FLIP_LOAD                "Cargar lista de ficheros a conmutar"
  IDS_MI_FLIP_SAVE                "Grabar lista de ficheros a conmutar"
  IDS_MI_DATASETTE_STOP           "Detener"
  IDS_MI_DATASETTE_START          "Arrancar"
  IDS_MI_DATASETTE_FORWARD        "Avance r�pido"
  IDS_MI_DATASETTE_REWIND         "Rebobinar"
  IDS_MI_DATASETTE_RECORD         "Grabar"
  IDS_MI_DATASETTE_RESET          "Reiniciar"
  IDS_MI_DATASETTE_RESET_COUNTER  "Reiniciar contador"
  IDS_MI_CART_SET_DEFAULT         "Usar cartucho por defecto"
  IDS_MI_TOGGLE_CART_RESET        "Reiniciar al cambiar cartucho"
  IDS_MI_CART_DETACH              "Extraer imagen(es) cartucho"
  IDS_MI_CART_FREEZE              "Congelar cartucho"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "Peque�o"
  IDS_MI_DEBUG_MODE_HISTORY       "Historial"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Autoejecutar historial"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Rastrear CPU principal"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Rastrear CPU Unidad disco0"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Rastrear CPU Unidad disco1"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Cargar Instant�nea..."
  IDS_MI_SNAPSHOT_SAVE            "Grabar Instant�nea..."
  IDS_MI_LOADQUICK                "Carga r�pida Instant�nea"
  IDS_MI_SAVEQUICK                "Grabaci�n r�pida Instant�nea"
  IDS_MI_EVENT_TOGGLE_RECORD      "Iniciar/finalizar grabaci�n historial"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Iniciar/finalizar reproducci�n historial"
  IDS_MI_EVENT_SETMILESTONE       "Insertar marca de grabaci�n"
  IDS_MI_EVENT_RESETMILESTONE     "Volver a la marca"
  IDS_MI_EVENT_START_MODE_SAVE    "Grabar nueva Instant�nea"
  IDS_MI_EVENT_START_MODE_LOAD    "Cargar Instant�nea existente"
  IDS_MI_EVENT_START_MODE_RESET   "Comenzar con reinicio"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Sobreescribir reproducci�n"
  IDS_MI_EVENT_DIRECTORY          "Seleccionar historial ficheros/directorios"
  IDS_MI_MEDIAFILE                "Grabar/Parar fichero media..."
  IDS_MI_SOUND_RECORD_START       "Grabar sonido en un fichero..."
  IDS_MI_SOUND_RECORD_STOP        "Finalizar grabaci�n de sonido"
  IDS_MI_REFRESH_RATE_AUTO        "Auto"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Sin l�mite"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Personalizado"
  IDS_MI_TOGGLE_WARP_MODE         "Modo m�xima velocidad"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Siempre arriba"
  IDS_MI_TOGGLE_DX9DISABLE        "Deshabilitar controlador de video DirectX9"
  IDS_MI_SWAP_JOYSTICK            "Intercambiar joysticks"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Intercambiar puertos joysticks"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Permitir direcciones opuestas"
  IDS_MI_JOYKEYS_TOGGLE           "Permitir Teclas en joy"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Interceptar perif�ricos virtuales"
  IDS_MI_MOUSE                    "Capturar eventos del rat�n"
  IDS_MI_C64MODEL_SETTINGS        "Ajustes modelo C64..."
  IDS_MI_AUTOSTART_SETTINGS       "Ajustes de autoinicio..."
  IDS_MI_VIDEO_SETTINGS           "Ajustes de video..."
  IDS_MI_DEVICEMANAGER            "Ajustes de perif�ricos..."
  IDS_MI_JOY_SETTINGS             "Ajustes de joystick..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Ajustes Puerto Joystick..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Ajustes Joystick Sidcart..."
  IDS_MI_KEYBOARD_SETTINGS        "Ajustes de teclado..."
  IDS_MI_SOUND_SETTINGS           "Ajustes de sonido..."
  IDS_MI_ROM_SETTINGS             "Ajustes ROM..."
  IDS_MI_RAM_SETTINGS             "Ajustes RAM..."
  IDS_MI_DATASETTE_SETTINGS       "Ajustes Datasette..."
  IDS_MI_VICII_SETTINGS           "Ajustes VIC-II..."
  IDS_MI_MOUSE_SETTINGS           "Ajustes rat�n..."
  IDS_MI_SID_SETTINGS             "Ajustes SID..."
  IDS_MI_RS232_SETTINGS           "Ajustes RS232..."
  IDS_MI_REU_SETTINGS             "Ajustes REU..."
  IDS_MI_GEORAM_SETTINGS          "Ajustes GEO-RAM..."
  IDS_MI_RAMCART_SETTINGS         "Ajustes RamCart..."
  IDS_MI_DQBB_SETTINGS            "Ajustes Double Quick Brown Box..."
  IDS_MI_EXPERT_SETTINGS          "Ajustes Expert Cartrige..."
  IDS_MI_ISEPIC_SETTINGS          "Ajustes ISEPIC..."
  IDS_MI_MMC64_SETTINGS           "Ajustes MMC64..."
  IDS_MI_MMCREPLAY_SETTINGS       "Ajustes MMC Replay..."
  IDS_MI_RR_SETTINGS              "Ajustes Retro Replay..."
  IDS_MI_MAGICVOICE_SETTINGS      "Ajustes Magic Voice..."
  IDS_MI_MIDI_SETTINGS            "Ajustes MIDI..."
  IDS_MI_DIGIMAX_SETTINGS         "Ajustes DigiMAX..."
  IDS_MI_DS12C887RTC_SETTINGS     "Ajustes DS12C887 RTC..."
  IDS_MI_LIGHTPEN_SETTINGS        "Ajustes l�piz �ptico..."
  IDS_MI_IDE64_SETTINGS           "Ajustes IDE64..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ajustes Ethernet..."
#endif
  IDS_MI_ACIA_SETTINGS            "Ajustes ACIA..."
  IDS_MI_RS232USER_SETTINGS       "Ajustes puerto RS232..."
  IDS_MI_EASYFLASH_SETTINGS       "Ajuestes EasyFlash..."
  IDS_MI_SFX_SE_SETTINGS          "Ajustes SFX Sound Expander..."
  IDS_MI_TOGGLE_SFX_SS            "Permitir cartucho SFX Sound Sampler"
  IDS_MI_TOGGLE_USERPORT_RTC      "Permitir expansi�n usuario RTC"
  IDS_MI_SETTINGS_SAVE_FILE       "Grabar ajustes actuales en el fichero especificado"
  IDS_MI_SETTINGS_LOAD_FILE       "Cargar ajustes desde el fichero especificado"
  IDS_MI_SETTINGS_SAVE            "Grabar ajustes actuales"
  IDS_MI_SETTINGS_LOAD            "Cargar ajustes grabados"
  IDS_MI_SETTINGS_DEFAULT         "Usar ajustes por defecto"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Grabar ajustes al salir"
  IDS_MI_CONFIRM_ON_EXIT          "Confirmar el cierre de VICE"
  IDS_MI_LANG_EN                  "Ingl�s"
  IDS_MI_LANG_DA                  "Dan�s"
  IDS_MI_LANG_DE                  "Alem�n"
  IDS_MI_LANG_ES                  "Espa�ol"
  IDS_MI_LANG_FR                  "Franc�s"
  IDS_MI_LANG_HU                  "H�ngaro"
  IDS_MI_LANG_IT                  "Italiano"
  IDS_MI_LANG_KO                  "Coreano"
  IDS_MI_LANG_NL                  "Holand�s"
  IDS_MI_LANG_PL                  "Polaco"
  IDS_MI_LANG_RU                  "Ruso"
  IDS_MI_LANG_SV                  "Sueco"
  IDS_MI_LANG_TR                  "Turco"
  IDS_MI_CMDLINE                  "Opciones de la linea de comandos"
  IDS_MI_CONTRIBUTORS             "Contribuyentes"
  IDS_MI_LICENSE                  "Licencia"
  IDS_MI_WARRANTY                 "�Sin garantias!"
  IDS_MI_TOGGLE_FULLSCREEN        "Pantalla completa"
  IDS_MI_SIDCART_SETTINGS         "Ajustes SID Cart..."
  IDS_MI_MON_OPEN                 "Abrir"
  IDS_MI_MON_SAVE                 "Grabaci�n"
  IDS_MI_MON_PRINT                "Imprimir"
  IDS_MI_MON_EXIT                 "Salir        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Detener depuraci�n"
  IDS_MI_MON_STOP_EXEC            "Detener ejecuci�n"
  IDS_MI_MON_STEP_INTO            "Saltar a"
  IDS_MI_MON_STEP_OVER            "Saltar sobre"
  IDS_MI_MON_SKIP_RETURN          "Saltar hasta el return"
  IDS_MI_MON_GOTO_CURSOR          "Ir al cursor"
  IDS_MI_MON_EVAL                 "Evaluar"
  IDS_MI_MON_CURRENT              "Instrucci�n actual"
  IDS_MI_MON_WND_EVAL             "Ventana de evaluaci�n"
  IDS_MI_MON_WND_REG              "Ventana de registro"
  IDS_MI_MON_WND_MEM              "Ventana de memoria"
  IDS_MI_MON_WND_DIS              "Ventana de desensamblado"
  IDS_MI_MON_WND_CONSOLE          "Ventana de consola"
  IDS_MI_MON_COMPUTER             "Ordenador"
  IDS_MI_MON_DRIVE8               "Unidad disco 8"
  IDS_MI_MON_DRIVE9               "Unidad disco 9"
  IDS_MI_MON_CASCADE              "En cascada"
  IDS_MI_MON_TILE_VERT            "En mosaico vertical"
  IDS_MI_MON_TILE_HORIZ           "En mosaico horizontal"
  IDS_MI_MON_ARRANGE_ICONS        "Ordenar iconos"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "Erreur VICE!"
  IDS_VICE_INFORMATION            "Information VICE"
  IDS_VICE_QUESTION               "Question VICE"
  IDS_FFMPEG_DLL_MISMATCH         "La version du DLL ffmpeg ne correspond pas."
  IDS_DIRECTDRAW_ERROR            "Erreur DirectDraw: Code:%8x Erreur:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Impossible d'enregistrer les param�tres."
  IDS_CANNOT_LOAD_SETTINGS        "Impossible de charger les param�tres."
  IDS_DEFAULT_SETTINGS_RESTORED   "Param�tres par d�faut restaur�s."
  IDS_CANNOT_ATTACH_FILE          "Impossible d'attacher le fichier sp�cifi�"
  IDS_START_MONITOR               "%s\n\nStart monitor? (Non va r�initialiser, Annuler va continuer)"
  IDS_VICE_CPU_JAM                "ERREUR CPU VICE"
  IDS_EXTEND_TO_40_TRACKS         "�tendre l'image au format 40 pistes?"
  IDS_DETACHED_DEVICE_S           "P�riph�rique d�tach� %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "%s attach� au p�riph�rique #%s"
  IDS_DETACHED_TAPE               "Datassette d�tach�"
  IDS_HISTORY_RECORDED_UNKNOWN    "Historique enregistr�e avec une release inconnue"
  IDS_HISTORY_RECORDED_VICE_S     "Historique enregistr�e avec VICE-%s"
  IDS_PAUSED                      "en pause"
  IDS_FRAME_NUMBER                "image #"
  IDS_RESUMED                     "r�sum�"
  IDS_REALLY_EXIT                 "D�sirez-vous vraiment quitter?\n\nToutes les donn�es pr�sentes dans la m�moire de l'�mulateur seront perdues."
  IDS_TFE_PROBLEM                 "Le support TFE/RR-Net n'est pas disponible sur votre syst�me,\ncar une partie important manque. SVP, jeter un coup d'oeil �\nla page Base de Connaissances VICE :\n\n      http://vicekb.trikaliotis.net/13-005\n\npour les raisons possibles et pour activer le r�seautage avec VICE."
  IDS_TFE_RRNET_SUPPORT           "Support TFE/RR-Net"
  IDS_CANNOT_AUTOSTART_FILE       "Impossible d'autocharger le fichier sp�cifi�"
  IDS_ATTACHED_TAPE_S             "Datassette %s attach�"
  IDS_SETTINGS_SAVED_SUCCESS      "Sauvegarde des param�tres effectu�e correctement."
  IDS_SETTINGS_LOADED_SUCCESS     "Chargement des param�tres r�ussi."
  IDS_ATTACH_DISK_IMAGE           "Ins�rer une image de disque"
  IDS_ATTACH_TAPE_IMAGE           "Ins�rer une image de datassette"
  IDS_AUTOSTART_IMAGE             "Autod�marrage image disque/datassette"
  IDS_INVALID_CARTRIDGE           "Image de cartouche invalide"
  IDS_BAD_CARTRIDGE_CONFIG        "Mauvaise configuration de la cartouche dans l'interface utilisateur!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Image de cartouche invalide"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Log de l'image de sortie console"
  IDS_LOG_FILES_TYPE              "Fichier de d�buggage VICE (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Impossible d'�crire le fichier de journalisation `%s'."
  IDS_LOAD_FLIP_LIST_FILE         "Charger un fichier de groupement de disques"
  IDS_CANNOT_READ_FLIP_LIST       "Impossible de lire le fichier de groupement"
  IDS_SAVE_FLIP_LIST_FILE         "Enregistrer le fichier de groupement de disques actuel"
  IDS_CANNOT_WRITE_FLIP_LIST      "Impossible d'�crire le fichier de groupement de disques"
  IDS_SELECT_KEYMAP_FILE          "S�lectionner le fichier de mappage clavier"
  IDS_SAVE_KEYMAP_FILE            "Sauvegarder le fichier de mappage clavier"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Impossible d'�crire sur le fichier de mappage clavier"
  IDS_SAVE_CONFIG_FILE            "Sauvegarder le fichier de configuration"
  IDS_LOAD_CONFIG_FILE            "Charger un fichier de configuration"
  IDS_MAPPING                     "Mappage"
  IDS_KEYBOARD_SETTINGS           "Param�tres du clavier"
  IDS_ATTACH                      "Ins�rer"
  IDS_PLEASE_ENTER_A_FILENAME     "Entrer un nom de fichier."
  IDS_OVERWRITE_EXISTING_IMAGE    "�craser les images existantes?"
  IDS_CANNOT_CREATE_IMAGE         "Impossible de cr�er le fichier image!"
  IDS_COMMAND_LINE_OPTIONS        "Options de ligne de commande"
  IDS_COMMAND_OPTIONS_AVAIL       "Quelles sont les lignes de commandes disponibles?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Aucun pilote s�lectionn�, ou le pilote n'est pas support�"
  IDS_CANT_WRITE_SCREENSHOT_S     "Impossible d'�crire le fichier de capture `%s'."
  IDS_AUTOSTART_DISK_IMAGE        "Autod�marrage image disque"
  IDS_SELECT_FS_DIRECTORY         "S�lectionnez le r�pertoire du syst�me de fichiers"
  IDS_PRINTER_USERPORT            "Imprimante port utilisateur"
  IDS_PRINTER_4                   "Imprimante #4"
  IDS_PRINTER_5                   "Imprimante #5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Lecteur #8"
  IDS_DRIVE_9                     "Lecteur #9"
  IDS_DRIVE_10                    "Lecteur #10"
  IDS_DRIVE_11                    "Lecteur #11"
  IDS_PERIPHERAL_SETTINGS         "Param�tres des p�riph�riques"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Impossible d'�crire le fichier de sauvegarde"
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Impossible de charger l'instantan�."
  IDS_LOAD_S_ROM_IMAGE            "Charger image ROM %s"
  IDS_SELECT_ROMSET_ARCHIVE       "S�lectionner archive Romset"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Impossible de charger l'archive Romset!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Impossible d'enregistrer l'archive Romset!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Impossible de charger le fichier Romset!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Impossible d'enregistrer le fichier Romset!"
  IDS_SELECT_ROMSET_FILE          "S�lectionner le fichier Romset"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "Ordinateur"
  IDS_DRIVE                       "Lecteur"
  IDS_ROM_SETTINGS                "Param�tres ROM"
  IDS_SAVE_SNAPSHOT_IMAGE         "Enregistrer le fichier de sauvegarde"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Impossible d'�crire le fichier d'instantan� `%s'."
  IDS_LOAD_SNAPSHOT_IMAGE         "Charger le fichier de sauvegarde"
  IDS_COULD_NOT_LOAD_PALETTE      "Impossible de charger le fichier de palette."
  IDS_LOAD_VICE_PALETTE_FILE      "Charger un fichier de palette VICE"
  IDS_FULLSCREEN                  "Plein �cran/DirectX"
  IDS_CRT_EMULATION               "�mulation CRT"
  IDS_RENDER_FILTER               "Filtre de rendu"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Param�tres vid�o"
  IDS_FILE_SYSTEM                 "Syst�me de fichiers"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "P�riph�rique IEC r�el"
#endif
  IDS_RS232_DEVICE_I              "P�riph�rique RS232 #%i"
  IDS_ATTACH_CRT_CART_IMAGE       "Ins�rer une cartouche CRT"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Ins�rer une cartouche 8KO"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Ins�rer une cartouche 16KO"
  IDS_ATTACH_AR_CART_IMAGE        "Ins�rer une cartouche Action Replay 32KO"
  IDS_ATTACH_AR3_CART_IMAGE       "Attacher une image de cartouche 16 ko Action Replay MK3"
  IDS_ATTACH_AR4_CART_IMAGE       "Attacher une image de cartouche 2 ko Action Replay MK4"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Attacher une image de cartouche 16 ko Stardos"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Ins�rer une cartouche Atomic Power 32KO"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Attacher une image de cartouche 8 ko Epyx FastLoad"
  IDS_ATTACH_IEEE488_CART_IMG     "Attacher une image de cartouche Interface IEEE-488"
  IDS_ATTACH_RETRO_R_CART_IMG     "Ins�rer une cartouche Retro Replay 64KO"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Attacher une image de cartouche 512 ko MMC Replay"
  IDS_ATTACH_IDE64_CART_IMAGE     "Ins�rer une cartouche IDE64 64KO"
  IDS_ATTACH_SS4_CART_IMAGE       "Attacher une image de cartouche 32 ko Super Snapshot V4"
  IDS_ATTACH_SS5_CART_IMAGE       "Attacher une image de cartouche 64 ko Super Snapshot V5"
  IDS_ATTACH_STB_CART_IMAGE       "Ins�rer une cartouche Raw Structured Basic"
  IDS_SELECT_CARTRIDGE_IMAGE      "S�lection le fichier de cartouche"
  IDS_MODEL                       "Mod�le"
  IDS_DRIVE_SETTINGS              "Param�tres des lecteurs"
  IDS_SELECT_START_SNAP_EVENT     "S�lectionner l'instantan� de d�part pour l'historique des �v�nements"
  IDS_SELECT_END_SNAP_EVENT       "S�lectionner l'instantan� de d�part pour l'historique des �v�nements"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *INSTABLE* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "Contributeurs � VICE"
  IDS_WHO_MADE_WHAT               "Qui fait quoi?"
  IDS_LICENSE                     "License"
  IDS_NO_WARRANTY                 "Aucune garantie!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE est distribu� SANS AUCUN GARANTIE!"
  IDS_PRESS_KEY_NORTHWEST         "Appuyer sur la touche pour Nord Ouest"
  IDS_PRESS_KEY_NORTH             "Appuyer sur la touche pour Nord"
  IDS_PRESS_KEY_NORTHEAST         "Appuyer sur la touche pour Nord Est"
  IDS_PRESS_KEY_EAST              "Appuyer sur la touche pour Est"
  IDS_PRESS_KEY_SOUTHEAST         "Appuyer sur la touche pour Sud Est"
  IDS_PRESS_KEY_SOUTH             "Appuyer sur la touche pour Sud"
  IDS_PRESS_KEY_SOUTHWEST         "Appuyer sur la touche pour Sud Ouest"
  IDS_PRESS_KEY_WEST              "Appuyer sur la touche pour Ouest"
  IDS_PRESS_KEY_FIRE              "Appuyer sur la touche pour Bouton de tir"
  IDS_NO_USERPORT_ADAPTER         "Aucun adaptateur joystick port utilisateur "
  IDS_CGA_USERPORT_ADAPTER        "Adaptateur joystick port utilisateur CGA"
  IDS_PET_USERPORT_ADAPTER        "Adaptateur joystick port utilisateur PET"
  IDS_HUMMER_USERPORT_ADAPTER     "Adaptateur joystick port utilisateur Hummer"
  IDS_OEM_USERPORT_ADAPTER        "Adaptateur joystick port utilisateur OEM"
  IDS_HIT_USERPORT_ADAPTER        "Adaptateur joystick port utilisateur HIT"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Adaptateur joystick port utilisateur Kingsoft"
  IDS_STARBYTE_USERPORT_ADAPTER   "Adaptateur joystick port utilisateur Starbyte"
  IDS_NO_SIDCART_JOY              "D�sactiver Joystick cartouche SID"
  IDS_SIDCART_JOY                 "Activer Joystick cartouche SID"
  IDS_NUMPAD_AND_RCTRL            "Clavier num�rique + Ctrl Droite"
  IDS_KEYSET_A                    "Touches A"
  IDS_KEYSET_B                    "Touches B"
  IDS_ALL_BUTTONS_AS_FIRE         "Tous les boutons sont utilis�s comme boutons de tir"
  IDS_NUMERIC_SEE_ABOVE           "num�rique (voir ci-dessus)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Aucun bouton - Tir automatique d�sactiv�"
  IDS_ALL_FILES_FILTER            "Tous les fichiers (*.*)"
  IDS_PALETTE_FILES_FILTER        "Fichiers de palette VICE (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "Fichiers de sauvegarde VICE (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "Images Commodore (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "Fichiers IDE64 (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Images disques (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Images datassette (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Fichiers compress�s (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "Images de cartouches CRT (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Images brutes de cartouches (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "Fichiers de groupement de disques (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "Fichiers Romset VICE (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "Archives Romset VICE (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "Fichiers de mappage clavier VICE (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Fichiers d��mulation de Commodore (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexible"
  IDS_ADJUSTING                   "Ajust�"
  IDS_EXACT                       "Exact"
  IDS_SOUND_DRIVER_DIRECTX        "Pilote son: DirectX"
  IDS_SOUND_DRIVER_WMM            "Pilote son: WMM"
  IDS_SYSTEM                      "Syst�me"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "St�r�o"
  IDS_MEDIA_FILES_FILTER          "Fichiers m�dia (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kO"
  IDS_CONFIGURE_KEYSET_A          "Configurer Touches A"
  IDS_CONFIGURE_KEYSET_B          "Configurer Touches B"
  IDS_SAVE_MEDIA_IMAGE            "Sauvegarder un fichier m�dia"
  IDS_S_AT_D_SPEED                "%s � %d%% de vitesse et %d ips%s"
  IDS_TAPE                        "Datassette:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Enregistrement\n%02d:%02d"
  IDS_PLAYBACK                    "Lecture\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Inconnu"
  IDS_P_NUMBER                    "<num�ro>"
  IDS_SET_INPUT_JOYSTICK_1        "S�lectionner le p�riphique branch� au port joystick #1"
  IDS_SET_INPUT_JOYSTICK_2        "S�lectionner le p�riphique branch� au port joystick #2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "S�lectionner le p�riph�rique d'entr�e pour le Joystick 1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "S�lectionner le p�riph�rique d'entr�e pour le Joystick 2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Enregistrer les param�tres � la sortie"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "NE PAS enregistrer les param�tres � la sortie"
  IDS_CONFIRM_QUIT_VICE           "Confirmer avant de quitter VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Ne pas confirmer pour quitter VICE"
  IDS_USE_ALL_CPU_SMP             "Utiliser tous les processeurs (syst�mes SMP)"
  IDS_USE_FIRST_CPU_SMP           "N'utiliser que le premier processeur (syst�mes SMP)"
  IDS_START_VICE_FULLSCREEN_MODE  "Activer le mode plein �cran au d�marrage de VICE"
  IDS_DISABLE_DX9                 "D�sactiver le pilote vid�o DirectX 9"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Un erreur innatendue s'est produite. Signal re�u : %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Une erreur innatendue s'est produite. Signal re�u : %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Inactif"
  IDS_SERVER_LISTENING            "Le serveur �coute"
  IDS_CONNECTED_SERVER            "Connect� au serveur"
  IDS_CONNECTED_CLIENT            "Client connect�"
  IDS_INVALID_PORT_NUMBER         "Num�ro de port invalide"
  IDS_ERROR_STARTING_SERVER       "Il y a eu une erreur au d�marrage du serveur."
  IDS_ERROR_CONNECTING_CLIENT     "Il y a eu une erreur de connexion avec le client."
#endif
  IDS_SOUND_RECORDING_STARTED     "D�marrage de l'enregistrement du son..."
  IDS_SOUND_RECORDING_STOPPED     "Enregistrement du son arr�t�..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Annuler"
  IDS_NONE                        "Aucun"
  IDS_BROWSE                      "Parcourir..."
  IDS_SPECIFY_MIDI_IN             "Sp�cifier le p�riph�rique MIDI-IN"
  IDS_SPECIFY_MIDI_OUT            "Sp�cifier le p�riph�rique MIDI-OUT"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Erreur de sauvegarde du fichier CRT EasyFlash"
  IDS_NO_EASYFLASH_CART_INSERTED  "Aucune cartouche EasyFlash attach�e"
  IDS_DATASETTE_CAPTION           "Param�tres datassette"
  IDS_DATASETTE_RESET_WITH_CPU    "R�initialiser la datassette avec l'UCT"
  IDS_DATASETTE_MOTOR_GROUP       "Vitesse du moteur lors de la lecture"
  IDS_DATASETTE_DELAY_TRIGGER     "cycle(s) additionnel(s) d�lai apr�s trigger"
  IDS_DATASETTE_DELAY_AT_ZERO     "D�lai du datassette lors de la lecture des groupes de z�ros"
  IDS_TOGGLE_USEIECDEVICE         "Utiliser le p�riph�rique IEC"
  IDS_SELECTDISK                  "Image de disque"
  IDS_SELECTDIR                   "R�pertoire"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "P�riph�rique IEC r�el"
#endif
  IDS_SELECTNONE                  "Aucun"
  IDS_AUTOSTART                   "Autod�marrage"
  IDS_BROWSEDIR                   "Parcourir..."
  IDS_TOGGLE_ATTACH_READONLY      "Ins�rer en lecture seule"
  IDS_TOGGLE_READP00              "Lire les fichier P00"
  IDS_TOGGLE_WRITEP00             "�crire sur les fichier P00"
  IDS_TOGGLE_HIDENONP00           "Cacher les fichiers non-P00"
  IDS_JOYSTICK_CAPTION            "Param�tres des joysticks"
  IDS_JOYSTICK_IN_PORT_1          "Joystick dans le port #1"
  IDS_SELECT_FIRE_BUTTON          "S�lectionner le bouton de feu"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Param�tres de FEU automatique"
  IDS_AUTOFIRE_SPEED              "Vitesse FEU automatique (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick dans le port #2"
  IDS_JOY_CONFIG_A                "Configurer Touches A"
  IDS_JOY_CONFIG_B                "Configurer Touches B"
  IDS_JOY_CALIBRATE               "Calibration des joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Plus de param�tres Joysticks"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick dans le port supppl�mentaire #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick dans le port supppl�mentaire #2"
  IDS_KEYSET_SW                   "Sud Ouest"
  IDS_KEYSET_S                    "Sud"
  IDS_KEYSET_SE                   "Sud Est"
  IDS_KEYSET_W                    "Ouest"
  IDS_KEYSET_E                    "Est"
  IDS_KEYSET_NW                   "Nord Ouest"
  IDS_KEYSET_N                    "Nord"
  IDS_KEYSET_NE                   "Nord Est"
  IDS_KEYSET_FIRE                 "Bouton FEU"
  IDS_SOUND_CAPTION               "Configurer les param�tres du p�riph�rique son"
  IDS_SOUND_DIRECTX               "Pilote DirectX"
  IDS_SOUND_WMM                   "Pilote WMM"
  IDS_SOUND_OUTPUT_MODE           "Mode de sortie de son"
  IDS_SOUND_SAMPLE_FREQUENCY      "Taux d'�chantillonage :"
  IDS_SOUND_BUFFER_SIZE           "Taille du tampon son :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Taille du Fragment de Son :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Petit"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Moyen"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Grand"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "M�thode de synchronisation :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Sauvegarder les disques pr�sentement attach�s"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Sauvegarder les images ROM pr�sentement charg�s"
  IDS_FULLSCREEN_DRIVER           "Pilote:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdepth:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "R�solution:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Taux de rafra�chissement:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "Synchronisation VBLANK"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Rendu � la surface primaire DX"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Conserver le rapport d'aspect (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Ratio de proportions r�el"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "La valeur %.3f pour %s est en dehors de la plage valide, %.3f sera utilis�."
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "La valeur %d pour %s est en dehors de la plage valide, %d sera utilis�."
  IDS_AUDIO_LEAK                  "Fuite audio"
  IDS_COLORS_GAMMA                "Intensit� (0..4)"
  IDS_COLORS_TINT                 "Teinte (0..2)"
  IDS_COLORS_SATURATION           "Saturation (0..2)"
  IDS_COLORS_CONTRAST             "Contraste (0..2)"
  IDS_COLORS_BRIGHTNESS           "Luminosit� (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Ombrage des lignes de balayage (0..1)"
  IDS_CRT_BLUR                    "Flou (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Phase lignes impaires (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "D�calage lignes impaires (0..2)"
  IDS_VICII_PALETTE               "Palette VICII"
  IDS_VIC_PALETTE                 "Palette VIC"
  IDS_CRTC_PALETTE                "Palette CRTC"
  IDS_VDC_PALETTE                 "Palette VDC"
  IDS_TED_PALETTE                 "Palette TED"
  IDS_VICII_COLORS                "Couleurs VICII"
  IDS_VIC_COLORS                  "Couleurs VIC"
  IDS_CRTC_COLORS                 "Couleurs CTRC"
  IDS_VDC_COLORS                  "Couleurs VDC"
  IDS_TED_COLORS                  "Couleurs TED"
  IDS_VICII_CRT_EMULATION         "�mulation VICII CRT"
  IDS_VIC_CRT_EMULATION           "�mulation VIC CRT"
  IDS_CRTC_CRT_EMULATION          "�mulation CRTC CRT"
  IDS_VDC_CRT_EMULATION           "�mulation VDC CRT"
  IDS_TED_CRT_EMULATION           "�mulation TED CRT"
  IDS_VICII_RENDER_FILTER         "Filtre de rendu VICII"
  IDS_VIC_RENDER_FILTER           "Filtre de rendu VIC"
  IDS_CRTC_RENDER_FILTER          "Filtre de rendu CRTC"
  IDS_VDC_RENDER_FILTER           "Filtre de rendu VDC"
  IDS_TED_RENDER_FILTER           "Filtre de rendu TED"
  IDS_VICII_AUDIO_LEAK            "Fuite Audio VICII"
  IDS_VIC_AUDIO_LEAK              "Fuite Audio VIC"
  IDS_CRTC_AUDIO_LEAK             "Fuite Audio CRTC"
  IDS_VDC_AUDIO_LEAK              "Fuite Audio VDC"
  IDS_TED_AUDIO_LEAK              "Fuite Audio TED"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Palette externe:"
  IDS_RAM_CAPTION                 "Param�tres de la RAM"
  IDS_RAM_INIT_AT_POWERUP         "Initialisation au d�marrage"
  IDS_RAM_VALUE_FIRST_BYTE        "Valeur du premier octet"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Longeur des valeurs constantes"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Longeur des contantes pattern"
  IDS_PRINTER_EMULATION           "�mulation d'imprimante"
  IDS_PRINTER_FORMFEED            "Envoyer \042Form Feed\042"
  IDS_FILESYSTEM_PRINTER          "Imprimante sur syst�me de fichiers"
  IDS_PRINTER_DRVR                "Pilote d'imprimante"
  IDS_OUTPUT                      "Sortie"
  IDS_OUTPUT_TO_FILE              "Rediriger vers le fichier #"
  IDS_OUTPUT_FILE1_NAME           "Nom du fichier de sortie #1"
  IDS_OUTPUT_FILE2_NAME           "Nom du fichier de sortie #2"
  IDS_OUTPUT_FILE3_NAME           "Nom du fichier de sortie #3"
  IDS_ROMSET_SELECT_ARCHIVE       "Archive Romset"
  IDS_ROMSET_ARCHIVE_LOAD         "Charger archive"
  IDS_ROMSET_ARCHIVE_SAVE         "Sauvegarder archive"
  IDS_ROMSET_CONFIGURATION        "Configuration"
  IDS_ROMSET_ARCHIVE_APPLY        "Appliquer"
  IDS_ROMSET_ARCHIVE_NEW          "Nouveau"
  IDS_ROMSET_ARCHIVE_DELETE       "Supprimer"
  IDS_ROMSET_SELECT_FILE          "Fichier Romset"
  IDS_ROMSET_FILE_LOAD            "Charger Romset"
  IDS_ROMSET_FILE_SAVE            "Sauvegarder Romset"
  IDS_CUSTOM_SPEED_CAPTION        "Vitesse personnalis�e"
  IDS_ENTER_CUSTOM_SPEED          "Entrez la vitesse [%]"
  IDS_NEW_CONFIGURATION           "Nouvelle configuration"
  IDS_ENTER_CONFIGURATION_NAME    "Entrer le nom de la configuration"
  IDS_RS232_CAPTION               "Param�tres RS232"
  IDS_RS232_DEV_1                 "1er P�riph�rique RS232"
  IDS_RS232_DEV_2                 "2e P�riph�rique RS232"
  IDS_RS232_DEV_3                 "3e P�riph�rique RS232"
  IDS_RS232_DEV_4                 "4e P�riph�rique RS232"
  IDS_NETWORK_CAPTION             "Param�tres de jeu en r�seau"
  IDS_CURRENT_MODE                "Mode actuel"
  IDS_SERVER_BIND                 "Lien Serveur"
  IDS_TCP_PORT                    "Port TCP"
  IDS_NETWORK_SERVER              "D�marrer le serveur"
  IDS_NETWORK_CLIENT              "Se connecter �"
  IDS_NETWORK_DISCONNECT          "Se d�connecter du serveur"
  IDS_CONTROL                     "Control"
  IDS_SERVER                      "Serveur"
  IDS_CLIENT                      "Client"
  IDS_KEYBOARD                    "Clavier"
  IDS_JOYSTICK_1                  "Joystick 2"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Lecteurs"
  IDS_SETTINGS                    "Param�tres"
  IDS_TOGGLE_CONSOLE_APPEND       "Ajouter le log au fichier existant"
  IDS_IMAGE_CONTENTS              "Contenu de l'image"
  IDS_NEW_IMAGE                   "Nouvelle image"
  IDS_NAME                        "Nom"
  IDS_ID                          "ID"
  IDS_TYPE                        "type"
  IDS_BLANK_IMAGE                 "Cr�ation d'image"
  IDS_NEW_TAP_IMAGE               "Nouvelle image TAP"
  IDS_SAVE                        "Enregistrer"
  IDS_SELECT_DRIVER               "S�lectionner le pilote"
  IDS_FFMPEG_SETTINGS             "Param�tres FFMPEG"
  IDS_FORMAT                      "Format"
  IDS_AUDIO_CODEC                 "Codec Audio"
  IDS_BITRATE                     "D�bit"
  IDS_VIDEO_CODEC                 "Codec vid�o"
  IDS_SOUND_RECORD_CAPTION        "Param�tres de l'enregistrement du son"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Format de l'enregistrement du son"
  IDS_SOUND_RECORD_FILE_LABEL     "Fichier d'enregistrement du son"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Caract�re"
  IDS_COMPUTER_RESOURCES_CAPTION  "Ressources de l'ordinateur"
  IDS_COMPUTER_RESOURCES          "Ressources de l'ordinateur enregistr�es au Romset"
  IDS_DRIVE_RESOURCES_CAPTION     "Ressources des lecteurs"
  IDS_DRIVE_RESOURCES             "Ressources du lecteur sauvegard�s dans le Romset"
  IDS_SYMBOLIC                    "Symbolique"
  IDS_POSITIONAL                  "Positionnel"
  IDS_DUMP_KEYSET                 "Exporter le mappage clavier dans un fichier"
  IDS_DUMP_SHORTCUTS              "Raccourcis Dump"
  IDS_SYMBOLIC_US                 "Symbolique US"
  IDS_SYMBOLIC_DE                 "Symbolique DE"
  IDS_GR_SYM                      "GR Sym."
  IDS_GR_POS                      "GR Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "M�moire"
  IDS_DRIVE_TYPE                  "Type de lecteur"
  IDS_40_TRACK_HANDLING           "Prise en charge du 40 pistes"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Ne jamais �tendre"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Demander avant d'�tendre"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "�tendre � l'acc�s"
  IDS_IDLE_METHOD                 "M�thode d'idle"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Traper l�inactivit�"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Sauter des cycles"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "C�ble parall�le"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Expansion de lecteur"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "RAM $2000-$3FFF"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "RAM $4000-$5FFF"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "RAM $6000-$7FFF"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "RAM $8000-$9FFF"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "RAM $A000-$BFFF"
  IDS_PLUS4_VIC20_MEMORY          "M�moire"
  IDS_SID_GENGROUP1               "Mod�le SID"
  IDS_SID_FILTERS                 "Filtres SID"
  IDS_MP_FILE                     "Fichier"
  IDS_MP_ATTACH_DISK_IMAGE        "Ins�rer une image de disque"
  IDS_MP_DETACH_DISK_IMAGE        "D�tacher une image de disque"
  IDS_MP_FLIP_LIST                "Groupement de disques"
  IDS_MP_DATASETTE_CONTROL        "Contr�le datassette"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Ins�rer une cartouche..."
  IDS_MP_RESET                    "R�initialiser"
  IDS_MP_DEBUG                    "D�bug"
#ifdef DEBUG
  IDS_MP_MODE                     "Mode"
#endif
  IDS_MP_EDIT                     "�dition"
  IDS_MP_SNAPSHOT                 "Instantan�s"
  IDS_MP_RECORDING_START_MODE     "Mode de d�part d'enregistrement"
  IDS_MP_OPTIONS                  "Options"
  IDS_MP_REFRESH_RATE             "Taux de rafra�chissement"
  IDS_MP_MAXIMUM_SPEED            "Vitesse maximale"
  IDS_MP_VIDEO_STANDARD           "Standard vid�o"
  IDS_MP_DRIVE_SYNC_FACTOR        "Facteur de synchro du lecteur"
  IDS_MP_SETTINGS                 "Param�tres"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Param�tres E/S cartouche"
  IDS_MP_LANGUAGE                 "Langage"
  IDS_MP_HELP                     "Aide"
  IDS_MP_VIEW                     "Affichage"
  IDS_MP_WINDOW                   "Fen�tre"
  IDS_MI_EXIT                     "Sortie"
  IDS_MI_ABOUT                    "� propos de VICE..."
  IDS_MI_PAUSE                    "Pause"
  IDS_MI_EDIT_COPY                "Copier"
  IDS_MI_EDIT_PASTE               "Coller"
  IDS_MI_AUTOSTART                "Autod�marrage image disque/datassette..."
  IDS_MI_RESET_HARD               "� froid"
  IDS_MI_RESET_SOFT               "� chaud"
  IDS_MI_DRIVE8                   "Lecteur #8"
  IDS_MI_DRIVE9                   "Lecteur #9"
  IDS_MI_DRIVE10                  "Lecteur #10"
  IDS_MI_DRIVE11                  "Lecteur #11"
  IDS_MI_ATTACH_TAPE              "Ins�rer une image de datassette..."
  IDS_MI_DETACH_TAPE              "D�tacher une image datassette..."
  IDS_MI_DETACH_ALL               "Tous"
  IDS_MI_TOGGLE_SOUND             "Lecture audio"
  IDS_MI_TOGGLE_DOUBLESIZE        "Double taille"
  IDS_MI_TOGGLE_DOUBLESCAN        "Double scan"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Doubler verticallement"
  IDS_MI_DRIVE_TRUE_EMULATION     "Activer l'�mulation r�elle des lecteurs"
  IDS_MI_DRIVE_SOUND_EMULATION    "�mulation de son de lecteur disque"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Activer l'�mulation R�elle de Lecteur � l'autod�marrage"
  IDS_MI_TOGGLE_VIDEOCACHE        "Cache vid�o"
  IDS_MI_DRIVE_SETTINGS           "Param�tres des lecteurs..."
  IDS_MI_CART_SMART_ATTACH        "Insertion intelligente d'une image..."
  IDS_MI_CART_ATTACH_CRT          "Image CRT..."
  IDS_MI_CART_ATTACH_8KB          "Image g�n�rique 8 ko..."
  IDS_MI_CART_ATTACH_16KB         "Image g�n�rique 16 ko..."
  IDS_MI_CART_ATTACH_AR           "Image Action Replay..."
  IDS_MI_CART_ATTACH_AR3          "Image Action Replay MK3..."
  IDS_MI_CART_ATTACH_AR4          "Image Action Replay MK4..."
  IDS_MI_CART_ATTACH_STARDOS      "Image Stardos..."
  IDS_MI_CART_ATTACH_AT           "Image Atomic Power..."
  IDS_MI_CART_ATTACH_EPYX         "Image Epyx FastLoad..."
  IDS_MI_CART_ATTACH_IEEE488      "Image d'Interface IEEE-488..."
  IDS_MI_CART_ATTACH_RR           "Image Retro Replay..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "Image MMC Replay..."
  IDS_MI_CART_ATTACH_IDE64        "Image d'Interface IDE64..."
  IDS_MI_CART_ATTACH_SS4          "Image Super Snapshot V4..."
  IDS_MI_CART_ATTACH_SS5          "Image Super Snapshot V5..."
  IDS_MI_CART_ATTACH_STB          "Image BASIC structur�e..."
  IDS_MI_FLIP_ADD                 "Ajouter l'image de disque courante (#8) au groupement"
  IDS_MI_FLIP_REMOVE              "Retirer l'image de disque courante (#8) au groupement"
  IDS_MI_FLIP_NEXT                "Ins�rer le prochain disque du groupement dans le lecteur #8"
  IDS_MI_FLIP_PREVIOUS            "Ins�rer le disque pr�c�dent du groupement dans le lecteur #8"
  IDS_MI_FLIP_LOAD                "Charger un fichier de groupement de disques"
  IDS_MI_FLIP_SAVE                "Enregistrer le fichier de groupement de disques actuel"
  IDS_MI_DATASETTE_STOP           "Arr�t"
  IDS_MI_DATASETTE_START          "D�marrer"
  IDS_MI_DATASETTE_FORWARD        "En avant"
  IDS_MI_DATASETTE_REWIND         "En arri�re"
  IDS_MI_DATASETTE_RECORD         "Enregistrer"
  IDS_MI_DATASETTE_RESET          "R�initialiser"
  IDS_MI_DATASETTE_RESET_COUNTER  "R�inialiser le compteur"
  IDS_MI_CART_SET_DEFAULT         "D�finir cette cartouche par d�faut"
  IDS_MI_TOGGLE_CART_RESET        "R�inialiser sur changement de cartouche"
  IDS_MI_CART_DETACH              "D�tacher une cartouche"
  IDS_MI_CART_FREEZE              "Geler la cartouche"
  IDS_MI_MONITOR                  "Moniteur"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "Petit"
  IDS_MI_DEBUG_MODE_HISTORY       "Historique"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Historique automatique"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Tracer CPU Principal"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Tracer CPU Drive0"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Tracer CPU Drive1"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Charger le fichier de sauvegarde..."
  IDS_MI_SNAPSHOT_SAVE            "Enregistrer le fichier de sauvegarde..."
  IDS_MI_LOADQUICK                "Charger l'instantan� rapide"
  IDS_MI_SAVEQUICK                "Enregistrer l'instantan� rapide"
  IDS_MI_EVENT_TOGGLE_RECORD      "D�marrer/Arr�ter l'historique de l'enregistrement"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "D�marrer/Arr�ter l'historique de la lecture"
  IDS_MI_EVENT_SETMILESTONE       "Lever le signet d'enregistrement"
  IDS_MI_EVENT_RESETMILESTONE     "Retourner au signet d'enregistrement"
  IDS_MI_EVENT_START_MODE_SAVE    "Enregistrer une nouvelle sauvegarde"
  IDS_MI_EVENT_START_MODE_LOAD    "Charger un instantan�"
  IDS_MI_EVENT_START_MODE_RESET   "R�initialiser au d�marrage"
  IDS_MI_EVENT_START_MODE_PLAYBCK "�craser la lecture actuelle"
  IDS_MI_EVENT_DIRECTORY          "S�lectionnez le r�pertoire des captures"
  IDS_MI_MEDIAFILE                "Enregistrer/Arr�ter fichier m�dia..."
  IDS_MI_SOUND_RECORD_START       "Enregistrer le son dans un fichier..."
  IDS_MI_SOUND_RECORD_STOP        "Arr�ter l'enregistrement du son"
  IDS_MI_REFRESH_RATE_AUTO        "Automatique"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Aucune limite"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Personnalis�"
  IDS_MI_TOGGLE_WARP_MODE         "Mode Turbo "
  IDS_MI_TOGGLE_ALWAYSONTOP       "Toujours au dessus"
  IDS_MI_TOGGLE_DX9DISABLE        "D�sactiver le pilote vid�o DirectX 9"
  IDS_MI_SWAP_JOYSTICK            "Permuter les ports Joysticks"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Permuter les joysticks de port"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Permettre des directions oppos�es simultan�ment"
  IDS_MI_JOYKEYS_TOGGLE           "Activer les touches joystick"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Activer les p�riph�riques virtuels"
  IDS_MI_MOUSE                    "Attraper les �v�nements souris"
  IDS_MI_C64MODEL_SETTINGS        "Param�tres du mod�le C64..."
  IDS_MI_AUTOSTART_SETTINGS       "Param�tres Autod�marrage..."
  IDS_MI_VIDEO_SETTINGS           "Param�tres vid�o..."
  IDS_MI_DEVICEMANAGER            "Param�tres des p�riph�riques..."
  IDS_MI_JOY_SETTINGS             "Param�tres des joysticks..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Param�tres des joysticks userport..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Param�tres des joysticks sidcart..."
  IDS_MI_KEYBOARD_SETTINGS        "Param�tres du clavier..."
  IDS_MI_SOUND_SETTINGS           "Param�tres son..."
  IDS_MI_ROM_SETTINGS             "Param�tres ROM..."
  IDS_MI_RAM_SETTINGS             "Param�tres de la RAM..."
  IDS_MI_DATASETTE_SETTINGS       "Param�tres datassette..."
  IDS_MI_VICII_SETTINGS           "Param�tres VIC-II..."
  IDS_MI_MOUSE_SETTINGS           "Param�tres de souris..."
  IDS_MI_SID_SETTINGS             "Param�tres SID..."
  IDS_MI_RS232_SETTINGS           "Param�tres RS232..."
  IDS_MI_REU_SETTINGS             "Param�tres REU..."
  IDS_MI_GEORAM_SETTINGS          "Param�tres GEO-RAM..."
  IDS_MI_RAMCART_SETTINGS         "Param�tres RamCart..."
  IDS_MI_DQBB_SETTINGS            "Param�tres Double Quick Brown Box..."
  IDS_MI_EXPERT_SETTINGS          "Param�tres Cartouche Expert..."
  IDS_MI_ISEPIC_SETTINGS          "Param�tres ISEPIC..."
  IDS_MI_MMC64_SETTINGS           "Param�tres MMC64......"
  IDS_MI_MMCREPLAY_SETTINGS       "Param�tres MMC Replay..."
  IDS_MI_RR_SETTINGS              "Param�tres Retro Replay..."
  IDS_MI_MAGICVOICE_SETTINGS      "Param�tres Magic Voice..."
  IDS_MI_MIDI_SETTINGS            "Param�tres MIDI..."
  IDS_MI_DIGIMAX_SETTINGS         "Param�tres DigiMAX..."
  IDS_MI_DS12C887RTC_SETTINGS     "Param�tres DS12C887 RTC..."
  IDS_MI_LIGHTPEN_SETTINGS        "Param�tres crayon optique..."
  IDS_MI_IDE64_SETTINGS           "Param�tres IDE64..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Param�tres Ethernet..."
#endif
  IDS_MI_ACIA_SETTINGS            "Param�tres ACIA..."
  IDS_MI_RS232USER_SETTINGS       "Param�tres port utilisateur RS232..."
  IDS_MI_EASYFLASH_SETTINGS       "Param�tres datassette..."
  IDS_MI_SFX_SE_SETTINGS          "Param�tres du SFX Sound Expander..."
  IDS_MI_TOGGLE_SFX_SS            "Activer la cartouche SFX Sound Sampler"
  IDS_MI_TOGGLE_USERPORT_RTC      "Activer l'expansion RTC port utilisateur"
  IDS_MI_SETTINGS_SAVE_FILE       "Enregistrer les param�tres courants"
  IDS_MI_SETTINGS_LOAD_FILE       "Charger les param�tres depuis le fichier sp�cifi�"
  IDS_MI_SETTINGS_SAVE            "Enregistrer les param�tres courants"
  IDS_MI_SETTINGS_LOAD            "Charger les param�tres enregistr�s"
  IDS_MI_SETTINGS_DEFAULT         "R�tablir les param�tres par d�faut"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Enregistrer les param�tres � la sortie"
  IDS_MI_CONFIRM_ON_EXIT          "Demander une confirmation avant de quitter VICE"
  IDS_MI_LANG_EN                  "Anglais"
  IDS_MI_LANG_DA                  "Danois"
  IDS_MI_LANG_DE                  "Allemand"
  IDS_MI_LANG_ES                  "Espagnol"
  IDS_MI_LANG_FR                  "Fran�ais"
  IDS_MI_LANG_HU                  "Hungarian"
  IDS_MI_LANG_IT                  "Italien"
  IDS_MI_LANG_KO                  "Kor�en"
  IDS_MI_LANG_NL                  "Hollandais"
  IDS_MI_LANG_PL                  "Polonais"
  IDS_MI_LANG_RU                  "Russe"
  IDS_MI_LANG_SV                  "Su�dois"
  IDS_MI_LANG_TR                  "Turc"
  IDS_MI_CMDLINE                  "Options de ligne de commande"
  IDS_MI_CONTRIBUTORS             "Contributeurs"
  IDS_MI_LICENSE                  "License"
  IDS_MI_WARRANTY                 "Aucune garantie!"
  IDS_MI_TOGGLE_FULLSCREEN        "Plein �cran"
  IDS_MI_SIDCART_SETTINGS         "Param�tres SID Cart..."
  IDS_MI_MON_OPEN                 "Ouvrir"
  IDS_MI_MON_SAVE                 "Enregistrer"
  IDS_MI_MON_PRINT                "Imprimer"
  IDS_MI_MON_EXIT                 "Quitter	Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Arr�ter d�bug"
  IDS_MI_MON_STOP_EXEC            "Arr�ter l'ex�cution"
  IDS_MI_MON_STEP_INTO            "Entrer dans la sous-routine"
  IDS_MI_MON_STEP_OVER            "Sauter par dessus"
  IDS_MI_MON_SKIP_RETURN          "Sauter jusqu'� return"
  IDS_MI_MON_GOTO_CURSOR          "Aller au curseur"
  IDS_MI_MON_EVAL                 "�valuer"
  IDS_MI_MON_CURRENT              "Instruction courante"
  IDS_MI_MON_WND_EVAL             "Fen�tre d'�valuation"
  IDS_MI_MON_WND_REG              "Fen�tre des Registres"
  IDS_MI_MON_WND_MEM              "Fen�tre m�moire"
  IDS_MI_MON_WND_DIS              "Fen�tre D�sassemblage"
  IDS_MI_MON_WND_CONSOLE          "Fen�tre Console"
  IDS_MI_MON_COMPUTER             "Ordinateur"
  IDS_MI_MON_DRIVE8               "Lecteur #8"
  IDS_MI_MON_DRIVE9               "Lecteur #9"
  IDS_MI_MON_CASCADE              "Cascade"
  IDS_MI_MON_TILE_VERT            "Fractionner verticallement"
  IDS_MI_MON_TILE_HORIZ           "Fractionner horizontalement"
  IDS_MI_MON_ARRANGE_ICONS        "Arranger les �cones"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE hiba!"
  IDS_VICE_INFORMATION            "VICE inform�ci�"
  IDS_VICE_QUESTION               "VICE k�rd�s"
  IDS_FFMPEG_DLL_MISMATCH         "Az ffmpeg.dll verzi�ja nem egyezik."
  IDS_DIRECTDRAW_ERROR            "DirectDraw hiba: k�d: %8x hiba: %s"
  IDS_CANNOT_SAVE_SETTINGS        "A be�ll�t�sok ment�se nem siker�lt."
  IDS_CANNOT_LOAD_SETTINGS        "A be�ll�t�sok bet�lt�se nem siker�lt."
  IDS_DEFAULT_SETTINGS_RESTORED   "Alap�rtelmezett be�ll�t�sok vissza�ll�tva."
  IDS_CANNOT_ATTACH_FILE          "Nem lehet csatolni a megadott f�jlt"
  IDS_START_MONITOR               "%s\n\nMonitorprogram ind�t�sa? (Nem �jraind�tja, M�gsem folytatja)"
  IDS_VICE_CPU_JAM                "VICE CPU fagy�s"
  IDS_EXTEND_TO_40_TRACKS         "Kiterjesszem a k�pm�st 40 s�vos form�tumra?"
  IDS_DETACHED_DEVICE_S           "%s eszk�z lev�lasztva"
  IDS_ATTACHED_S_TO_DEVICE_S      "%s csatolva a #%s sz�m� eszk�zh�z"
  IDS_DETACHED_TAPE               "Szalag lev�lasztva"
  IDS_HISTORY_RECORDED_UNKNOWN    "Esem�ny r�gz�t�s ismeretlen verzi�val k�sz�lt"
  IDS_HISTORY_RECORDED_VICE_S     "Esem�ny r�gz�t�s VICE-%s verzi�val k�sz�lt"
  IDS_PAUSED                      "sz�net"
  IDS_FRAME_NUMBER                "k�pkocka #"
  IDS_RESUMED                     "folytat�s"
  IDS_REALLY_EXIT                 "Biztosan kil�p?\n\nAz emul�lt mem�ria teljes tartalma el fog veszni."
  IDS_TFE_PROBLEM                 "TFE/RR-Net support is not available on your system,\nthere is some important part missing. Please have a\nlook at the VICE knowledge base support page\n\n      http"
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net support"
  IDS_CANNOT_AUTOSTART_FILE       "Nem lehet automatikusan elind�tani a megadott f�jlt."
  IDS_ATTACHED_TAPE_S             "%s szalag csatolva"
  IDS_SETTINGS_SAVED_SUCCESS      "Be�ll�t�sok sikeresen elmentve."
  IDS_SETTINGS_LOADED_SUCCESS     "Be�ll�t�sok sikeresen elmentve."
  IDS_ATTACH_DISK_IMAGE           "Lemez k�pm�s csatol�sa"
  IDS_ATTACH_TAPE_IMAGE           "Szalag k�pm�s csatol�sa"
  IDS_AUTOSTART_IMAGE             "Lemez/szalag k�pm�s automatikus ind�t�sa"
  IDS_INVALID_CARTRIDGE           "�rv�nytelen cartridge k�pm�s"
  IDS_BAD_CARTRIDGE_CONFIG        "Rossz cartridge konfigur�ci�!"
  IDS_INVALID_CARTRIDGE_IMAGE     "�rv�nytelen cartridge k�pm�s"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Konzol kimenet napl�z�sa"
  IDS_LOG_FILES_TYPE              "VICE konzol napl� f�jlok (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Nem siker�lt a(z) %s napl�f�jlba �rni"
  IDS_LOAD_FLIP_LIST_FILE         "Lemezlista bet�lt�se"
  IDS_CANNOT_READ_FLIP_LIST       "Nem lehet olvasni a lemezlista f�jlt"
  IDS_SAVE_FLIP_LIST_FILE         "Lemezlista ment�se f�jlba"
  IDS_CANNOT_WRITE_FLIP_LIST      "Nem siker�lt a lemezlist�t f�jlba �rni"
  IDS_SELECT_KEYMAP_FILE          "V�lasszon billenty�zetlek�pez�s f�jlt"
  IDS_SAVE_KEYMAP_FILE            "Billenty�zetlek�pez�s f�jlba �r�sa"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Nem siker�lt a billenty�zetlek�pez�st f�jlba �rni"
  IDS_SAVE_CONFIG_FILE            "Konfigur�ci�s f�jl �r�sa"
  IDS_LOAD_CONFIG_FILE            "Konfigur�ci�s f�jl bet�lt�se"
  IDS_MAPPING                     "Lek�pez�s"
  IDS_KEYBOARD_SETTINGS           "Billenty�zet be�ll�t�sai"
  IDS_ATTACH                      "Csatol�s"
  IDS_PLEASE_ENTER_A_FILENAME     "�rjon be egy f�jlnevet."
  IDS_OVERWRITE_EXISTING_IMAGE    "Fel�l�rjam a megl�v� k�pm�st?"
  IDS_CANNOT_CREATE_IMAGE         "Nem siker�lt a k�pm�s f�jlt l�trehozni!"
  IDS_COMMAND_LINE_OPTIONS        "Parancssori opci�k"
  IDS_COMMAND_OPTIONS_AVAIL       "Milyen parancssori opci�k lehets�gesek?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Nincs meghajt� kiv�lasztva, vagy a kiv�lasztott nem t�mogatott"
  IDS_CANT_WRITE_SCREENSHOT_S     "Nem siker�lt a f�nyk�p �r�sa %s f�jlba."
  IDS_AUTOSTART_DISK_IMAGE        "Lemezk�pm�s automatikus ind�t�sa"
  IDS_SELECT_FS_DIRECTORY         "V�lasszon k�nyvt�rat"
  IDS_PRINTER_USERPORT            "Nyomtat� userport"
  IDS_PRINTER_4                   "#4-es nyomtat�"
  IDS_PRINTER_5                   "#5-�s nyomtat�"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "#8-as lemezegys�g"
  IDS_DRIVE_9                     "#9-es lemezegys�g"
  IDS_DRIVE_10                    "#10-es lemezegys�g"
  IDS_DRIVE_11                    "#11-es lemezegys�g"
  IDS_PERIPHERAL_SETTINGS         "Perif�ri�k be�ll�t�sai"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Nem siker�lt a pillanatk�p f�jl �r�sa."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "A pillanatk�p f�jl nem olvashat�"
  IDS_LOAD_S_ROM_IMAGE            "%s ROM k�pm�s bet�lt�se"
  IDS_SELECT_ROMSET_ARCHIVE       "V�lasszon ROM k�szlet arch�vumot"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Nem siker�lt a ROM k�szlet arch�vum bet�lt�se!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Nem siker�lt menteni a ROM k�szlet arch�vumot!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Nem siker�lt bet�lteni a ROM k�szlet f�jlt."
  IDS_CANNOT_SAVE_ROMSET_FILE     "Nem siker�lt menteni a ROM k�szlet f�jlt."
  IDS_SELECT_ROMSET_FILE          "ROM k�szlet f�jl kiv�laszt�sa"
  IDS_ROMSET                      "ROM k�szlet"
  IDS_COMPUTER                    "Sz�m�t�g�p"
  IDS_DRIVE                       "Lemezegys�g"
  IDS_ROM_SETTINGS                "ROM-ok be�ll�t�sai"
  IDS_SAVE_SNAPSHOT_IMAGE         "Pillanatk�p f�jl ment�se"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Nem siker�lt a pillanatk�p �r�sa %s f�jlba."
  IDS_LOAD_SNAPSHOT_IMAGE         "Pillanatk�p bet�lt�se"
  IDS_COULD_NOT_LOAD_PALETTE      "Nem siker�lt a palett�t bet�lteni."
  IDS_LOAD_VICE_PALETTE_FILE      "VICE paletta f�jl bet�lt�se"
  IDS_FULLSCREEN                  "Teljes k�perny�/DirectX"
  IDS_CRT_EMULATION               "CRT emulation"
  IDS_RENDER_FILTER               "Render filter"
  IDS_SCALE2X                     "�lsim�t�s"
  IDS_VIDEO_SETTINGS              "Vide� be�ll�t�sai"
  IDS_FILE_SYSTEM                 "F�jlrendszer"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Val�di IEC eszk�z"
#endif
  IDS_RS232_DEVICE_I              "%i. RS232 eszk�z"
  IDS_ATTACH_CRT_CART_IMAGE       "CRT cartridge k�pm�s csatol�sa"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Nyers 8KB-os cartridge k�pm�s csatol�sa"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Nyers 16KB-os cartridge k�pm�s csatol�sa"
  IDS_ATTACH_AR_CART_IMAGE        "32KB-os Action Replay cartridge k�pm�s csatol�sa"
  IDS_ATTACH_AR3_CART_IMAGE       "Attach raw 16KB Action Replay MK3 cartridge image"
  IDS_ATTACH_AR4_CART_IMAGE       "Attach raw 32KB Action Replay MK4 cartridge image"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Attach raw 16KB Stardos cartridge image"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "32KB-os Atomic Power cartridge k�pm�s csatol�sa"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Attach raw 8KB Epyx FastLoad cartridge image"
  IDS_ATTACH_IEEE488_CART_IMG     "Attach IEEE-488 Interface cartridge image"
  IDS_ATTACH_RETRO_R_CART_IMG     "64KB-os Retro Replay cartridge k�pm�s csatol�sa"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Attach raw 512kB MMC Replay cartridge image"
  IDS_ATTACH_IDE64_CART_IMAGE     "64KB-os IDE64 cartridge k�pm�s csatol�sa"
  IDS_ATTACH_SS4_CART_IMAGE       "Attach raw 32KB Super Snapshot V4 cartridge image"
  IDS_ATTACH_SS5_CART_IMAGE       "Attach raw 64KB Super Snapshot V5 cartridge image"
  IDS_ATTACH_STB_CART_IMAGE       "Structured Basic cartridge k�pm�s csatol�sa"
  IDS_SELECT_CARTRIDGE_IMAGE      "Cartridge f�jl kiv�laszt�sa"
  IDS_MODEL                       "Modell"
  IDS_DRIVE_SETTINGS              "Lemezegys�g be�ll�t�sai"
  IDS_SELECT_START_SNAP_EVENT     "V�lasszon kezdeti pillanatk�pet az esem�ny r�gz�t�shez"
  IDS_SELECT_END_SNAP_EVENT       "V�lasszon v�gs� pillanatk�pet az esem�ny r�gz�t�shez"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "%s verzi� *INSTABIL* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "%s verzi� (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE - k�zrem�k�d�k"
  IDS_WHO_MADE_WHAT               "Ki mit csin�lt?"
  IDS_LICENSE                     "Licensz"
  IDS_NO_WARRANTY                 "Nincs garancia!"
  IDS_VICE_WITHOUT_WARRANTY       "A VICE-t garancia n�lk�l terjesztj�k!"
  IDS_PRESS_KEY_NORTHWEST         "Nyomjon egy billenty�t �szaknyugathoz"
  IDS_PRESS_KEY_NORTH             "Nyomjon egy billenty�t �szakhoz"
  IDS_PRESS_KEY_NORTHEAST         "Nyomjon egy billenty�t �szakkelethez"
  IDS_PRESS_KEY_EAST              "Nyomjon egy billenty�t kelethez"
  IDS_PRESS_KEY_SOUTHEAST         "Nyomjon egy billenty�t D�lkelethez"
  IDS_PRESS_KEY_SOUTH             "Nyomjon egy billenty�t d�lhez"
  IDS_PRESS_KEY_SOUTHWEST         "Nyomjon egy billenty�t d�lnyugathoz"
  IDS_PRESS_KEY_WEST              "Nyomjon egy billenty�t nyugathoz"
  IDS_PRESS_KEY_FIRE              "Nyomjon egy billenty�t a t�zgombhoz"
  IDS_NO_USERPORT_ADAPTER         "Nincs userport botkorm�ny adapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA userport botkorm�ny adapter"
  IDS_PET_USERPORT_ADAPTER        "PET userport botkorm�ny adapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer userport joy adapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM userport botkorm�ny adapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT userport botkorm�ny adapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft userport joy adapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte userport joy adapter"
  IDS_NO_SIDCART_JOY              "SID cartridge botkorm�ny tilt�sa"
  IDS_SIDCART_JOY                 "SID cartridge botkorm�ny enged�lyez�se"
  IDS_NUMPAD_AND_RCTRL            "Numerikus + Jobb Ctrl"
  IDS_KEYSET_A                    "'A' gombk�szlet"
  IDS_KEYSET_B                    "'B' gombk�szlet"
  IDS_ALL_BUTTONS_AS_FIRE         "�sszes gomb t�zgombk�nt"
  IDS_NUMERIC_SEE_ABOVE           "Numerikus (l�sd fent)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Nincs gomb - automatikus t�z letiltva"
  IDS_ALL_FILES_FILTER            "�sszes f�jl (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE paletta f�jlok (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE pillanatk�p f�jlok (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 files (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk image files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Szalag k�pm�s f�jlok (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Zipped files (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT cartridge k�pm�s fjlok (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Nyers cartridge k�pm�s f�jlok (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE lemezlista f�jlok (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE ROM k�szlet f�jlok (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE ROM k�szlet arch�vumok (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE billenty�lek�pez�s f�jlok (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodore emul�tor f�jlok (*.prg; *.p00)"
  IDS_FLEXIBLE                    "Rugalmas"
  IDS_ADJUSTING                   "Igazod�"
  IDS_EXACT                       "Pontos"
  IDS_SOUND_DRIVER_DIRECTX        "Hang meghajt�: DirectX"
  IDS_SOUND_DRIVER_WMM            "Hang meghajt�: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "M�dia f�jlok (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "'A' gombk�szlet be�ll�t�sa"
  IDS_CONFIGURE_KEYSET_B          "'B' gombk�szlet be�ll�t�sa"
  IDS_SAVE_MEDIA_IMAGE            "F�nyk�p k�sz�t�se"
  IDS_S_AT_D_SPEED                "%s %d%% sebess�gen, %d fps%s"
  IDS_TAPE                        "Tape:"
  IDS_JOYSTICK_C                  "Botkorm�ny:"
  IDS_RECORDING                   "Felv�tel\n%02d:%02d"
  IDS_PLAYBACK                    "Visszaj�tsz�s\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Ismeretlen"
  IDS_P_NUMBER                    "<number>"
  IDS_SET_INPUT_JOYSTICK_1        "Port 1-es botkorm�ny eszk�z megad�sa"
  IDS_SET_INPUT_JOYSTICK_2        "Port 2-es botkorm�ny eszk�z megad�sa"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Port 1-es extra botkorm�ny eszk�z megad�sa"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Port 2-es extra botkorm�ny eszk�z megad�sa"
  IDS_SAVE_SETTINGS_ON_EXIT       "Be�ll�t�sok ment�se kil�p�skor"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Never save settings on exit"
  IDS_CONFIRM_QUIT_VICE           "Confirm quitting VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Never confirm quitting VICE"
  IDS_USE_ALL_CPU_SMP             "SMP rendszereken az �sszes CPU haszn�lata"
  IDS_USE_FIRST_CPU_SMP           "SMP rendszereken csak az els� CPU haszn�lata"
  IDS_START_VICE_FULLSCREEN_MODE  "A VICE ind�t�sa teljes k�perny�s m�dban"
  IDS_DISABLE_DX9                 "DirectX9 vide� meghajt� tilt�sa"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "V�ratlan hiba t�rt�nt. %d szign�l �rkezett (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "V�ratlan hiba t�rt�nt. %d szign�l �rkezett."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "T�tlen"
  IDS_SERVER_LISTENING            "V�rakoz�s kliensre"
  IDS_CONNECTED_SERVER            "Kapcsol�dva kiszolg�l�hoz"
  IDS_CONNECTED_CLIENT            "Kapcsol�d� kliens"
  IDS_INVALID_PORT_NUMBER         "�rv�nytelen port sz�m"
  IDS_ERROR_STARTING_SERVER       "Hiba t�rt�nt a j�t�k kiszolg�l� ind�t�sakor."
  IDS_ERROR_CONNECTING_CLIENT     "Hiba t�rt�nt a kapcsol�d�skor."
#endif
  IDS_SOUND_RECORDING_STARTED     "Sound Recording started..."
  IDS_SOUND_RECORDING_STOPPED     "Sound Recording stopped..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "M�gsem"
  IDS_NONE                        "Nincs"
  IDS_BROWSE                      "Tall�z..."
  IDS_SPECIFY_MIDI_IN             "Adja meg a MIDI-In eszk�z�t"
  IDS_SPECIFY_MIDI_OUT            "Adja meg a MIDI-Out eszk�z�t"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Hiba az EasyFlash crt f�jl ment�se k�zben"
  IDS_NO_EASYFLASH_CART_INSERTED  "No EasyFlash cartridge inserted"
  IDS_DATASETTE_CAPTION           "Datasette settings"
  IDS_DATASETTE_RESET_WITH_CPU    "Alaphelyzetbe hoz�s CPU Reset eset�n"
  IDS_DATASETTE_MOTOR_GROUP       "Motor sebess�ge olvas�s k�zben"
  IDS_DATASETTE_DELAY_TRIGGER     "cycle(s) additional delay each trigger"
  IDS_DATASETTE_DELAY_AT_ZERO     "Magn� �res r�s k�sleltet�s"
  IDS_TOGGLE_USEIECDEVICE         "Use IEC Device"
  IDS_SELECTDISK                  "Lemez k�pm�s"
  IDS_SELECTDIR                   "Directory"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Val�di IEC eszk�z"
#endif
  IDS_SELECTNONE                  "Nincs"
  IDS_AUTOSTART                   "Automatikus indul�s"
  IDS_BROWSEDIR                   "Tall�z..."
  IDS_TOGGLE_ATTACH_READONLY      "Csatol�s csak olvashat� m�don"
  IDS_TOGGLE_READP00              "Read P00 files"
  IDS_TOGGLE_WRITEP00             "Write P00 files"
  IDS_TOGGLE_HIDENONP00           "Hide non-P00 files"
  IDS_JOYSTICK_CAPTION            "Botkorm�ny be�ll�t�sai"
  IDS_JOYSTICK_IN_PORT_1          "Botkorm�ny az 1-es porton"
  IDS_SELECT_FIRE_BUTTON          "V�lasszon t�z gombot"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Automatikus t�z be�ll�t�sai"
  IDS_AUTOFIRE_SPEED              "Autofire speed (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Botkorm�ny a 2-es porton"
  IDS_JOY_CONFIG_A                "'A' gombk�szlet be�ll�t�sa"
  IDS_JOY_CONFIG_B                "'B' gombk�szlet be�ll�t�sa"
  IDS_JOY_CALIBRATE               "Calibrate Joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Extra botkorm�ny be�ll�t�sai"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick in extra port #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick in extra port #2"
  IDS_KEYSET_SW                   "South West"
  IDS_KEYSET_S                    "South"
  IDS_KEYSET_SE                   "South East"
  IDS_KEYSET_W                    "West"
  IDS_KEYSET_E                    "East"
  IDS_KEYSET_NW                   "North West"
  IDS_KEYSET_N                    "North"
  IDS_KEYSET_NE                   "North East"
  IDS_KEYSET_FIRE                 "Fire button"
  IDS_SOUND_CAPTION               "Hang eszk�z be�ll�t�sa"
  IDS_SOUND_DIRECTX               "DirectX meghajt�"
  IDS_SOUND_WMM                   "WMM meghajt�"
  IDS_SOUND_OUTPUT_MODE           "Sound output mode"
  IDS_SOUND_SAMPLE_FREQUENCY      "Mintav�telez�si r�ta :"
  IDS_SOUND_BUFFER_SIZE           "Sound Buffer Size :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Sound Fragment Size :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Kicsi"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "K�zepes"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Nagy"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "Synchronization Method :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "A jelenleg csatolt lemezek ment�se"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "A jelenleg bet�lt�tt ROM-ok ment�se"
  IDS_FULLSCREEN_DRIVER           "Driver:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdepth:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Resolution:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Friss�t�si r�ta:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK szinkroniz�ci�"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Rajzol�s a DX els�dleges fel�letre"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Keep aspect ratio (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "True aspect ratio"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Value %.3f for %s is out of range, using %.3f instead"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Value %d for %s is out of range, using %d instead"
  IDS_AUDIO_LEAK                  "Audio leak"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Sz�n (0..2)"
  IDS_COLORS_SATURATION           "Tel�tetts�g (0..2)"
  IDS_COLORS_CONTRAST             "Kontraszt (0..2)"
  IDS_COLORS_BRIGHTNESS           "F�nyess�g (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Scanline shade (0..1)"
  IDS_CRT_BLUR                    "Blur (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Odd lines phase (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Odd lines offset (0..2)"
  IDS_VICII_PALETTE               "VICII Palette"
  IDS_VIC_PALETTE                 "VIC Palette"
  IDS_CRTC_PALETTE                "CRTC Palette"
  IDS_VDC_PALETTE                 "VDC Palette"
  IDS_TED_PALETTE                 "TED Palette"
  IDS_VICII_COLORS                "VICII Colors"
  IDS_VIC_COLORS                  "VIC Colors"
  IDS_CRTC_COLORS                 "CRTC Colors"
  IDS_VDC_COLORS                  "VDC Colors"
  IDS_TED_COLORS                  "TED Colors"
  IDS_VICII_CRT_EMULATION         "VICII CRT emulation"
  IDS_VIC_CRT_EMULATION           "VIC CRT emulation"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT emulation"
  IDS_VDC_CRT_EMULATION           "VDC CRT emulation"
  IDS_TED_CRT_EMULATION           "TED CRT emulation"
  IDS_VICII_RENDER_FILTER         "VICII Render filter"
  IDS_VIC_RENDER_FILTER           "VIC Render filter"
  IDS_CRTC_RENDER_FILTER          "CRTC Render filter"
  IDS_VDC_RENDER_FILTER           "VDC Render filter"
  IDS_TED_RENDER_FILTER           "TED Render filter"
  IDS_VICII_AUDIO_LEAK            "VICII Audio leak"
  IDS_VIC_AUDIO_LEAK              "VIC Audio leak"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audio leak"
  IDS_VDC_AUDIO_LEAK              "VDC Audio leak"
  IDS_TED_AUDIO_LEAK              "TED Audio leak"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "External Palette:"
  IDS_RAM_CAPTION                 "RAM be�ll�t�sai"
  IDS_RAM_INIT_AT_POWERUP         "Alaphelyzetbe �ll�t�s bekapcsol�skor"
  IDS_RAM_VALUE_FIRST_BYTE        "Els� b�jt �rt�ke"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "�lland� �rt�kek hossza"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "�lland� minta hossza"
  IDS_PRINTER_EMULATION           "Nyomtat� emul�ci�"
  IDS_PRINTER_FORMFEED            "Lapdob�s k�ld�se"
  IDS_FILESYSTEM_PRINTER          "F�jlrendszer nyomtat�"
  IDS_PRINTER_DRVR                "Nyomtat� meghajt�"
  IDS_OUTPUT                      "Kimenet"
  IDS_OUTPUT_TO_FILE              "Kimenet f�jlba"
  IDS_OUTPUT_FILE1_NAME           "1-es kimeneti f�jl"
  IDS_OUTPUT_FILE2_NAME           "2-es kimeneti f�jl"
  IDS_OUTPUT_FILE3_NAME           "3-as kimeneti f�jl"
  IDS_ROMSET_SELECT_ARCHIVE       "ROM k�szlet arch�vum"
  IDS_ROMSET_ARCHIVE_LOAD         "Arch�vum bet�lt�se"
  IDS_ROMSET_ARCHIVE_SAVE         "Arch�vum ment�se"
  IDS_ROMSET_CONFIGURATION        "Configuration"
  IDS_ROMSET_ARCHIVE_APPLY        "Alkalmaz"
  IDS_ROMSET_ARCHIVE_NEW          "�j"
  IDS_ROMSET_ARCHIVE_DELETE       "T�rl�s"
  IDS_ROMSET_SELECT_FILE          "ROM k�szlet f�jl"
  IDS_ROMSET_FILE_LOAD            "ROM k�szlet bet�lt�se"
  IDS_ROMSET_FILE_SAVE            "ROM k�szlet ment�se"
  IDS_CUSTOM_SPEED_CAPTION        "Egy�ni sebess�g"
  IDS_ENTER_CUSTOM_SPEED          "Adja meg a sebess�get [%]"
  IDS_NEW_CONFIGURATION           "�j konfigur�ci�"
  IDS_ENTER_CONFIGURATION_NAME    "�rja be a konfigur�ci� nev�t"
  IDS_RS232_CAPTION               "RS232 be�ll�t�sai"
  IDS_RS232_DEV_1                 "RS232 1-es eszk�z"
  IDS_RS232_DEV_2                 "RS232 2-es eszk�z"
  IDS_RS232_DEV_3                 "RS232 3-as eszk�z"
  IDS_RS232_DEV_4                 "RS232 4-es eszk�z"
  IDS_NETWORK_CAPTION             "H�l�zati j�t�k be�ll�t�sai"
  IDS_CURRENT_MODE                "Jelenlegi m�d"
  IDS_SERVER_BIND                 "Szerver c�m+port"
  IDS_TCP_PORT                    "TCP port"
  IDS_NETWORK_SERVER              "Kiszolg�l� elind�t�sa"
  IDS_NETWORK_CLIENT              "Kapcsol�d�s ehhez:"
  IDS_NETWORK_DISCONNECT          "Sz�tkapcsol�d�s"
  IDS_CONTROL                     "Vez�rl�"
  IDS_SERVER                      "Kiszolg�l�"
  IDS_CLIENT                      "Kliens"
  IDS_KEYBOARD                    "Billenty�zet"
  IDS_JOYSTICK_1                  "Botkorm�ny 1"
  IDS_JOYSTICK_2                  "Botkorm�ny 2"
  IDS_DEVICES                     "Eszk�z�k"
  IDS_SETTINGS                    "Be�ll�t�sok"
  IDS_TOGGLE_CONSOLE_APPEND       "Append log to existing file"
  IDS_IMAGE_CONTENTS              "Tartalom"
  IDS_NEW_IMAGE                   "�j k�pm�s"
  IDS_NAME                        "N�v"
  IDS_ID                          "ID"
  IDS_TYPE                        "T�pus"
  IDS_BLANK_IMAGE                 "K�pm�s l�trehoz�sa"
  IDS_NEW_TAP_IMAGE               "�j TAP k�pm�s"
  IDS_SAVE                        "Ment�s"
  IDS_SELECT_DRIVER               "V�lasszon meghajt�t"
  IDS_FFMPEG_SETTINGS             "FFMPEG be�ll�t�sai"
  IDS_FORMAT                      "Form�tum"
  IDS_AUDIO_CODEC                 "Audi� kodek"
  IDS_BITRATE                     "bitr�ta"
  IDS_VIDEO_CODEC                 "Vide� kodek"
  IDS_SOUND_RECORD_CAPTION        "Hangfelv�tel be�ll�t�sai"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Hangfelv�tel form�tuma"
  IDS_SOUND_RECORD_FILE_LABEL     "Hangfelv�tel f�jl"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Karakter"
  IDS_COMPUTER_RESOURCES_CAPTION  "Sz�m�t�g�p er�forr�sai"
  IDS_COMPUTER_RESOURCES          "Sz�m�t�g�p er�forr�sai elmentve a ROM k�szletbe"
  IDS_DRIVE_RESOURCES_CAPTION     "Lemezegys�g er�forr�sai"
  IDS_DRIVE_RESOURCES             "Lemezegys�gek er�forr�sai elmentve a ROM k�szletbe"
  IDS_SYMBOLIC                    "Symbolic"
  IDS_POSITIONAL                  "Positional"
  IDS_DUMP_KEYSET                 "Billenty�zetlek�pz�s f�jlba �r�sa"
  IDS_DUMP_SHORTCUTS              "R�vid�t�sek ki�r�sa"
  IDS_SYMBOLIC_US                 "Symbolic US"
  IDS_SYMBOLIC_DE                 "Symbolic DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "Mem�ria"
  IDS_DRIVE_TYPE                  "Lemezegys�g t�pus"
  IDS_40_TRACK_HANDLING           "40 s�v kezel�se"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Nincs kiterjeszt�s"
  IDS_SELECT_DRIVE_EXTEND_ASK     "K�rd�s kiterjeszt�s eset�n"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Kiterjeszt�s hozz�f�r�skor"
  IDS_IDLE_METHOD                 "�resj�rat m�d"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "�res ciklusok kihagy�sa"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Ciklusok kihagy�sa"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "P�rhuzamos k�bel"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Lemezegys�g b�v�t�s"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Mem�ria"
  IDS_SID_GENGROUP1               "SID modell"
  IDS_SID_FILTERS                 "SID filters"
  IDS_MP_FILE                     "F�jl"
  IDS_MP_ATTACH_DISK_IMAGE        "Lemez k�pm�s csatol�sa"
  IDS_MP_DETACH_DISK_IMAGE        "Lemezk�pm�s lev�laszt�sa"
  IDS_MP_FLIP_LIST                "Lemezlista"
  IDS_MP_DATASETTE_CONTROL        "Magn� vez�rl�s"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Cartridge k�pm�s csatol�sa..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Nyomk�vet�s"
#ifdef DEBUG
  IDS_MP_MODE                     "Mode"
#endif
  IDS_MP_EDIT                     "Szerkeszt"
  IDS_MP_SNAPSHOT                 "Pillanatk�p"
  IDS_MP_RECORDING_START_MODE     "R�gz�t�s ind�t�s�nak m�dja"
  IDS_MP_OPTIONS                  "Opci�k"
  IDS_MP_REFRESH_RATE             "Friss�t�si r�ta"
  IDS_MP_MAXIMUM_SPEED            "Maxim�lis sebess�g"
  IDS_MP_VIDEO_STANDARD           "Vide� szabv�ny"
  IDS_MP_DRIVE_SYNC_FACTOR        "Lemezegys�g szinkron faktor"
  IDS_MP_SETTINGS                 "Be�ll�t�sok"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Cartridge/IO be�ll�t�sai"
  IDS_MP_LANGUAGE                 "Nyelv"
  IDS_MP_HELP                     "Seg�ts�g"
  IDS_MP_VIEW                     "View"
  IDS_MP_WINDOW                   "Window"
  IDS_MI_EXIT                     "Kil�p�s"
  IDS_MI_ABOUT                    "A VICE n�vjegye..."
  IDS_MI_PAUSE                    "Sz�net"
  IDS_MI_EDIT_COPY                "M�sol"
  IDS_MI_EDIT_PASTE               "Beilleszt"
  IDS_MI_AUTOSTART                "Lemez/szalag k�pm�s automatikus ind�t�sa..."
  IDS_MI_RESET_HARD               "Hideg"
  IDS_MI_RESET_SOFT               "Meleg"
  IDS_MI_DRIVE8                   "#8-as lemezegys�g"
  IDS_MI_DRIVE9                   "#9-es lemezegys�g"
  IDS_MI_DRIVE10                  "#10-es lemezegys�g"
  IDS_MI_DRIVE11                  "#11-es lemezegys�g"
  IDS_MI_ATTACH_TAPE              "Szalag k�pm�s csatol�sa..."
  IDS_MI_DETACH_TAPE              "Szalag k�pm�s lev�laszt�sa"
  IDS_MI_DETACH_ALL               "�sszes"
  IDS_MI_TOGGLE_SOUND             "Hangok enged�lyez�se"
  IDS_MI_TOGGLE_DOUBLESIZE        "Dupla m�ret"
  IDS_MI_TOGGLE_DOUBLESCAN        "Dupla p�szt�z�s"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Double vertical"
  IDS_MI_DRIVE_TRUE_EMULATION     "Val�s lemezegys�g emul�ci�"
  IDS_MI_DRIVE_SOUND_EMULATION    "Drive sound emulation"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Val�s lemezegys�g emul�ci� kezel�se autostartn�l"
  IDS_MI_TOGGLE_VIDEOCACHE        "K�p gyors�t�t�r"
  IDS_MI_DRIVE_SETTINGS           "Lemezegys�g be�ll�t�sai..."
  IDS_MI_CART_SMART_ATTACH        "Smart-attach image..."
  IDS_MI_CART_ATTACH_CRT          "CRT image..."
  IDS_MI_CART_ATTACH_8KB          "Generic 8KB image..."
  IDS_MI_CART_ATTACH_16KB         "Generic 16KB image..."
  IDS_MI_CART_ATTACH_AR           "Action Replay image..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 image..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 image..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos image..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power image..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad image..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE-488 Interface image..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay image..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay image..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 interface image..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 image..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 image..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC image..."
  IDS_MI_FLIP_ADD                 "Az aktu�lis k�pm�s hozz�ad�sa (8-as egys�g)"
  IDS_MI_FLIP_REMOVE              "Az aktu�lis k�pm�s elt�vol�t�sa (8-as egys�g)"
  IDS_MI_FLIP_NEXT                "K�vetkez� k�pm�s csatol�sa (8-as egys�g)"
  IDS_MI_FLIP_PREVIOUS            "El�z� k�pm�s csatol�sa (8-as egys�g)"
  IDS_MI_FLIP_LOAD                "Lemezlista bet�lt�se"
  IDS_MI_FLIP_SAVE                "Lemezlista ment�se f�jlba"
  IDS_MI_DATASETTE_STOP           "Le�ll�t�s"
  IDS_MI_DATASETTE_START          "Ind�t�s"
  IDS_MI_DATASETTE_FORWARD        "El�recs�v�l�s"
  IDS_MI_DATASETTE_REWIND         "Visszacs�v�l�s"
  IDS_MI_DATASETTE_RECORD         "Felv�tel"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Sz�ml�l� null�z�sa"
  IDS_MI_CART_SET_DEFAULT         "Cartridge alap�rtelmezett� t�tele"
  IDS_MI_TOGGLE_CART_RESET        "�jraind�t�s cartridge cser�n�l"
  IDS_MI_CART_DETACH              "Cartridge k�pm�s(ok) lev�laszt�sa"
  IDS_MI_CART_FREEZE              "Fagyaszt�s Cartridge-dzsel"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Norm�l"
  IDS_MI_DEBUG_MODE_SMALL         "Kicsi"
  IDS_MI_DEBUG_MODE_HISTORY       "History"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "History Autoplay"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Main CPU Trace"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Drive0 CPU Trace"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Drive1 CPU Trace"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Pillanatk�p bet�lt�se..."
  IDS_MI_SNAPSHOT_SAVE            "Pillanatk�p f�jl ment�se..."
  IDS_MI_LOADQUICK                "Gyors pillanatk�p bet�lt�se"
  IDS_MI_SAVEQUICK                "Gyors pillanatk�p f�jl ment�se"
  IDS_MI_EVENT_TOGGLE_RECORD      "Esem�ny felv�tel ind�t�sa/meg�ll�t�sa"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Esem�ny visszaj�tsz�s ind�t�sa/meg�ll�t�sa"
  IDS_MI_EVENT_SETMILESTONE       "Kil�m�terk� elhelyez�se a felv�telben"
  IDS_MI_EVENT_RESETMILESTONE     "Visszaugr�s az el�z� kil�m�terk�h�z"
  IDS_MI_EVENT_START_MODE_SAVE    "�j pillanatk�p ment�se"
  IDS_MI_EVENT_START_MODE_LOAD    "L�tez� pillanatk�p bet�lt�se"
  IDS_MI_EVENT_START_MODE_RESET   "Indul�s RESET-tel"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Visszaj�tsz�s fel�l�r�sa"
  IDS_MI_EVENT_DIRECTORY          "V�lassza ki a felv�teleket/k�nyvt�rat"
  IDS_MI_MEDIAFILE                "Save/stop media file..."
  IDS_MI_SOUND_RECORD_START       "Hangf�jl felv�tele..."
  IDS_MI_SOUND_RECORD_STOP        "Hangfelv�tel le�ll�t�sa"
  IDS_MI_REFRESH_RATE_AUTO        "Automatikus"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Nincs hat�r"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Egy�ni"
  IDS_MI_TOGGLE_WARP_MODE         "Hipergyors m�d"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Mindig fel�l"
  IDS_MI_TOGGLE_DX9DISABLE        "DirectX9 vide� meghajt� tilt�sa"
  IDS_MI_SWAP_JOYSTICK            "Swap joysticks"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Swap userport joysticks"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Allow opposite directions"
  IDS_MI_JOYKEYS_TOGGLE           "Botkorm�ny gombok enged�lyez�se"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtu�lis eszk�z�k ciklus kihagy�sa"
  IDS_MI_MOUSE                    "Eg�r esem�nyek elkap�sa"
  IDS_MI_C64MODEL_SETTINGS        "C64 model settings..."
  IDS_MI_AUTOSTART_SETTINGS       "Autostart be�ll�t�sai..."
  IDS_MI_VIDEO_SETTINGS           "Vide� be�ll�t�sai..."
  IDS_MI_DEVICEMANAGER            "Perif�ri�k be�ll�t�sai..."
  IDS_MI_JOY_SETTINGS             "Botkorm�ny be�ll�t�sai..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Userport joystick settings..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sidcart joystick settings..."
  IDS_MI_KEYBOARD_SETTINGS        "Billenty�zet be�ll�t�sai..."
  IDS_MI_SOUND_SETTINGS           "Hang be�ll�t�sai..."
  IDS_MI_ROM_SETTINGS             "ROM-ok be�ll�t�sai..."
  IDS_MI_RAM_SETTINGS             "RAM be�ll�t�sai..."
  IDS_MI_DATASETTE_SETTINGS       "Datasette settings..."
  IDS_MI_VICII_SETTINGS           "VIC-II be�ll�t�sai..."
  IDS_MI_MOUSE_SETTINGS           "Mouse settings..."
  IDS_MI_SID_SETTINGS             "SID be�ll�t�sai..."
  IDS_MI_RS232_SETTINGS           "RS232 be�ll�t�sai..."
  IDS_MI_REU_SETTINGS             "REU settings..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM settings..."
  IDS_MI_RAMCART_SETTINGS         "RamCart settings..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box settings..."
  IDS_MI_EXPERT_SETTINGS          "Expert Cartridge settings..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC settings..."
  IDS_MI_MMC64_SETTINGS           "MMC64 be�ll�t�sai..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay settings..."
  IDS_MI_RR_SETTINGS              "Retro Replay settings..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice settings..."
  IDS_MI_MIDI_SETTINGS            "MIDI settings..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX settings..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC settings..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lightpen settings..."
  IDS_MI_IDE64_SETTINGS           "IDE64 be�ll�t�sai..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernet settings..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA settings..."
  IDS_MI_RS232USER_SETTINGS       "RS232 userport settings..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash settings..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander settings..."
  IDS_MI_TOGGLE_SFX_SS            "SFX Sound Sampler enged�lyez�se"
  IDS_MI_TOGGLE_USERPORT_RTC      "Enable the Userport RTC expansion"
  IDS_MI_SETTINGS_SAVE_FILE       "Jelenlegi be�ll�t�sok ment�se adott f�jlba"
  IDS_MI_SETTINGS_LOAD_FILE       "Be�ll�t�sok bet�lt�se a megadott f�jlb�l"
  IDS_MI_SETTINGS_SAVE            "Jelenlegi be�ll�t�sok ment�se"
  IDS_MI_SETTINGS_LOAD            "Be�ll�t�sok bet�lt�se"
  IDS_MI_SETTINGS_DEFAULT         "Alap�rtelmez�s be�ll�t�sa"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Be�ll�t�sok ment�se kil�p�skor"
  IDS_MI_CONFIRM_ON_EXIT          "Meger�s�t�s kil�p�s el�tt"
  IDS_MI_LANG_EN                  "Angol"
  IDS_MI_LANG_DA                  "D�n"
  IDS_MI_LANG_DE                  "N�met"
  IDS_MI_LANG_ES                  "Spanish"
  IDS_MI_LANG_FR                  "Francia"
  IDS_MI_LANG_HU                  "Magyar"
  IDS_MI_LANG_IT                  "Olasz"
  IDS_MI_LANG_KO                  "Korean"
  IDS_MI_LANG_NL                  "Holland"
  IDS_MI_LANG_PL                  "Lengyel"
  IDS_MI_LANG_RU                  "Russian"
  IDS_MI_LANG_SV                  "Sv�d"
  IDS_MI_LANG_TR                  "T�r�k"
  IDS_MI_CMDLINE                  "Parancssori opci�k"
  IDS_MI_CONTRIBUTORS             "K�zrem�k�d�k"
  IDS_MI_LICENSE                  "Licensz"
  IDS_MI_WARRANTY                 "Nincs garancia!"
  IDS_MI_TOGGLE_FULLSCREEN        "Teljes k�perny�"
  IDS_MI_SIDCART_SETTINGS         "SID k�rtya be�ll�t�sai......"
  IDS_MI_MON_OPEN                 "Open"
  IDS_MI_MON_SAVE                 "Ment�s"
  IDS_MI_MON_PRINT                "Print"
  IDS_MI_MON_EXIT                 "Exit        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Stop Debug"
  IDS_MI_MON_STOP_EXEC            "Stop Execution"
  IDS_MI_MON_STEP_INTO            "Step into"
  IDS_MI_MON_STEP_OVER            "Step over"
  IDS_MI_MON_SKIP_RETURN          "Step until return"
  IDS_MI_MON_GOTO_CURSOR          "Go to cursor"
  IDS_MI_MON_EVAL                 "Evaluate"
  IDS_MI_MON_CURRENT              "Current instruction"
  IDS_MI_MON_WND_EVAL             "Evaluation window"
  IDS_MI_MON_WND_REG              "Register window"
  IDS_MI_MON_WND_MEM              "Memory window"
  IDS_MI_MON_WND_DIS              "Disassembly window"
  IDS_MI_MON_WND_CONSOLE          "Console window"
  IDS_MI_MON_COMPUTER             "Sz�m�t�g�p"
  IDS_MI_MON_DRIVE8               "#8-as lemezegys�g"
  IDS_MI_MON_DRIVE9               "#9-es lemezegys�g"
  IDS_MI_MON_CASCADE              "Cascade"
  IDS_MI_MON_TILE_VERT            "Tile vertically"
  IDS_MI_MON_TILE_HORIZ           "Tile horizontally"
  IDS_MI_MON_ARRANGE_ICONS        "Arrange icons"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "Errore di VICE!"
  IDS_VICE_INFORMATION            "Informazioni su VICE"
  IDS_VICE_QUESTION               "Domanda di VICE"
  IDS_FFMPEG_DLL_MISMATCH         "La versione della DLL ffmpeg non corrisponde."
  IDS_DIRECTDRAW_ERROR            "Errore DirectDraw: Codice:%8x Errore:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Non � possibile salvare le impostazioni."
  IDS_CANNOT_LOAD_SETTINGS        "Non � possibile caricare le impostazioni."
  IDS_DEFAULT_SETTINGS_RESTORED   "Impostazioni originarie ripristinate."
  IDS_CANNOT_ATTACH_FILE          "Non � possibile selezionare il file specificato"
  IDS_START_MONITOR               "%s\n\nAvvio monitor? (No per reset, annulla per continuare)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Estendere l'immagine al formato di 40 tracce?"
  IDS_DETACHED_DEVICE_S           "Rimosso dispositivo %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Selezionato %s per la periferica #%s"
  IDS_DETACHED_TAPE               "Cassetta rimossa"
  IDS_HISTORY_RECORDED_UNKNOWN    "Cronologia registrata con una release sconosciuta"
  IDS_HISTORY_RECORDED_VICE_S     "Cronologia registrata con VICE-%s"
  IDS_PAUSED                      "pausa"
  IDS_FRAME_NUMBER                "frame n."
  IDS_RESUMED                     "ripreso"
  IDS_REALLY_EXIT                 "Uscire davvero?\n\nTutti i dati presenti nella RAM emulata saranno persi."
  IDS_TFE_PROBLEM                 "Il supporto TFE/RR-Net non � disponibile sul tuo sistema,\nmanca qualche parte importante. Per favore, consulta\nla knowledge base di VICE\n\n      http://vicekb.trikaliotis.net/13-005\n\nper alcune cause e per attivare il supporto di rete in VICE."
  IDS_TFE_RRNET_SUPPORT           "Supporto TFE/RR-Net"
  IDS_CANNOT_AUTOSTART_FILE       "Non � possibile avviare automaticamente il file specificato."
  IDS_ATTACHED_TAPE_S             "Cassetta %s selezionata"
  IDS_SETTINGS_SAVED_SUCCESS      "Impostazioni salvate con successo."
  IDS_SETTINGS_LOADED_SUCCESS     "Impostazioni caricate con successo."
  IDS_ATTACH_DISK_IMAGE           "Seleziona immagine disco"
  IDS_ATTACH_TAPE_IMAGE           "Seleziona immagine cassetta"
  IDS_AUTOSTART_IMAGE             "Avvia automaticamente immagine disco/cassetta"
  IDS_INVALID_CARTRIDGE           "Immagine cartuccia non valida"
  IDS_BAD_CARTRIDGE_CONFIG        "Configurazione della cartuccia errata nell'IU!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Immagine cartuccia non valida"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Immagine dell'output della console di log"
  IDS_LOG_FILES_TYPE              "File di log (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Non � possibile scrivere il file di log `%s'."
  IDS_LOAD_FLIP_LIST_FILE         "Carica file fliplist"
  IDS_CANNOT_READ_FLIP_LIST       "Non � possibile caricare il file della flip list"
  IDS_SAVE_FLIP_LIST_FILE         "Salva file fliplist"
  IDS_CANNOT_WRITE_FLIP_LIST      "Non � possibile scrivere il file della flip list"
  IDS_SELECT_KEYMAP_FILE          "Seleziona il file della mappa della tastiera"
  IDS_SAVE_KEYMAP_FILE            "Salva il file della mappa della tastiera"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Non � possibile scrivere il file della mappa della tastiera"
  IDS_SAVE_CONFIG_FILE            "Salva file di configurazione"
  IDS_LOAD_CONFIG_FILE            "Carica file di configurazione"
  IDS_MAPPING                     "Mappatura"
  IDS_KEYBOARD_SETTINGS           "Impostazioni tastiera"
  IDS_ATTACH                      "Seleziona"
  IDS_PLEASE_ENTER_A_FILENAME     "Inserire il nome del file."
  IDS_OVERWRITE_EXISTING_IMAGE    "Sovrascrivo l'immagine esistente?"
  IDS_CANNOT_CREATE_IMAGE         "Non � possibile creare il file immagine!"
  IDS_COMMAND_LINE_OPTIONS        "Parametri della riga di comando"
  IDS_COMMAND_OPTIONS_AVAIL       "Quali parametri della riga di comando sono disponibili?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Nessun driver selezionato o driver selezionato non supportato"
  IDS_CANT_WRITE_SCREENSHOT_S     "Non � possibile scrivere il file di screenshot `%s'."
  IDS_AUTOSTART_DISK_IMAGE        "Avvia automaticamente immagine disco"
  IDS_SELECT_FS_DIRECTORY         "Seleziona la directory del file system"
  IDS_PRINTER_USERPORT            "Stampante su userport"
  IDS_PRINTER_4                   "Stampante 4"
  IDS_PRINTER_5                   "Stampante 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Drive 8"
  IDS_DRIVE_9                     "Drive 9"
  IDS_DRIVE_10                    "Drive 10"
  IDS_DRIVE_11                    "Drive 11"
  IDS_PERIPHERAL_SETTINGS         "Impostazioni periferiche"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Non � possibile scrivere il file di snapshot."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Non � possibile leggere l'immagine dello snapshot"
  IDS_LOAD_S_ROM_IMAGE            "Carica immagine della ROM %s"
  IDS_SELECT_ROMSET_ARCHIVE       "Seleziona l'archivio del ROM set"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Non � possibile caricare l'archivio del romset!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Non � possibile salvare l'archivio del romset!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Non � possibile caricare il file del romset!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Non � possibile salvare il file del romset!"
  IDS_SELECT_ROMSET_FILE          "Seleziona il file del ROM set"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "Computer"
  IDS_DRIVE                       "Drive"
  IDS_ROM_SETTINGS                "Impostazioni ROM"
  IDS_SAVE_SNAPSHOT_IMAGE         "Salva immagine snapshot"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Non � possibile scrivere il file di snapshot `%s'."
  IDS_LOAD_SNAPSHOT_IMAGE         "Carica immagine snapshot"
  IDS_COULD_NOT_LOAD_PALETTE      "Non � possibile caricare la palette."
  IDS_LOAD_VICE_PALETTE_FILE      "Carica palette VICE"
  IDS_FULLSCREEN                  "Schermo intero/DirectX"
  IDS_CRT_EMULATION               "Emulazione CRT"
  IDS_RENDER_FILTER               "Filtro di render"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Impostazioni video"
  IDS_FILE_SYSTEM                 "File system"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Periferica IEC reale"
#endif
  IDS_RS232_DEVICE_I              "Dispositivo RS232 #%i"
  IDS_ATTACH_CRT_CART_IMAGE       "Seleziona immagine cartuccia CRT"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Seleziona immagine cartuccia di 8KB"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Seleziona immagine cartuccia di 16KB"
  IDS_ATTACH_AR_CART_IMAGE        "Seleziona immagine cartuccia Action Replay di 32KB"
  IDS_ATTACH_AR3_CART_IMAGE       "Seleziona immagine cartuccia Action Replay MK3 di 16KB"
  IDS_ATTACH_AR4_CART_IMAGE       "Seleziona immagine cartuccia Action Replay MK4 di 326KB"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Seleziona immagine cartuccia Stardos di 16KB"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Seleziona immagine cartuccia Atomic Power di 32KB"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Seleziona immagine cartuccia Epyx FastLoad di 8KB"
  IDS_ATTACH_IEEE488_CART_IMG     "Seleziona immagine cartuccia interfaccia IEEE"
  IDS_ATTACH_RETRO_R_CART_IMG     "Seleziona immagine cartuccia Retro Replay di 64KB"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Seleziona immagine cartuccia MMC Replay di 512kB"
  IDS_ATTACH_IDE64_CART_IMAGE     "Seleziona immagine cartuccia IDE64 di 64KB"
  IDS_ATTACH_SS4_CART_IMAGE       "Seleziona immagine cartuccia Super Snapshot V4 di 32KB"
  IDS_ATTACH_SS5_CART_IMAGE       "Seleziona immagine cartuccia Super Snapshot V5 di 64KB"
  IDS_ATTACH_STB_CART_IMAGE       "Seleziona immagine cartuccia Structured Basic"
  IDS_SELECT_CARTRIDGE_IMAGE      "Seleziona file cartuccia"
  IDS_MODEL                       "Modello"
  IDS_DRIVE_SETTINGS              "Impostazioni drive"
  IDS_SELECT_START_SNAP_EVENT     "Seleziona snapshot iniziale per la cronologia degli eventi"
  IDS_SELECT_END_SNAP_EVENT       "Seleziona snapshot finale per la cronologia degli eventi"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Versione %s *INSTABILE* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Versione %s rev %s *INSTABILE* (%s)"
#else
  IDS_VERSION_S                   "Versione %s (%s)"
  IDS_VERSION_S_REV_S             "Versione %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "Collaboratori"
  IDS_WHO_MADE_WHAT               "Chi ha fatto cosa?"
  IDS_LICENSE                     "Licenza"
  IDS_NO_WARRANTY                 "Nessuna garanzia!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE � distribuito SENZA NESSUNA GARANZIA!"
  IDS_PRESS_KEY_NORTHWEST         "Permi il tasto per nord ovest"
  IDS_PRESS_KEY_NORTH             "Premi il tasto per nord"
  IDS_PRESS_KEY_NORTHEAST         "Premi il tasto per nord est"
  IDS_PRESS_KEY_EAST              "Premi il tasto per est"
  IDS_PRESS_KEY_SOUTHEAST         "Premi il tasto per sud est"
  IDS_PRESS_KEY_SOUTH             "Premi il tasto per sud"
  IDS_PRESS_KEY_SOUTHWEST         "Premi il tasto per sud ovest"
  IDS_PRESS_KEY_WEST              "Premi il tasto per ovest"
  IDS_PRESS_KEY_FIRE              "Premi il tasto per il fuoco"
  IDS_NO_USERPORT_ADAPTER         "Nessun adattatore joystick su userport"
  IDS_CGA_USERPORT_ADAPTER        "Adattatore joystick CGA su userport"
  IDS_PET_USERPORT_ADAPTER        "Adattatore joystick PET su userport"
  IDS_HUMMER_USERPORT_ADAPTER     "Adattatore joystick HUMMER su userport"
  IDS_OEM_USERPORT_ADAPTER        "Adattatore joystick OEM su userport"
  IDS_HIT_USERPORT_ADAPTER        "Adattatore joystick HIT su userport"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Adattatore joystick Kingsoft su userport"
  IDS_STARBYTE_USERPORT_ADAPTER   "Adattatore joystick Starbyte su userport "
  IDS_NO_SIDCART_JOY              "Disattiva joystick su cartuccia SID"
  IDS_SIDCART_JOY                 "Attiva joystick su cartuccia SID"
  IDS_NUMPAD_AND_RCTRL            "Tastierino numerico + Ctrl destro"
  IDS_KEYSET_A                    "Keyset A"
  IDS_KEYSET_B                    "Keyset B"
  IDS_ALL_BUTTONS_AS_FIRE         "Tutti i pulsanti usati come fuoco"
  IDS_NUMERIC_SEE_ABOVE           "numerico (vedi sopra)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Pulsante mancante - Fuoco automatico disabilitato"
  IDS_ALL_FILES_FILTER            "Tutti i file (*.*)"
  IDS_PALETTE_FILES_FILTER        "Palette VICE (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "Snapshot (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "File CBM (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "File IDE64(*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Immagini disco (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Immagini cassetta (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "File compressi (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "Immagini cartucce CRT (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Immagini cartuccia (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "Flip list (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "ROM set (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "Archivi ROM set (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "Mappe tastiera (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "File emulatore Commodore (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flessibile"
  IDS_ADJUSTING                   "Adattabile"
  IDS_EXACT                       "Esatta"
  IDS_SOUND_DRIVER_DIRECTX        "Driver audio: DirectX"
  IDS_SOUND_DRIVER_WMM            "Driver sonoro: WMM"
  IDS_SYSTEM                      "Sistema"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "File multimediali (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Configura Keyset A"
  IDS_CONFIGURE_KEYSET_B          "Configura Keyset B"
  IDS_SAVE_MEDIA_IMAGE            "Salva file multimediale"
  IDS_S_AT_D_SPEED                "velocit� %s al %d%%, %d fps%s"
  IDS_TAPE                        "Cassetta:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Registrazione\n%02d:%02d"
  IDS_PLAYBACK                    "Riproduzione\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Sconosciuto"
  IDS_P_NUMBER                    "<numero>"
  IDS_SET_INPUT_JOYSTICK_1        "Imposta il dispositivo di input per il joystick 1"
  IDS_SET_INPUT_JOYSTICK_2        "Imposta il dispositivo di input per il joystick 2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Imposta il dispositivo di input per il joystick supplementare #1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Imposta il dispositivo di input per il joystick supplementare #2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Salva impostazioni in uscita"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Non salvare impostazioni in uscita"
  IDS_CONFIRM_QUIT_VICE           "Conferma l'uscita da VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Never confirm quitting VICE"
  IDS_USE_ALL_CPU_SMP             "Usa tutte le CPU sui sistemi SMP"
  IDS_USE_FIRST_CPU_SMP           "Usa solo la prima CPU sui sistemi SMP"
  IDS_START_VICE_FULLSCREEN_MODE  "Avvia VICE a schermo intero"
  IDS_DISABLE_DX9                 "Disattiva driver video DirectX9"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Si � verificato un errore imprevisto. E' stato ricevuto il segnale %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Si � verificato un errore imprevisto. E' stato ricevuto il segnale %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Inattivo"
  IDS_SERVER_LISTENING            "Server in ascolto"
  IDS_CONNECTED_SERVER            "Server connesso"
  IDS_CONNECTED_CLIENT            "Client connesso"
  IDS_INVALID_PORT_NUMBER         "Numero di porta non valido"
  IDS_ERROR_STARTING_SERVER       "Si � verificato un errore all'avvio del server."
  IDS_ERROR_CONNECTING_CLIENT     "Si � verificato un errore durante il collegamento col client."
#endif
  IDS_SOUND_RECORDING_STARTED     "Registrazione audio avviata..."
  IDS_SOUND_RECORDING_STOPPED     "Registrazione audio interrotta..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Annulla"
  IDS_NONE                        "Nessuno"
  IDS_BROWSE                      "Sfoglia..."
  IDS_SPECIFY_MIDI_IN             "Specifica il dispositivo MIDI-In"
  IDS_SPECIFY_MIDI_OUT            "Specifica il dispositivo MIDI-Out"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Errore durante il salvataggio del file crt EasyFlash"
  IDS_NO_EASYFLASH_CART_INSERTED  "Nessuna cartuccia EasyFlash inserita"
  IDS_DATASETTE_CAPTION           "Impostazioni registratore"
  IDS_DATASETTE_RESET_WITH_CPU    "Reset del registratore al reset della CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Velocit� del motore durante la lettura"
  IDS_DATASETTE_DELAY_TRIGGER     "ciclo/i addizionali di ritardo per ogni trigger"
  IDS_DATASETTE_DELAY_AT_ZERO     "Ritardo del gap di zero del registratore"
  IDS_TOGGLE_USEIECDEVICE         "Usa periferica IEC"
  IDS_SELECTDISK                  "Immagine disco"
  IDS_SELECTDIR                   "Directory"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Periferica IEC reale"
#endif
  IDS_SELECTNONE                  "Nessuno"
  IDS_AUTOSTART                   "Avvio automatico"
  IDS_BROWSEDIR                   "Sfoglia..."
  IDS_TOGGLE_ATTACH_READONLY      "Seleziona in sola lettura"
  IDS_TOGGLE_READP00              "Leggi file P00"
  IDS_TOGGLE_WRITEP00             "Scrivi file P00"
  IDS_TOGGLE_HIDENONP00           "Nascondi i file non P00"
  IDS_JOYSTICK_CAPTION            "Impostazioni joystick"
  IDS_JOYSTICK_IN_PORT_1          "Joystick nella porta #1"
  IDS_SELECT_FIRE_BUTTON          "Seleziona pulsante di fuoco"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Impostazioni fuoco automatico"
  IDS_AUTOFIRE_SPEED              "Velocit� autofire (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick nella porta #2"
  IDS_JOY_CONFIG_A                "Configura Keyset A"
  IDS_JOY_CONFIG_B                "Configura Keyset B"
  IDS_JOY_CALIBRATE               "Calibra Joystick"
  IDS_EXTRA_JOYSTICK_CAPTION      "Impostazioni joystick supplementari"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick nella porta supplementare #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick nella porta supplementare #2"
  IDS_KEYSET_SW                   "Sud ovest"
  IDS_KEYSET_S                    "Sud"
  IDS_KEYSET_SE                   "Sud Est"
  IDS_KEYSET_W                    "Ovest"
  IDS_KEYSET_E                    "Est"
  IDS_KEYSET_NW                   "Nord Ovest"
  IDS_KEYSET_N                    "Nord"
  IDS_KEYSET_NE                   "Nord Est"
  IDS_KEYSET_FIRE                 "Pulsante di Fuoco"
  IDS_SOUND_CAPTION               "Configura impostazioni scheda audio"
  IDS_SOUND_DIRECTX               "Driver DirectX"
  IDS_SOUND_WMM                   "Driver WMM"
  IDS_SOUND_OUTPUT_MODE           "Modalit� di uscita audio"
  IDS_SOUND_SAMPLE_FREQUENCY      "Frequenza di campionamento :"
  IDS_SOUND_BUFFER_SIZE           "Dimensione buffer audio :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Dimensione frammento audio :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Molto piccolo"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Piccolo"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Medio"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Grande"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Molto grande"
  IDS_SOUND_SYNCH_METHOD          "Metodo di sincronizzazione :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Salva immagini dischi attualmente selezionati"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Salva immagini ROM attualmente caricate"
  IDS_FULLSCREEN_DRIVER           "Driver:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Profondit�:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Risoluzione:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Frequenza di aggiornamento:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "Sincronizzazione VBLANK"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Visualizza su superficie primaria DX"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Mantieni proporzioni video (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Proporzioni video reali"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Il valore %.3f per %s � fuori dai limiti, uso %.3f al suo posto"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Il valore %d per %s � fuori dai limiti, uso %d al suo posto"
  IDS_AUDIO_LEAK                  "Audio leak"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Sfumatura (0..2)"
  IDS_COLORS_SATURATION           "Saturazione (0..2)"
  IDS_COLORS_CONTRAST             "Contrasto (0..2)"
  IDS_COLORS_BRIGHTNESS           "Luminosit� (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Ombra scanline (0..1)"
  IDS_CRT_BLUR                    "Sfuocatura (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Fase linee dispari (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Offset linee dispari (0..2)"
  IDS_VICII_PALETTE               "Palette VICII"
  IDS_VIC_PALETTE                 "Palette VIC"
  IDS_CRTC_PALETTE                "Palette CRTC"
  IDS_VDC_PALETTE                 "Palette VDC"
  IDS_TED_PALETTE                 "Palette TED"
  IDS_VICII_COLORS                "Colori VICII"
  IDS_VIC_COLORS                  "Colori VIC"
  IDS_CRTC_COLORS                 "Colori CRTC"
  IDS_VDC_COLORS                  "Colori VDC"
  IDS_TED_COLORS                  "Colori TED"
  IDS_VICII_CRT_EMULATION         "Emulazione CRT VICII"
  IDS_VIC_CRT_EMULATION           "Emulazione CRT VIC"
  IDS_CRTC_CRT_EMULATION          "Emulazione CRT CRTC"
  IDS_VDC_CRT_EMULATION           "Emulazione CRT VDC"
  IDS_TED_CRT_EMULATION           "Emulazione CRT TED"
  IDS_VICII_RENDER_FILTER         "Filtro di render VICII"
  IDS_VIC_RENDER_FILTER           "Filtro di render IVC"
  IDS_CRTC_RENDER_FILTER          "Filtro di render CRTC"
  IDS_VDC_RENDER_FILTER           "Filtro di render VDC"
  IDS_TED_RENDER_FILTER           "Filtro di render TED"
  IDS_VICII_AUDIO_LEAK            "Audio leak VICII "
  IDS_VIC_AUDIO_LEAK              "Audio leak VIC"
  IDS_CRTC_AUDIO_LEAK             "Audio leak CRTC"
  IDS_VDC_AUDIO_LEAK              "Audio leak VDC"
  IDS_TED_AUDIO_LEAK              "Audio leak TED "
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Palette esterna:"
  IDS_RAM_CAPTION                 "Impostazioni RAM"
  IDS_RAM_INIT_AT_POWERUP         "Inizializzazione all'accensione"
  IDS_RAM_VALUE_FIRST_BYTE        "Valore del primo byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Lunghezza dei valori costanti"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Lunghezza dei pattern costanti"
  IDS_PRINTER_EMULATION           "Emulazione della stampante"
  IDS_PRINTER_FORMFEED            "Invia Formfeed"
  IDS_FILESYSTEM_PRINTER          "Stampante su file system"
  IDS_PRINTER_DRVR                "Driver di stampa"
  IDS_OUTPUT                      "Output"
  IDS_OUTPUT_TO_FILE              "Output su file #"
  IDS_OUTPUT_FILE1_NAME           "Nome del file di output #1"
  IDS_OUTPUT_FILE2_NAME           "Nome del file di output #2"
  IDS_OUTPUT_FILE3_NAME           "Nome del file di output #3"
  IDS_ROMSET_SELECT_ARCHIVE       "Archivio ROM set"
  IDS_ROMSET_ARCHIVE_LOAD         "Carica archivio"
  IDS_ROMSET_ARCHIVE_SAVE         "Salva archivio"
  IDS_ROMSET_CONFIGURATION        "Configurazione"
  IDS_ROMSET_ARCHIVE_APPLY        "Applica"
  IDS_ROMSET_ARCHIVE_NEW          "Nuovo"
  IDS_ROMSET_ARCHIVE_DELETE       "Cancella"
  IDS_ROMSET_SELECT_FILE          "File romset"
  IDS_ROMSET_FILE_LOAD            "Carica romset"
  IDS_ROMSET_FILE_SAVE            "Salva romset"
  IDS_CUSTOM_SPEED_CAPTION        "Velocit� personalizzata"
  IDS_ENTER_CUSTOM_SPEED          "Inserire velocit� personalizzata [%]"
  IDS_NEW_CONFIGURATION           "Nuova configurazione"
  IDS_ENTER_CONFIGURATION_NAME    "Inserire il nome della configurazione"
  IDS_RS232_CAPTION               "Impostazioni RS232"
  IDS_RS232_DEV_1                 "Dispositivo RS232 #1"
  IDS_RS232_DEV_2                 "Dispositivo RS232 #2"
  IDS_RS232_DEV_3                 "Dispositivo RS232 #3"
  IDS_RS232_DEV_4                 "Dispositivo RS232 #4"
  IDS_NETWORK_CAPTION             "Impostazioni Netplay"
  IDS_CURRENT_MODE                "Modalit� attuale"
  IDS_SERVER_BIND                 "Server Bind"
  IDS_TCP_PORT                    "Porta TCP"
  IDS_NETWORK_SERVER              "Avvia server"
  IDS_NETWORK_CLIENT              "Connetti a"
  IDS_NETWORK_DISCONNECT          "Disconnetti"
  IDS_CONTROL                     "Controllo"
  IDS_SERVER                      "Server"
  IDS_CLIENT                      "Client"
  IDS_KEYBOARD                    "Tastiera"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Dispositivi"
  IDS_SETTINGS                    "Impostazioni"
  IDS_TOGGLE_CONSOLE_APPEND       "Accoda i log al file esistente"
  IDS_IMAGE_CONTENTS              "Contenuti immagine"
  IDS_NEW_IMAGE                   "Nuova immagine"
  IDS_NAME                        "Nome"
  IDS_ID                          "ID"
  IDS_TYPE                        "Tipo"
  IDS_BLANK_IMAGE                 "Crea immagine"
  IDS_NEW_TAP_IMAGE               "Nuova immagine TAP"
  IDS_SAVE                        "Salva"
  IDS_SELECT_DRIVER               "Seleziona Driver"
  IDS_FFMPEG_SETTINGS             "Impostazioni FFMPEG"
  IDS_FORMAT                      "Formato"
  IDS_AUDIO_CODEC                 "Audio codec"
  IDS_BITRATE                     "bitrate"
  IDS_VIDEO_CODEC                 "Video codec"
  IDS_SOUND_RECORD_CAPTION        "Impostazioni registrazione audio"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Formato registrazione audio"
  IDS_SOUND_RECORD_FILE_LABEL     "File registrazione audio"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Character"
  IDS_COMPUTER_RESOURCES_CAPTION  "Risorse del computer"
  IDS_COMPUTER_RESOURCES          "Risorse del computer salvate nel rom set"
  IDS_DRIVE_RESOURCES_CAPTION     "Risorse dei drive"
  IDS_DRIVE_RESOURCES             "Risorse del drive salvate nel rom set"
  IDS_SYMBOLIC                    "Simbolica"
  IDS_POSITIONAL                  "Posizionale"
  IDS_DUMP_KEYSET                 "Scrivi keyset"
  IDS_DUMP_SHORTCUTS              "Stampa scorciatoie"
  IDS_SYMBOLIC_US                 "Simbolica US"
  IDS_SYMBOLIC_DE                 "Simbolica GER"
  IDS_GR_SYM                      "Gr Sim."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sim."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "TED Sim."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "Memoria"
  IDS_DRIVE_TYPE                  "Tipo drive"
  IDS_40_TRACK_HANDLING           "Gestione 40 tracce"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Mai"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Chiedi all'accesso"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "All'accesso"
  IDS_IDLE_METHOD                 "Rileva inattivit�"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Rileva inattivit�"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Salta cicli"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Cavo parallelo"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Espasione del drive"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Memoria"
  IDS_SID_GENGROUP1               "Modello SID"
  IDS_SID_FILTERS                 "Filtri SID"
  IDS_MP_FILE                     "File"
  IDS_MP_ATTACH_DISK_IMAGE        "Seleziona immagine disco"
  IDS_MP_DETACH_DISK_IMAGE        "Rimuovi immagine disco"
  IDS_MP_FLIP_LIST                "Flip list"
  IDS_MP_DATASETTE_CONTROL        "Comandi registratore"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Seleziona immagine cartuccia..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Modalit�"
#endif
  IDS_MP_EDIT                     "Modifica"
  IDS_MP_SNAPSHOT                 "Snapshot"
  IDS_MP_RECORDING_START_MODE     "Modalit� di avvio registrazione"
  IDS_MP_OPTIONS                  "Opzioni"
  IDS_MP_REFRESH_RATE             "Frequenza di aggiornamento"
  IDS_MP_MAXIMUM_SPEED            "Velocit� massima"
  IDS_MP_VIDEO_STANDARD           "Standard video"
  IDS_MP_DRIVE_SYNC_FACTOR        "Fattore di sincronizzazione del drive"
  IDS_MP_SETTINGS                 "Impostazioni"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Impostazioni cartuccia/IO"
  IDS_MP_LANGUAGE                 "Lingua"
  IDS_MP_HELP                     "Aiuto"
  IDS_MP_VIEW                     "Vista"
  IDS_MP_WINDOW                   "Finestra"
  IDS_MI_EXIT                     "Esci"
  IDS_MI_ABOUT                    "Informazioni su VICE..."
  IDS_MI_PAUSE                    "Pausa"
  IDS_MI_EDIT_COPY                "Copia"
  IDS_MI_EDIT_PASTE               "Incolla"
  IDS_MI_AUTOSTART                "Avvia automaticamente immagine disco/cassetta..."
  IDS_MI_RESET_HARD               "Hard"
  IDS_MI_RESET_SOFT               "Soft"
  IDS_MI_DRIVE8                   "Drive 8"
  IDS_MI_DRIVE9                   "Drive 9"
  IDS_MI_DRIVE10                  "Drive 10"
  IDS_MI_DRIVE11                  "Drive 11"
  IDS_MI_ATTACH_TAPE              "Seleziona immagine cassetta..."
  IDS_MI_DETACH_TAPE              "Rimuovi immagine cassetta"
  IDS_MI_DETACH_ALL               "Tutti"
  IDS_MI_TOGGLE_SOUND             "Riproduzione audio"
  IDS_MI_TOGGLE_DOUBLESIZE        "Dimensione doppia"
  IDS_MI_TOGGLE_DOUBLESCAN        "Scansione doppia"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Verticale doppia"
  IDS_MI_DRIVE_TRUE_EMULATION     "Attiva emulazione hardware dei drive"
  IDS_MI_DRIVE_SOUND_EMULATION    "Emulazione suoni del drive"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Emulazione hardware dei drive all'avvio automatico"
  IDS_MI_TOGGLE_VIDEOCACHE        "Cache video"
  IDS_MI_DRIVE_SETTINGS           "Impostazioni drive..."
  IDS_MI_CART_SMART_ATTACH        "Immagine Smart-attach..."
  IDS_MI_CART_ATTACH_CRT          "Immagine CRT..."
  IDS_MI_CART_ATTACH_8KB          "Immagine generica di 8KB..."
  IDS_MI_CART_ATTACH_16KB         "Immagine generica di 16KB..."
  IDS_MI_CART_ATTACH_AR           "Immagine Action Replay..."
  IDS_MI_CART_ATTACH_AR3          "Immagine Action Replay MK3..."
  IDS_MI_CART_ATTACH_AR4          "Immagine Action Replay MK4..."
  IDS_MI_CART_ATTACH_STARDOS      "Immagine Stardos..."
  IDS_MI_CART_ATTACH_AT           "Immagine Atomic Power..."
  IDS_MI_CART_ATTACH_EPYX         "Immagine Epyx FastLoad..."
  IDS_MI_CART_ATTACH_IEEE488      "Immagine interfaccia IEEE 488..."
  IDS_MI_CART_ATTACH_RR           "Immagine Retro Replay..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "Immagine MMC Replay..."
  IDS_MI_CART_ATTACH_IDE64        "Immagine interfaccia IDE64..."
  IDS_MI_CART_ATTACH_SS4          "Immagine Super Snapshot V4..."
  IDS_MI_CART_ATTACH_SS5          "Immagine Super Snapshot V5..."
  IDS_MI_CART_ATTACH_STB          "Immagine Structured BASIC..."
  IDS_MI_FLIP_ADD                 "Aggiungi immagine attuale (Unit� 8)"
  IDS_MI_FLIP_REMOVE              "Rimuovi immagine attuale (Unit� 8)"
  IDS_MI_FLIP_NEXT                "Seleziona immagine successiva (Unit� 8)"
  IDS_MI_FLIP_PREVIOUS            "Seleziona immagine precedente (Unit� 8)"
  IDS_MI_FLIP_LOAD                "Carica file fliplist"
  IDS_MI_FLIP_SAVE                "Salva file fliplist"
  IDS_MI_DATASETTE_STOP           "Stop"
  IDS_MI_DATASETTE_START          "Avvia"
  IDS_MI_DATASETTE_FORWARD        "Avanti"
  IDS_MI_DATASETTE_REWIND         "Indietro"
  IDS_MI_DATASETTE_RECORD         "Registra"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Reset contantore"
  IDS_MI_CART_SET_DEFAULT         "Imposta la cartuccia come predefinita"
  IDS_MI_TOGGLE_CART_RESET        "Reset al cambio di cartuccia"
  IDS_MI_CART_DETACH              "Rimuovi le immagini delle cartucce"
  IDS_MI_CART_FREEZE              "Freeze cartuccia"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normale"
  IDS_MI_DEBUG_MODE_SMALL         "Piccolo"
  IDS_MI_DEBUG_MODE_HISTORY       "Cronologia"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Autoplay Cronologia"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Traccia della CPU principale"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Traccia della CPU del drive0"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Traccia della CPU del drive1"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Carica immagine snapshot..."
  IDS_MI_SNAPSHOT_SAVE            "Salva immagine snapshot..."
  IDS_MI_LOADQUICK                "Carica immagine dello snapshot"
  IDS_MI_SAVEQUICK                "Salva immagine dello snapshot"
  IDS_MI_EVENT_TOGGLE_RECORD      "Avvia/termina registrazione cronologia"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Avvia/termina riproduzione cronologia"
  IDS_MI_EVENT_SETMILESTONE       "Imposta segnalibro"
  IDS_MI_EVENT_RESETMILESTONE     "Vai al segnalibro"
  IDS_MI_EVENT_START_MODE_SAVE    "Salva nuovo snapshot"
  IDS_MI_EVENT_START_MODE_LOAD    "Carica snapshot esistente"
  IDS_MI_EVENT_START_MODE_RESET   "Avvia con reset"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Sovrascrivi riproduzione"
  IDS_MI_EVENT_DIRECTORY          "Seleziona file/directory della cronologia"
  IDS_MI_MEDIAFILE                "Salva/arresta file multimediale..."
  IDS_MI_SOUND_RECORD_START       "Registra audio su file..."
  IDS_MI_SOUND_RECORD_STOP        "Interrompi registrazione audio"
  IDS_MI_REFRESH_RATE_AUTO        "Auto"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Nessun limite"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Personalizzato"
  IDS_MI_TOGGLE_WARP_MODE         "Modalit� turbo"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Sempre in primo piano"
  IDS_MI_TOGGLE_DX9DISABLE        "Disattiva driver video DirectX9"
  IDS_MI_SWAP_JOYSTICK            "Scambia joystick"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Scambia joystick su userport"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Consenti direzioni opposte"
  IDS_MI_JOYKEYS_TOGGLE           "Attiva tasti joystick"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Attiva periferiche virtuali"
  IDS_MI_MOUSE                    "Cattura eventi mouse"
  IDS_MI_C64MODEL_SETTINGS        "Impostazioni modello C64..."
  IDS_MI_AUTOSTART_SETTINGS       "Impostazioni avvio automatico..."
  IDS_MI_VIDEO_SETTINGS           "Impostazioni video..."
  IDS_MI_DEVICEMANAGER            "Impostazioni periferiche..."
  IDS_MI_JOY_SETTINGS             "Impostazioni joystick..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Impostazioni joystick su Userport..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Impostazioni joystick su Sidcart..."
  IDS_MI_KEYBOARD_SETTINGS        "Impostazioni tastiera..."
  IDS_MI_SOUND_SETTINGS           "Impostazioni audio..."
  IDS_MI_ROM_SETTINGS             "Impostazioni ROM..."
  IDS_MI_RAM_SETTINGS             "Impostazioni RAM..."
  IDS_MI_DATASETTE_SETTINGS       "Impostazioni registratore..."
  IDS_MI_VICII_SETTINGS           "Impostazioni VIC-II..."
  IDS_MI_MOUSE_SETTINGS           "Impostazioni mouse..."
  IDS_MI_SID_SETTINGS             "Impostazioni SID..."
  IDS_MI_RS232_SETTINGS           "Impostazioni RS232..."
  IDS_MI_REU_SETTINGS             "Impostazioni REU..."
  IDS_MI_GEORAM_SETTINGS          "Impostazioni GEO-RAM..."
  IDS_MI_RAMCART_SETTINGS         "Impostazioni RamCart ..."
  IDS_MI_DQBB_SETTINGS            "Impostazioni Double Quick Brown Box..."
  IDS_MI_EXPERT_SETTINGS          "Impostazioni Expert Cartridge..."
  IDS_MI_ISEPIC_SETTINGS          "Impostazioni ISEPIC..."
  IDS_MI_MMC64_SETTINGS           "Impostazioni MMC64..."
  IDS_MI_MMCREPLAY_SETTINGS       "Impostazioni MMC Replay..."
  IDS_MI_RR_SETTINGS              "Impostazioni Retro Replay..."
  IDS_MI_MAGICVOICE_SETTINGS      "Impostazioni Magic Voice..."
  IDS_MI_MIDI_SETTINGS            "Impostazioni MIDI..."
  IDS_MI_DIGIMAX_SETTINGS         "Impostazioni DigiMAX..."
  IDS_MI_DS12C887RTC_SETTINGS     "Impostazioni DS12C887 RTC..."
  IDS_MI_LIGHTPEN_SETTINGS        "Impostazioni penna ottica..."
  IDS_MI_IDE64_SETTINGS           "Impostazioni IDE64..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Impostazioni Ethernet..."
#endif
  IDS_MI_ACIA_SETTINGS            "Impostazioni ACIA..."
  IDS_MI_RS232USER_SETTINGS       "Impostazioni RS232 su userport..."
  IDS_MI_EASYFLASH_SETTINGS       "Impostazioni EasyFlash..."
  IDS_MI_SFX_SE_SETTINGS          "Impostazioni SFX Sound Expander..."
  IDS_MI_TOGGLE_SFX_SS            "Attiva cartuccia SFX Sound Sampler"
  IDS_MI_TOGGLE_USERPORT_RTC      "Attiva espansione RTC su Userport"
  IDS_MI_SETTINGS_SAVE_FILE       "Salva impostazioni attuali sul file specificato"
  IDS_MI_SETTINGS_LOAD_FILE       "Carica impostazioni dal file specificato"
  IDS_MI_SETTINGS_SAVE            "Salva impostazioni attuali"
  IDS_MI_SETTINGS_LOAD            "Carica impostazioni salvate"
  IDS_MI_SETTINGS_DEFAULT         "Ripristina impostazioni originarie"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Salva impostazioni in uscita"
  IDS_MI_CONFIRM_ON_EXIT          "Conferma l'uscita da VICE"
  IDS_MI_LANG_EN                  "Inglese"
  IDS_MI_LANG_DA                  "Danese"
  IDS_MI_LANG_DE                  "Tedesco"
  IDS_MI_LANG_ES                  "Spagnolo"
  IDS_MI_LANG_FR                  "Francese"
  IDS_MI_LANG_HU                  "Ungherese"
  IDS_MI_LANG_IT                  "Italiano"
  IDS_MI_LANG_KO                  "Coreano"
  IDS_MI_LANG_NL                  "Olandese"
  IDS_MI_LANG_PL                  "Polacco"
  IDS_MI_LANG_RU                  "Russo"
  IDS_MI_LANG_SV                  "Svedese"
  IDS_MI_LANG_TR                  "Turco"
  IDS_MI_CMDLINE                  "Parametri della riga di comando"
  IDS_MI_CONTRIBUTORS             "Collaboratori"
  IDS_MI_LICENSE                  "Licenza"
  IDS_MI_WARRANTY                 "Nessuna garanzia!"
  IDS_MI_TOGGLE_FULLSCREEN        "Schermo intero"
  IDS_MI_SIDCART_SETTINGS         "Impostazioni cartuccia SID..."
  IDS_MI_MON_OPEN                 "Apri"
  IDS_MI_MON_SAVE                 "Salva"
  IDS_MI_MON_PRINT                "Stampa"
  IDS_MI_MON_EXIT                 "Esci       Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Interrompi Debug"
  IDS_MI_MON_STOP_EXEC            "Interrompi Esecuzione"
  IDS_MI_MON_STEP_INTO            "Esegui istruzione"
  IDS_MI_MON_STEP_OVER            "Esegui istruzione/funzione"
  IDS_MI_MON_SKIP_RETURN          "Esegui fino al ritorno"
  IDS_MI_MON_GOTO_CURSOR          "Vai al cursore"
  IDS_MI_MON_EVAL                 "Valutazione"
  IDS_MI_MON_CURRENT              "Istruzione corrente"
  IDS_MI_MON_WND_EVAL             "Finestra di valutazione"
  IDS_MI_MON_WND_REG              "Finestra dei registri"
  IDS_MI_MON_WND_MEM              "Finestra di memoria"
  IDS_MI_MON_WND_DIS              "Finestra di disassemblaggio"
  IDS_MI_MON_WND_CONSOLE          "Finestra della console"
  IDS_MI_MON_COMPUTER             "Computer"
  IDS_MI_MON_DRIVE8               "Drive 8"
  IDS_MI_MON_DRIVE9               "Drive 9"
  IDS_MI_MON_CASCADE              "A cascata"
  IDS_MI_MON_TILE_VERT            "Affianca verticalmente"
  IDS_MI_MON_TILE_HORIZ           "Affianca orizzontalmente"
  IDS_MI_MON_ARRANGE_ICONS        "Disponi icone"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE ����!"
  IDS_VICE_INFORMATION            "VICE ����"
  IDS_VICE_QUESTION               "VICE Question"
  IDS_FFMPEG_DLL_MISMATCH         "Your ffmpeg dll version doesn't match."
  IDS_DIRECTDRAW_ERROR            "DirectDraw error"
  IDS_CANNOT_SAVE_SETTINGS        "Cannot save settings."
  IDS_CANNOT_LOAD_SETTINGS        "Cannot load settings."
  IDS_DEFAULT_SETTINGS_RESTORED   "Default settings restored."
  IDS_CANNOT_ATTACH_FILE          "Cannot attach specified file"
  IDS_START_MONITOR               "%s\n\nStart monitor? (No will reset, cancel will continue)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Extend image to 40-track format?"
  IDS_DETACHED_DEVICE_S           "Detached device %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Attached %s to device#%s"
  IDS_DETACHED_TAPE               "Detached tape"
  IDS_HISTORY_RECORDED_UNKNOWN    "History recorded with unknown release"
  IDS_HISTORY_RECORDED_VICE_S     "History recorded with VICE-%s"
  IDS_PAUSED                      "paused"
  IDS_FRAME_NUMBER                "������ #"
  IDS_RESUMED                     "���ư���"
  IDS_REALLY_EXIT                 "Do you really want to exit?\n\nAll the data present in the emulated RAM will be lost."
  IDS_TFE_PROBLEM                 "TFE/RR-Net support is not available on your system,\nthere is some important part missing. Please have a\nlook at the VICE knowledge base support page\n\n      http"
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net support"
  IDS_CANNOT_AUTOSTART_FILE       "Cannot autostart specified file."
  IDS_ATTACHED_TAPE_S             "Attached tape %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Settings saved successfully."
  IDS_SETTINGS_LOADED_SUCCESS     "������ ���������� �ҷ����� ����ϴ�"
  IDS_ATTACH_DISK_IMAGE           "��ũ �̹��� �ٿ��ֱ�"
  IDS_ATTACH_TAPE_IMAGE           "������ �̹��� �ٿ��ֱ�"
  IDS_AUTOSTART_IMAGE             "�ڵ� ���� ��ũ/������ �̹���"
  IDS_INVALID_CARTRIDGE           "īƮ���� �̹��� ���Ұ�"
  IDS_BAD_CARTRIDGE_CONFIG        "UI �� �߸��� īƮ������ �ֽ��ϴ�"
  IDS_INVALID_CARTRIDGE_IMAGE     "īƮ���� �̹��� ���Ұ�"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "�α� �ܼ� �ƿ�ǲ �̹���"
  IDS_LOG_FILES_TYPE              "VICE �ܼ� �α� ���� (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "�α� ����  '%s' �� ���� �����ϴ�."
  IDS_LOAD_FLIP_LIST_FILE         "�ø� ����Ʈ ���� �ҷ�����"
  IDS_CANNOT_READ_FLIP_LIST       "�ø� ����Ʈ ������ ������ �����ϴ�"
  IDS_SAVE_FLIP_LIST_FILE         "�ø� ����Ʈ ���� �����ϱ�"
  IDS_CANNOT_WRITE_FLIP_LIST      "�ø� ����Ʈ ������ ���� �����ϴ�"
  IDS_SELECT_KEYMAP_FILE          "Ű�� ���� ����"
  IDS_SAVE_KEYMAP_FILE            "Ű�u ���� ����"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Ű�� ������ ���� �����ϴ�"
  IDS_SAVE_CONFIG_FILE            "ȯ�漳�� ���� ����"
  IDS_LOAD_CONFIG_FILE            "ȯ�漳�� ���� �ҷ�����"
  IDS_MAPPING                     "��������"
  IDS_KEYBOARD_SETTINGS           "Ű���� ����"
  IDS_ATTACH                      "���̴�"
  IDS_PLEASE_ENTER_A_FILENAME     "�����̸��� ��������."
  IDS_OVERWRITE_EXISTING_IMAGE    "���� �̹����� ���� ���� �ұ��?"
  IDS_CANNOT_CREATE_IMAGE         "�̹��� ������ �����Ҽ� �����ϴ�!"
  IDS_COMMAND_LINE_OPTIONS        "Ŀ�ǵ� ���� �ɼ�"
  IDS_COMMAND_OPTIONS_AVAIL       "� Ŀ�ǵ� ���� �ɼ��� �����մϱ�?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "����̹��� ���õ��� �ʾҰų� ���õ� ����̹��� �������� �ʽ��ϴ�"
  IDS_CANT_WRITE_SCREENSHOT_S     "��ũ���� ���� `%s' �� ������ �����ϴ�"
  IDS_AUTOSTART_DISK_IMAGE        "�ڵ� ���� ��ũ �̹���"
  IDS_SELECT_FS_DIRECTORY         "���� �ý��� ���丮�� �����ϼ���"
  IDS_PRINTER_USERPORT            "������ ���� ��Ʈ"
  IDS_PRINTER_4                   "������4"
  IDS_PRINTER_5                   "������5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "����̺�8"
  IDS_DRIVE_9                     "����̺�9"
  IDS_DRIVE_10                    "����̺�10"
  IDS_DRIVE_11                    "����̺�11"
  IDS_PERIPHERAL_SETTINGS         "�ֺ���ġ ����"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "������ ������ ���� �����ϴ�."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "���Ǽ� ������ ������ �����ϴ�"
  IDS_LOAD_S_ROM_IMAGE            "%s ROM �̹��� �ҷ�����"
  IDS_SELECT_ROMSET_ARCHIVE       "�Ҽ� ��ī�̺� �� �����ϼ���"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "�Ҽ� ��ī�̺긦 �ҷ��ü� �����ϴ�!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "�Ҽ� ��ī�̺긦 �����Ҽ� �����ϴ�!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "�Ҽ� ������ �ҷ��ü� �����ϴ�!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "�Ҽ� ������ �����Ҽ� �����ϴ�!"
  IDS_SELECT_ROMSET_FILE          "�Ҽ� ������ �����ϼ���"
  IDS_ROMSET                      "�Ҽ�"
  IDS_COMPUTER                    "��ǻ��"
  IDS_DRIVE                       "����̺�"
  IDS_ROM_SETTINGS                "ROM ����"
  IDS_SAVE_SNAPSHOT_IMAGE         "������ �̹��� ����"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "������ ���� `%s' �� ���� �����ϴ�."
  IDS_LOAD_SNAPSHOT_IMAGE         "������ �̹��� �ҷ�����"
  IDS_COULD_NOT_LOAD_PALETTE      "Could not load palette file."
  IDS_LOAD_VICE_PALETTE_FILE      "Load VICE palette file"
  IDS_FULLSCREEN                  "��üȭ��/DirectX"
  IDS_CRT_EMULATION               "����� ���� �͹̳� ���ķ�����"
  IDS_RENDER_FILTER               "���� ����"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "���� ����"
  IDS_FILE_SYSTEM                 "���� �ý���"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "���� IEC ����̽�"
#endif
  IDS_RS232_DEVICE_I              "RS232 ����̽� %i"
  IDS_ATTACH_CRT_CART_IMAGE       "CRT īƮ���� �̹����� �ٿ������ÿ�"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "8kb īƮ���� �̹����� ���̼���"
  IDS_ATTACH_RAW_16KB_CART_IMG    "16kb īƮ���� �̹����� ���̼���"
  IDS_ATTACH_AR_CART_IMAGE        "Attach raw 32KB Action Replay cartridge image"
  IDS_ATTACH_AR3_CART_IMAGE       "Attach raw 16KB Action Replay MK3 cartridge image"
  IDS_ATTACH_AR4_CART_IMAGE       "Attach raw 32KB Action Replay MK4 cartridge image"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Attach raw 16KB Stardos cartridge image"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "32kb Atomic Power īƮ���� �̹����� ���̼���"
  IDS_ATTACH_EPYX_FL_CART_IMG     "8kb Epyx FastLoad īƮ���� �̹����� ���̼���"
  IDS_ATTACH_IEEE488_CART_IMG     "IEEE-488 �������̽� īƮ���� �̹����� �ٿ���������"
  IDS_ATTACH_RETRO_R_CART_IMG     "64KB Retro Replay īƮ���� �̹����� ���̼���"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "512KB MMC Replay īƮ���� �̹����� ���̼���"
  IDS_ATTACH_IDE64_CART_IMAGE     "64kb IDE64 īƮ���� �̹����� ���̼���"
  IDS_ATTACH_SS4_CART_IMAGE       "Attach raw 32KB Super Snapshot V4 cartridge image"
  IDS_ATTACH_SS5_CART_IMAGE       "64KB Super Snapshot V5 īƮ���� �̹����� ���̼���"
  IDS_ATTACH_STB_CART_IMAGE       "Attach raw Structured Basic cartridge image"
  IDS_SELECT_CARTRIDGE_IMAGE      "Select cartridge file"
  IDS_MODEL                       "��"
  IDS_DRIVE_SETTINGS              "����̺� ����"
  IDS_SELECT_START_SNAP_EVENT     "�̺�Ʈ �����丮 �������� ���� ���� �ϼ���"
  IDS_SELECT_END_SNAP_EVENT       "�̺�Ʈ �����丮 �������� ���� ���� �ϼ���"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "���� %s *�̿ϼ�* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "���� %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE ������"
  IDS_WHO_MADE_WHAT               "���� ������ ���������?"
  IDS_LICENSE                     "����"
  IDS_NO_WARRANTY                 "����Ƽ �����ϴ�"
  IDS_VICE_WITHOUT_WARRANTY       "VICE �� ��� ����Ƽ ���� �����ǰ� �ֽ��ϴ�!"
  IDS_PRESS_KEY_NORTHWEST         "Press key for NorthWest"
  IDS_PRESS_KEY_NORTH             "Press key for North"
  IDS_PRESS_KEY_NORTHEAST         "Press key for NorthEast"
  IDS_PRESS_KEY_EAST              "Press key for East"
  IDS_PRESS_KEY_SOUTHEAST         "Press key for SouthEast"
  IDS_PRESS_KEY_SOUTH             "Press key for South"
  IDS_PRESS_KEY_SOUTHWEST         "Press key for SouthWest"
  IDS_PRESS_KEY_WEST              "Press key for West"
  IDS_PRESS_KEY_FIRE              "Press key for Fire"
  IDS_NO_USERPORT_ADAPTER         "������Ʈ ���� �ƴ��Ͱ� �����ϴ�"
  IDS_CGA_USERPORT_ADAPTER        "CGA ������Ʈ ���� �ƴ���"
  IDS_PET_USERPORT_ADAPTER        "PET ������Ʈ ���� �ƴ���"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer ������Ʈ ���� �ƴ���"
  IDS_OEM_USERPORT_ADAPTER        "OEM ������Ʈ ���� �ƴ���"
  IDS_HIT_USERPORT_ADAPTER        "HIT ������Ʈ ���� �ƴ���"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft userport joy adapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte userport joy adapter"
  IDS_NO_SIDCART_JOY              "SID īƮ���� ���̽�ƽ ������� �ʱ�"
  IDS_SIDCART_JOY                 "SID īƮ���� ���̽�ƽ ����ϱ�"
  IDS_NUMPAD_AND_RCTRL            "Numpad + RCtrl"
  IDS_KEYSET_A                    "Ű��A"
  IDS_KEYSET_B                    "Ű��B"
  IDS_ALL_BUTTONS_AS_FIRE         "��� ��ư�� ���̾�� ���Ǿ����ϴ�"
  IDS_NUMERIC_SEE_ABOVE           "�� (���� ������)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "��ư�� �����ϴ� - �������̾� �����ϱ�"
  IDS_ALL_FILES_FILTER            "��� ���� (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE �ȷ�Ʈ ���� (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE ������ ���� (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 files (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk image files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "������ �̹��� ���� (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Zipped files (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT īƮ���� �̹��� ���� (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Raw cartridge image files (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE �ø� ����Ʈ ���� (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE �Ҽ� ���� (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE �Ҽ� ��ī�̺� (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE Ű�� ���� (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "�ڸ� ���ķ����� ���� (*.prg;*.p00)"
  IDS_FLEXIBLE                    "������"
  IDS_ADJUSTING                   "����"
  IDS_EXACT                       "��Ȯ��"
  IDS_SOUND_DRIVER_DIRECTX        "���� ����̹�: DirectX"
  IDS_SOUND_DRIVER_WMM            "���� ����̹�: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "�̵�� ���� (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kb"
  IDS_CONFIGURE_KEYSET_A          "Ű�� A �� ���� �ϼ���"
  IDS_CONFIGURE_KEYSET_B          "Ű�� B �� ���� �ϼ���"
  IDS_SAVE_MEDIA_IMAGE            "�̵�� ������ �����ϼ���"
  IDS_S_AT_D_SPEED                "%s �� %d%% ���ǵ�, %d fps%s"
  IDS_TAPE                        "������:"
  IDS_JOYSTICK_C                  "���̽�ƽ:"
  IDS_RECORDING                   "��ȭ��\n%02d:%02d"
  IDS_PLAYBACK                    "���\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "�˼�����"
  IDS_P_NUMBER                    "<����>"
  IDS_SET_INPUT_JOYSTICK_1        "��ǲ ����̽��� ���̽�ƽ #1 ���� ���� �ϼ���"
  IDS_SET_INPUT_JOYSTICK_2        "��ǲ ����̽��� ���̽�ƽ #2 ���� ���� �ϼ���"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "��ǲ ����̽��� ���� ���̽�ƽ #1 ���� ���� �ϼ���"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "��ǲ ����̽��� ���� ���̽�ƽ #2 ���� ���� �ϼ���"
  IDS_SAVE_SETTINGS_ON_EXIT       "����� ���� �����ϱ�"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "����� ���� ������ �������� �ʽ��ϴ�"
  IDS_CONFIRM_QUIT_VICE           "VICE Ȯ�� ����"
  IDS_NO_CONFIRM_QUIT_VICE        "VICE �� ���� ������ �ʽ��ϴ�"
  IDS_USE_ALL_CPU_SMP             "��� CPU �� SMP �ý��ۿ� ����ϼ�"
  IDS_USE_FIRST_CPU_SMP           "�ϳ��� CPU �� SMP �ý��ۿ� ���缼��"
  IDS_START_VICE_FULLSCREEN_MODE  "VICE ��üȭ�� ��带 ���� �մϴ�"
  IDS_DISABLE_DX9                 "DirectX9 ���� ����̹��� ������� �ʽ��ϴ�"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "An unexpected error occured. Received signal %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "An unexpected error occured. Received signal %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "���������ʴ�"
  IDS_SERVER_LISTENING            "���� ������"
  IDS_CONNECTED_SERVER            "����� ����"
  IDS_CONNECTED_CLIENT            "����� Ŭ���̾�Ʈ"
  IDS_INVALID_PORT_NUMBER         "���Ұ����� ��Ʈ �ѹ�"
  IDS_ERROR_STARTING_SERVER       "������ �����ϴ��� ������ �߻��߽��ϴ�"
  IDS_ERROR_CONNECTING_CLIENT     "ũ���̾�Ʈ�� ������ ������ �߻��߽��ϴ�"
#endif
  IDS_SOUND_RECORDING_STARTED     "���� ���ڵ��� �����߽��ϴ�..."
  IDS_SOUND_RECORDING_STOPPED     "���� ���ڵ� ����..."
  IDS_OK                          "ok"
  IDS_CANCEL                      "���"
  IDS_NONE                        "����"
  IDS_BROWSE                      "���콺..."
  IDS_SPECIFY_MIDI_IN             "�̵� �� ����̽��� �̸��� ���ϼ���"
  IDS_SPECIFY_MIDI_OUT            "�̴� �ƿ� ����̽��� �̸��� ���ϼ���"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "EasyFlash crt ���� ���� ������ �߻��߽��ϴ�"
  IDS_NO_EASYFLASH_CART_INSERTED  "EasyFlash īƮ���� �� ���Ե��� �ʾҽ��ϴ�"
  IDS_DATASETTE_CAPTION           "Datasette settings"
  IDS_DATASETTE_RESET_WITH_CPU    "����Ÿ�� �� CPU �� ���� �Ͻÿ�"
  IDS_DATASETTE_MOTOR_GROUP       "�б��� ������� �ӵ�"
  IDS_DATASETTE_DELAY_TRIGGER     "Ʈ���� ���� �ɸ��� ��ȯ �ֱ� "
  IDS_DATASETTE_DELAY_AT_ZERO     "����Ÿ�� �� ���� ������"
  IDS_TOGGLE_USEIECDEVICE         "IEC ����̽��� ����ϼ���"
  IDS_SELECTDISK                  "��ũ �̹���"
  IDS_SELECTDIR                   "���丮"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "���� IEC ����̽�"
#endif
  IDS_SELECTNONE                  "����"
  IDS_AUTOSTART                   "�ڵ�����"
  IDS_BROWSEDIR                   "���콺..."
  IDS_TOGGLE_ATTACH_READONLY      "Attach read only"
  IDS_TOGGLE_READP00              "P00 ���� �б�"
  IDS_TOGGLE_WRITEP00             "P00 ���� ����"
  IDS_TOGGLE_HIDENONP00           "Hide non-P00 files"
  IDS_JOYSTICK_CAPTION            "���̽�ƽ ����"
  IDS_JOYSTICK_IN_PORT_1          "1�� ��Ʈ ���̽�ƽ"
  IDS_SELECT_FIRE_BUTTON          "���̾� ��ư ����"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "�ڵ� ���̾� ��ư ����"
  IDS_AUTOFIRE_SPEED              "�������̾� �ӵ� (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "2�� ��Ʈ ���̽�ƽ"
  IDS_JOY_CONFIG_A                "Ű�� A �� ���� �ϼ���"
  IDS_JOY_CONFIG_B                "Ű�� B �� ���� �ϼ���"
  IDS_JOY_CALIBRATE               "Į���극��Ʈ ���̽�ƽ"
  IDS_EXTRA_JOYSTICK_CAPTION      "���� ���̽�ƽ ����"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "����Ʈ�� ��Ʈ #1 �� ���̽�ƽ"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "����Ʈ�� ��Ʈ #2 �� ���̽�ƽ"
  IDS_KEYSET_SW                   "����"
  IDS_KEYSET_S                    "��"
  IDS_KEYSET_SE                   "����"
  IDS_KEYSET_W                    "��"
  IDS_KEYSET_E                    "��"
  IDS_KEYSET_NW                   "�ϼ�"
  IDS_KEYSET_N                    "��"
  IDS_KEYSET_NE                   "�ϵ�"
  IDS_KEYSET_FIRE                 "���̾� ��ư"
  IDS_SOUND_CAPTION               "���� ����̽� ȯ�� ���� �ϱ�"
  IDS_SOUND_DIRECTX               "DirextX ����̹�"
  IDS_SOUND_WMM                   "WMM ����̹�"
  IDS_SOUND_OUTPUT_MODE           "Sound output mode"
  IDS_SOUND_SAMPLE_FREQUENCY      "���� ����Ʈ :"
  IDS_SOUND_BUFFER_SIZE           "���� ���� ������ :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "���� �����׸�Ʈ ������ :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "�۴�"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "�߰�"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "ū"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "����ȭ ��� :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "���� �پ��ִ� ��ũ �̹��� ����"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "���� �ҷ����� �� ROM �̹��� ����"
  IDS_FULLSCREEN_DRIVER           "����̹�:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "��Ʈ�ɵ�:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "�ػ�:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "�����:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK ����ȭ"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Render to DX Primary surface"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "ȭ������� �����Ͻÿ� (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "�� ȭ�����"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Value %.3f for %s is out of range, using %.3f instead"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Value %d for %s is out of range, using %d instead"
  IDS_AUDIO_LEAK                  "Audio leak"
  IDS_COLORS_GAMMA                "���� (0..4)"
  IDS_COLORS_TINT                 "ƾƮ (0..2)"
  IDS_COLORS_SATURATION           "��ȭ�� (0..2)"
  IDS_COLORS_CONTRAST             "���� (0..2)"
  IDS_COLORS_BRIGHTNESS           "��� (0..2)"
  IDS_CRT_SCANLINE_SHADE          "�ֻ缱 ������ (0..1)"
  IDS_CRT_BLUR                    "�帴�� (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Odd lines phase (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Ȧ�� ���� ������ (0..2)"
  IDS_VICII_PALETTE               "VICII �ȷ�Ʈ"
  IDS_VIC_PALETTE                 "VIC �ȷ�Ʈ"
  IDS_CRTC_PALETTE                "CRTC �ȷ�Ʈ"
  IDS_VDC_PALETTE                 "VDC �ȷ�Ʈ"
  IDS_TED_PALETTE                 "TED �ȷ�Ʈ"
  IDS_VICII_COLORS                "VICII Colors"
  IDS_VIC_COLORS                  "VIC Colors"
  IDS_CRTC_COLORS                 "CRTC Colors"
  IDS_VDC_COLORS                  "VDC Colors"
  IDS_TED_COLORS                  "TED Colors"
  IDS_VICII_CRT_EMULATION         "VICII CRT emulation"
  IDS_VIC_CRT_EMULATION           "VIC CRT emulation"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT emulation"
  IDS_VDC_CRT_EMULATION           "VDC CRT emulation"
  IDS_TED_CRT_EMULATION           "TED CRT emulation"
  IDS_VICII_RENDER_FILTER         "VICII Render filter"
  IDS_VIC_RENDER_FILTER           "VIC Render filter"
  IDS_CRTC_RENDER_FILTER          "CRTC Render filter"
  IDS_VDC_RENDER_FILTER           "VDC Render filter"
  IDS_TED_RENDER_FILTER           "TED Render filter"
  IDS_VICII_AUDIO_LEAK            "VICII Audio leak"
  IDS_VIC_AUDIO_LEAK              "VIC Audio leak"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audio leak"
  IDS_VDC_AUDIO_LEAK              "VDC Audio leak"
  IDS_TED_AUDIO_LEAK              "TED Audio leak"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "���� �ȷ�Ʈ:"
  IDS_RAM_CAPTION                 "RAM ����"
  IDS_RAM_INIT_AT_POWERUP         "������ ������ �ʱ�ȭ�� �մϴ�"
  IDS_RAM_VALUE_FIRST_BYTE        "Value of first byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Length of constant values"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Length of constant pattern"
  IDS_PRINTER_EMULATION           "����Ʈ ���ķ��̼�"
  IDS_PRINTER_FORMFEED            "�� �����ϴ�"
  IDS_FILESYSTEM_PRINTER          "���� �ý��� ������"
  IDS_PRINTER_DRVR                "������ ����̹�"
  IDS_OUTPUT                      "���"
  IDS_OUTPUT_TO_FILE              "���� # �� ���"
  IDS_OUTPUT_FILE1_NAME           "���� #1 �̸� ���"
  IDS_OUTPUT_FILE2_NAME           "���� #2 �̸� ���"
  IDS_OUTPUT_FILE3_NAME           "���� #3 �̸� ���"
  IDS_ROMSET_SELECT_ARCHIVE       "�Ҽ� ��ī�̺�"
  IDS_ROMSET_ARCHIVE_LOAD         "�ҷ����� ��ī�̺�"
  IDS_ROMSET_ARCHIVE_SAVE         "���� ��ī�̺�"
  IDS_ROMSET_CONFIGURATION        "�迭"
  IDS_ROMSET_ARCHIVE_APPLY        "����"
  IDS_ROMSET_ARCHIVE_NEW          "���ο�"
  IDS_ROMSET_ARCHIVE_DELETE       "����"
  IDS_ROMSET_SELECT_FILE          "�Ҽ� ����"
  IDS_ROMSET_FILE_LOAD            "�Ҽ� �ҷ�����"
  IDS_ROMSET_FILE_SAVE            "�Ҽ� �����ϱ�"
  IDS_CUSTOM_SPEED_CAPTION        "Ŀ���� �ӵ�"
  IDS_ENTER_CUSTOM_SPEED          "Ŀ���� �ӵ��� [%] ��������"
  IDS_NEW_CONFIGURATION           "���ο� ȯ�� ����"
  IDS_ENTER_CONFIGURATION_NAME    "ȯ�漳�� �̸��� ��������"
  IDS_RS232_CAPTION               "RS232 ����"
  IDS_RS232_DEV_1                 "RS232 ����̽� 1"
  IDS_RS232_DEV_2                 "RS232 ����̽� 2"
  IDS_RS232_DEV_3                 "RS232 ����̽� 3"
  IDS_RS232_DEV_4                 "RS232 ����̽� 4"
  IDS_NETWORK_CAPTION             "���÷��� ����"
  IDS_CURRENT_MODE                "���� ���"
  IDS_SERVER_BIND                 "���� ���ε�"
  IDS_TCP_PORT                    "TCP ��Ʈ"
  IDS_NETWORK_SERVER              "���� ����"
  IDS_NETWORK_CLIENT              "����"
  IDS_NETWORK_DISCONNECT          "������ ����"
  IDS_CONTROL                     "�����"
  IDS_SERVER                      "����"
  IDS_CLIENT                      "Ŭ���̾�Ʈ"
  IDS_KEYBOARD                    "Ű����"
  IDS_JOYSTICK_1                  "���̽�ƽ 1"
  IDS_JOYSTICK_2                  "���̽�ƽ 2"
  IDS_DEVICES                     "����̽�"
  IDS_SETTINGS                    "����"
  IDS_TOGGLE_CONSOLE_APPEND       "Append log to existing file"
  IDS_IMAGE_CONTENTS              "�̹��� ������"
  IDS_NEW_IMAGE                   "���ο� �̹���"
  IDS_NAME                        "�̸�"
  IDS_ID                          "ID"
  IDS_TYPE                        "����"
  IDS_BLANK_IMAGE                 "�̹��� ����"
  IDS_NEW_TAP_IMAGE               "���ο� TAP �̹���"
  IDS_SAVE                        "����"
  IDS_SELECT_DRIVER               "����̹� ����"
  IDS_FFMPEG_SETTINGS             "FFMPEG ����"
  IDS_FORMAT                      "���� ���"
  IDS_AUDIO_CODEC                 "����� �ڵ�"
  IDS_BITRATE                     "��Ʈ �ɵ�"
  IDS_VIDEO_CODEC                 "���� �ڵ�"
  IDS_SOUND_RECORD_CAPTION        "���� ���ڵ� ����"
  IDS_SOUND_RECORD_FORMAT_LABEL   "���� ���ڵ� ����"
  IDS_SOUND_RECORD_FILE_LABEL     "���� ���ڵ� ����"
  IDS_KERNAL                      "Ŀ��"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "�⺻"
  IDS_CHARACTER                   "�ɸ���"
  IDS_COMPUTER_RESOURCES_CAPTION  "��ǻ�� ���ҽ�"
  IDS_COMPUTER_RESOURCES          "��ǻ�� ���ҽ��� �Ҽ¿� ����"
  IDS_DRIVE_RESOURCES_CAPTION     "����̺� ���ҽ�"
  IDS_DRIVE_RESOURCES             "����̺� ���ҽ��� �Ҽ¿� ����"
  IDS_SYMBOLIC                    "��¡"
  IDS_POSITIONAL                  "��ġ����"
  IDS_DUMP_KEYSET                 "���� Ű��"
  IDS_DUMP_SHORTCUTS              "���� ���� ������"
  IDS_SYMBOLIC_US                 "�ɺ��� US"
  IDS_SYMBOLIC_DE                 "�ɺ��� DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "�޸�"
  IDS_DRIVE_TYPE                  "����̺� Ÿ��"
  IDS_40_TRACK_HANDLING           "40 Ʈ�� �ڵ帵"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "���� ���������ʱ�"
  IDS_SELECT_DRIVE_EXTEND_ASK     "�����ϴ°Ϳ� ���� ����"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "������ �����ϱ�"
  IDS_IDLE_METHOD                 "���"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Ʈ�� ���̵�"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "����Ŭ �Ѿ��"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "���� ĳ�̺�"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "����̺� Ȯ��"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "�޸�"
  IDS_SID_GENGROUP1               "SID ��"
  IDS_SID_FILTERS                 "SID ����"
  IDS_MP_FILE                     "����"
  IDS_MP_ATTACH_DISK_IMAGE        "��ũ �̹��� �ٿ��ֱ�"
  IDS_MP_DETACH_DISK_IMAGE        "��ũ �̹��� �����"
  IDS_MP_FLIP_LIST                "Flip list"
  IDS_MP_DATASETTE_CONTROL        "����Ÿ�� ĿƮ��"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "īƮ���� �̹��� ���̱�..."
  IDS_MP_RESET                    "����"
  IDS_MP_DEBUG                    "���"
#ifdef DEBUG
  IDS_MP_MODE                     "���"
#endif
  IDS_MP_EDIT                     "����"
  IDS_MP_SNAPSHOT                 "������"
  IDS_MP_RECORDING_START_MODE     "���ڵ� ���� ���"
  IDS_MP_OPTIONS                  "����"
  IDS_MP_REFRESH_RATE             "�����"
  IDS_MP_MAXIMUM_SPEED            "Maximum speed"
  IDS_MP_VIDEO_STANDARD           "ǥ�� ����"
  IDS_MP_DRIVE_SYNC_FACTOR        "Drive sync factor"
  IDS_MP_SETTINGS                 "����"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Cartridge/IO settings"
  IDS_MP_LANGUAGE                 "���"
  IDS_MP_HELP                     "����"
  IDS_MP_VIEW                     "����"
  IDS_MP_WINDOW                   "������"
  IDS_MI_EXIT                     "������"
  IDS_MI_ABOUT                    "���� VICE..."
  IDS_MI_PAUSE                    "�Ͻ�����"
  IDS_MI_EDIT_COPY                "����"
  IDS_MI_EDIT_PASTE               "�ٿ��ֱ�"
  IDS_MI_AUTOSTART                "�ڵ� ���� ��ũ/������ �̹���..."
  IDS_MI_RESET_HARD               "�ܴ���"
  IDS_MI_RESET_SOFT               "�ε巯��"
  IDS_MI_DRIVE8                   "����̺�8"
  IDS_MI_DRIVE9                   "����̺�9"
  IDS_MI_DRIVE10                  "����̺�10"
  IDS_MI_DRIVE11                  "����̺�11"
  IDS_MI_ATTACH_TAPE              "������ �̹��� �ٿ��ֱ�..."
  IDS_MI_DETACH_TAPE              "������ �̹��� �����"
  IDS_MI_DETACH_ALL               "����"
  IDS_MI_TOGGLE_SOUND             "�Ҹ� ���"
  IDS_MI_TOGGLE_DOUBLESIZE        "���� ������"
  IDS_MI_TOGGLE_DOUBLESCAN        "���� ��ĵ"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Double vertical"
  IDS_MI_DRIVE_TRUE_EMULATION     "Ʈ�� ����̺� ���ķ�����"
  IDS_MI_DRIVE_SOUND_EMULATION    "Drive sound emulation"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Handle True Drive Emulation on autostart"
  IDS_MI_TOGGLE_VIDEOCACHE        "���� ĳ��"
  IDS_MI_DRIVE_SETTINGS           "����̺� ����..."
  IDS_MI_CART_SMART_ATTACH        "Smart-attach image..."
  IDS_MI_CART_ATTACH_CRT          "CRT �̹���..."
  IDS_MI_CART_ATTACH_8KB          "Generic 8KB image..."
  IDS_MI_CART_ATTACH_16KB         "Generic 16KB image..."
  IDS_MI_CART_ATTACH_AR           "Action Replay �̹���..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 �̹���..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 �̹���..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos �̹���..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power �̹���..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad �̹���..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE-488 �������̽� �̹���..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay �̹���..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay �̹���..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 �������̽� �̹���..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 �̹���..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 �̹���..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC �̹���..."
  IDS_MI_FLIP_ADD                 "���� �̹��� (Unit 8) ���ϱ�"
  IDS_MI_FLIP_REMOVE              "���� �̹��� (Unit 8) �����ϱ�"
  IDS_MI_FLIP_NEXT                "���� �̹��� (Unit 8) ���̱�"
  IDS_MI_FLIP_PREVIOUS            "���� �̹��� (Unit 8) ���̱�"
  IDS_MI_FLIP_LOAD                "�ø� ����Ʈ ���� �ҷ�����"
  IDS_MI_FLIP_SAVE                "�ø� ����Ʈ ���� �����ϱ�"
  IDS_MI_DATASETTE_STOP           "����"
  IDS_MI_DATASETTE_START          "����"
  IDS_MI_DATASETTE_FORWARD        "��������"
  IDS_MI_DATASETTE_REWIND         "�ǰ���"
  IDS_MI_DATASETTE_RECORD         "��ȭ"
  IDS_MI_DATASETTE_RESET          "����"
  IDS_MI_DATASETTE_RESET_COUNTER  "���� ī����"
  IDS_MI_CART_SET_DEFAULT         "īƮ������ ����Ʈ �� �ϱ�"
  IDS_MI_TOGGLE_CART_RESET        "īƮ���� ���� ����"
  IDS_MI_CART_DETACH              "īƮ���� �̹��� ����"
  IDS_MI_CART_FREEZE              "īƮ���� ������"
  IDS_MI_MONITOR                  "�����"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "����"
  IDS_MI_DEBUG_MODE_SMALL         "�۴�"
  IDS_MI_DEBUG_MODE_HISTORY       "�����丮"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "�����丮 �����÷���"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "���� CPU Ʈ���̽�"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "����̺�0 CPU Ʈ���̽�"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "����̺�1 CPU Ʈ���̽�"
#endif
  IDS_MI_SNAPSHOT_LOAD            "������ �̹��� �ҷ�����..."
  IDS_MI_SNAPSHOT_SAVE            "������ �̹��� ����..."
  IDS_MI_LOADQUICK                "���� ������ �̹��� �ҷ�����"
  IDS_MI_SAVEQUICK                "���� ������ �̹��� �����ϱ�"
  IDS_MI_EVENT_TOGGLE_RECORD      "����/���� ���ڵ� �����丮"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "����/���� ��� �����丮"
  IDS_MI_EVENT_SETMILESTONE       "���ڵ� ���Ͻ��� ����"
  IDS_MI_EVENT_RESETMILESTONE     "���Ͻ��� ���� ���ư���"
  IDS_MI_EVENT_START_MODE_SAVE    "���ο� ������ ����"
  IDS_MI_EVENT_START_MODE_LOAD    "�����ϴ� ������ �ҷ�����"
  IDS_MI_EVENT_START_MODE_RESET   "�������� �����ϱ�"
  IDS_MI_EVENT_START_MODE_PLAYBCK "����� ���"
  IDS_MI_EVENT_DIRECTORY          "���� �����丮 ����/���丮"
  IDS_MI_MEDIAFILE                "����/���� �̵�� ����..."
  IDS_MI_SOUND_RECORD_START       "���ڵ� ���� �� ���Ϸ�..."
  IDS_MI_SOUND_RECORD_STOP        "���� ���ڵ� ����"
  IDS_MI_REFRESH_RATE_AUTO        "�ڵ�"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "�Ѱ����"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Ŀ����"
  IDS_MI_TOGGLE_WARP_MODE         "Warp mode"
  IDS_MI_TOGGLE_ALWAYSONTOP       "�׻� ����"
  IDS_MI_TOGGLE_DX9DISABLE        "DirectX9 ���� ����̹��� ������� �ʽ��ϴ�"
  IDS_MI_SWAP_JOYSTICK            "���̽�ƽ�� �ٲټ���"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "������Ʈ ���̽�ƽ�� �ٲټ���"
  IDS_MI_ALLOW_JOY_OPPOSITE       "�ݴ� ���� �㰡�ϱ�"
  IDS_MI_JOYKEYS_TOGGLE           "Enable Joy Keys"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "���� ����̽� Ʈ��"
  IDS_MI_MOUSE                    "�׷� ���콺 �̺�Ʈ"
  IDS_MI_C64MODEL_SETTINGS        "C64 �� ����..."
  IDS_MI_AUTOSTART_SETTINGS       "�ڵ����� ����..."
  IDS_MI_VIDEO_SETTINGS           "���� ����..."
  IDS_MI_DEVICEMANAGER            "�ֺ���ġ ����..."
  IDS_MI_JOY_SETTINGS             "���̽�ƽ ����..."
  IDS_MI_USERPORT_JOY_SETTINGS    "������Ʈ ���̽�ƽ ����..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sidcart ���̽�ƽ ����..."
  IDS_MI_KEYBOARD_SETTINGS        "Ű���� ����..."
  IDS_MI_SOUND_SETTINGS           "�Ҹ� ����..."
  IDS_MI_ROM_SETTINGS             "ROM ����..."
  IDS_MI_RAM_SETTINGS             "RAM ����..."
  IDS_MI_DATASETTE_SETTINGS       "Datasette settings..."
  IDS_MI_VICII_SETTINGS           "VIC-II ����..."
  IDS_MI_MOUSE_SETTINGS           "���콺 ����..."
  IDS_MI_SID_SETTINGS             "SID ����..."
  IDS_MI_RS232_SETTINGS           "RS232 ����..."
  IDS_MI_REU_SETTINGS             "REU ����..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM ����..."
  IDS_MI_RAMCART_SETTINGS         "RamCart ����..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box ����..."
  IDS_MI_EXPERT_SETTINGS          "Expert īƮ���� ����..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC ����..."
  IDS_MI_MMC64_SETTINGS           "MMC64 ����..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay ����..."
  IDS_MI_RR_SETTINGS              "Retro Replay settings..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice ����..."
  IDS_MI_MIDI_SETTINGS            "MIDI ����..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX ����..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC settings..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lightpen settings..."
  IDS_MI_IDE64_SETTINGS           "IDE64 ����..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "�̴��� ����..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA ����..."
  IDS_MI_RS232USER_SETTINGS       "RS232 ������Ʈ ����..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash ����..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander ����..."
  IDS_MI_TOGGLE_SFX_SS            "SFX Sound Sampler īƮ���� �� �۵���Ų��"
  IDS_MI_TOGGLE_USERPORT_RTC      "Enable the Userport RTC expansion"
  IDS_MI_SETTINGS_SAVE_FILE       "���� ���� �� ���õ� ���Ͽ� ���� �մϴ�"
  IDS_MI_SETTINGS_LOAD_FILE       "���õ� ���Ͽ��� ������ �ҷ��ɴϴ�"
  IDS_MI_SETTINGS_SAVE            "���� ���� ����"
  IDS_MI_SETTINGS_LOAD            "����� ���� �ҷ�����"
  IDS_MI_SETTINGS_DEFAULT         "���� �ʱ�ȭ"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "����� ���� �����ϱ�"
  IDS_MI_CONFIRM_ON_EXIT          "VICE Ȯ�� ����"
  IDS_MI_LANG_EN                  "����"
  IDS_MI_LANG_DA                  "����ũ��"
  IDS_MI_LANG_DE                  "���Ͼ�"
  IDS_MI_LANG_ES                  "Spanish"
  IDS_MI_LANG_FR                  "��������"
  IDS_MI_LANG_HU                  "�밡����"
  IDS_MI_LANG_IT                  "��Ż���ƾ�"
  IDS_MI_LANG_KO                  "�ѱ���"
  IDS_MI_LANG_NL                  "�״������"
  IDS_MI_LANG_PL                  "�������"
  IDS_MI_LANG_RU                  "���þƾ�"
  IDS_MI_LANG_SV                  "��������"
  IDS_MI_LANG_TR                  "��Ű��"
  IDS_MI_CMDLINE                  "Ŀ�ǵ� ���� �ɼ�"
  IDS_MI_CONTRIBUTORS             "������"
  IDS_MI_LICENSE                  "����"
  IDS_MI_WARRANTY                 "����Ƽ �����ϴ�"
  IDS_MI_TOGGLE_FULLSCREEN        "��üȭ��"
  IDS_MI_SIDCART_SETTINGS         "SID īƮ ����..."
  IDS_MI_MON_OPEN                 "����"
  IDS_MI_MON_SAVE                 "����"
  IDS_MI_MON_PRINT                "�μ�"
  IDS_MI_MON_EXIT                 "������	Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "����� ����"
  IDS_MI_MON_STOP_EXEC            "���� ����"
  IDS_MI_MON_STEP_INTO            "�巯����"
  IDS_MI_MON_STEP_OVER            "�Ѵ�"
  IDS_MI_MON_SKIP_RETURN          "���� ���� ���� "
  IDS_MI_MON_GOTO_CURSOR          "Go to cursor"
  IDS_MI_MON_EVAL                 "��"
  IDS_MI_MON_CURRENT              "Current instruction"
  IDS_MI_MON_WND_EVAL             "Evaluation window"
  IDS_MI_MON_WND_REG              "Register window"
  IDS_MI_MON_WND_MEM              "Memory window"
  IDS_MI_MON_WND_DIS              "Disassembly window"
  IDS_MI_MON_WND_CONSOLE          "Console window"
  IDS_MI_MON_COMPUTER             "��ǻ��"
  IDS_MI_MON_DRIVE8               "����̺�8"
  IDS_MI_MON_DRIVE9               "����̺�9"
  IDS_MI_MON_CASCADE              "�ɽ����̵�"
  IDS_MI_MON_TILE_VERT            "Tile vertically"
  IDS_MI_MON_TILE_HORIZ           "Tile horizontally"
  IDS_MI_MON_ARRANGE_ICONS        "Arrange icons"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE Fout!"
  IDS_VICE_INFORMATION            "VICE informatie"
  IDS_VICE_QUESTION               "VICE vraag"
  IDS_FFMPEG_DLL_MISMATCH         "Uw ffmpeg dll versie is niet juist."
  IDS_DIRECTDRAW_ERROR            "DirectDraw fout: Code:%8x Fout:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Kan de instellingen niet opslaan."
  IDS_CANNOT_LOAD_SETTINGS        "Kan de instellingen niet laden."
  IDS_DEFAULT_SETTINGS_RESTORED   "Standaard instellingen hersteld."
  IDS_CANNOT_ATTACH_FILE          "Kan het opgegeven bestand niet koppelen"
  IDS_START_MONITOR               "%s\n\nMonitor starten? (Nee = reset, Annuleren = doorgaan"
  IDS_VICE_CPU_JAM                "VICE CPU HANGT"
  IDS_EXTEND_TO_40_TRACKS         "Bestand uitbreiden naar 40-sporen formaat?"
  IDS_DETACHED_DEVICE_S           "Apparaat %s ontkoppeld"
  IDS_ATTACHED_S_TO_DEVICE_S      "%s aan apparaat#%s gekoppelt"
  IDS_DETACHED_TAPE               "Tape ontkoppeld"
  IDS_HISTORY_RECORDED_UNKNOWN    "Geschiedenis opgenomen met onbekende VICE versie"
  IDS_HISTORY_RECORDED_VICE_S     "geschiedenis opgenomen met VICE-%s"
  IDS_PAUSED                      "gepauzeerd"
  IDS_FRAME_NUMBER                "frame #"
  IDS_RESUMED                     "hervat"
  IDS_REALLY_EXIT                 "Wilt U echt afsluiten?\n\nAlle data in ge�muleerd geheugen zal verloren gaan."
  IDS_TFE_PROBLEM                 "TFE/RR-Net ondersteuning is niet aanwezig op uw systeem,\ner ontbrrekt iets belangrijks. Kijk alstublieft op\nde VICE knowledge base support pagina\n\n      http://vicekb.trikaliotis.net/13-005\n\nvoor mogelijke redenen en activeer netwerken met VICE."
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net ondersteuning"
  IDS_CANNOT_AUTOSTART_FILE       "Kan opgegeven bestand niet autostarten."
  IDS_ATTACHED_TAPE_S             "Tape %s gekoppelt"
  IDS_SETTINGS_SAVED_SUCCESS      "Instellingen met succes opgeslagen."
  IDS_SETTINGS_LOADED_SUCCESS     "Instellingen met succes geladen."
  IDS_ATTACH_DISK_IMAGE           "Koppel schijfbestand aan"
  IDS_ATTACH_TAPE_IMAGE           "Koppel tapebestand aan"
  IDS_AUTOSTART_IMAGE             "Autostart disk-/tapebestand"
  IDS_INVALID_CARTRIDGE           "Ongeldig cartridge bestand"
  IDS_BAD_CARTRIDGE_CONFIG        "Slechte cartridge configuratie in UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Ongeldig cartridge bestand"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Logboek console uitvoer bestand"
  IDS_LOG_FILES_TYPE              "VICE console logboekbestanden (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Kan logboekbestand `%s' niet schrijven."
  IDS_LOAD_FLIP_LIST_FILE         "Laad fliplijstbestand"
  IDS_CANNOT_READ_FLIP_LIST       "Kan het fliplijstbestand niet lezen"
  IDS_SAVE_FLIP_LIST_FILE         "Fliplijstbestand opslaan"
  IDS_CANNOT_WRITE_FLIP_LIST      "Kan fliplijstbestand niet schrijven"
  IDS_SELECT_KEYMAP_FILE          "Selecteer keymapbestand"
  IDS_SAVE_KEYMAP_FILE            "Keymapbestand opslaan"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Kan het keymapbestand niet schrijven"
  IDS_SAVE_CONFIG_FILE            "Sla configuratie bestand op"
  IDS_LOAD_CONFIG_FILE            "Laad configuratie bestand"
  IDS_MAPPING                     "Toewijzing"
  IDS_KEYBOARD_SETTINGS           "Toetsenbord instellingen"
  IDS_ATTACH                      "Koppel"
  IDS_PLEASE_ENTER_A_FILENAME     "Geef aub een bestandsnaam op."
  IDS_OVERWRITE_EXISTING_IMAGE    "Bestaand bestand overschrijven?"
  IDS_CANNOT_CREATE_IMAGE         "Kan bestand niet maken!"
  IDS_COMMAND_LINE_OPTIONS        "Commando opties"
  IDS_COMMAND_OPTIONS_AVAIL       "Welke commando opties zijn beschikbaar?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Geen stuurprogramma geselecteerd, of geselecteerd stuurprogramma wordt niet ondersteund"
  IDS_CANT_WRITE_SCREENSHOT_S     "Kan schermafdrukbestand `%s' niet schrijven."
  IDS_AUTOSTART_DISK_IMAGE        "Autostart schijfbestand"
  IDS_SELECT_FS_DIRECTORY         "Selecteer bestandssysteemdirectory"
  IDS_PRINTER_USERPORT            "Printer Userport"
  IDS_PRINTER_4                   "Printer 4"
  IDS_PRINTER_5                   "Printer 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Drive 8"
  IDS_DRIVE_9                     "Drive 9"
  IDS_DRIVE_10                    "Drive 10"
  IDS_DRIVE_11                    "Drive 11"
  IDS_PERIPHERAL_SETTINGS         "Randapparaten instellingen"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Kan momentopnamebestand niet schrijven."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Kan momentopnamebestand niet lezen"
  IDS_LOAD_S_ROM_IMAGE            "Laad %s ROM bestand"
  IDS_SELECT_ROMSET_ARCHIVE       "Selecteer romsetarchief"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Kan romsetarchief niet laden!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Kan romsetarchief niet opslaan!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Kan romsetbestand niet laden!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Kan romsetbestand niet opslaan!"
  IDS_SELECT_ROMSET_FILE          "Selecteer romsetbestand"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "Computer"
  IDS_DRIVE                       "Drive"
  IDS_ROM_SETTINGS                "ROM instellingen"
  IDS_SAVE_SNAPSHOT_IMAGE         "Momentopnamebestand opslaan"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Kan momentopnamebestand `%s' niet schrijven."
  IDS_LOAD_SNAPSHOT_IMAGE         "Laad momentopnamebestand"
  IDS_COULD_NOT_LOAD_PALETTE      "Kon paletbestand niet laden."
  IDS_LOAD_VICE_PALETTE_FILE      "Laad VICE paletbestand"
  IDS_FULLSCREEN                  "Volscherm/DirectX"
  IDS_CRT_EMULATION               "CRT emulatie"
  IDS_RENDER_FILTER               "Render filter"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Video instellingen"
  IDS_FILE_SYSTEM                 "Bestandssysteem"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Echt IEC apparaat"
#endif
  IDS_RS232_DEVICE_I              "RS232 apparaat %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Koppel CRT cartridge bestand aan"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Koppel binair 8KB cartridge bestand"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Koppel binair 16KB cartridge bestand"
  IDS_ATTACH_AR_CART_IMAGE        "Koppel binair 32KB Action Replay cartridge bestand"
  IDS_ATTACH_AR3_CART_IMAGE       "Koppel binair 16KB Action Replay MK3 cartridge bestand"
  IDS_ATTACH_AR4_CART_IMAGE       "Koppel binair 32KB Action Replay MK4 cartridge bestand"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Koppel binair 16KB Stardos cartridge bestand"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Koppel binair 32KB Atomic Power cartridge bestand"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Koppel binair 8KB Epyx FastLoad cartridge bestand"
  IDS_ATTACH_IEEE488_CART_IMG     "Koppel IEEE-488 Interface cartridge bestand"
  IDS_ATTACH_RETRO_R_CART_IMG     "Koppel binair 64KB Retro Replay cartridge bestand"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Koppel binair 512kB MMC Replay cartridge bestand"
  IDS_ATTACH_IDE64_CART_IMAGE     "Koppel binair 64KB IDE64 cartridge bestand"
  IDS_ATTACH_SS4_CART_IMAGE       "Koppel binair 32KB Super Snapshot V4 cartridge bestand"
  IDS_ATTACH_SS5_CART_IMAGE       "Koppel binair 64KB Super Snapshot V5 cartridge bestand"
  IDS_ATTACH_STB_CART_IMAGE       "Koppel binair Structured Basic cartridge bestand aan"
  IDS_SELECT_CARTRIDGE_IMAGE      "Selecteer cartridge bestand"
  IDS_MODEL                       "Model"
  IDS_DRIVE_SETTINGS              "Drive instellingen"
  IDS_SELECT_START_SNAP_EVENT     "Selecteer start momentopname voor gebeurtenis geschiedenis"
  IDS_SELECT_END_SNAP_EVENT       "Selecteer eind momentopname voor gebeurtenis geschiedenis"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Versie %s *ONSTABIEL* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Versie %s rev %s *ONSTABIEL* (%s)"
#else
  IDS_VERSION_S                   "Versie %s (%s)"
  IDS_VERSION_S_REV_S             "Versie %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE medewerkers"
  IDS_WHO_MADE_WHAT               "Wie heeft wat gemaakt?"
  IDS_LICENSE                     "Licentie"
  IDS_NO_WARRANTY                 "Geen garantie!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE heeft ABSOLUUT GEEN GARANTIE!"
  IDS_PRESS_KEY_NORTHWEST         "Druk toets voor NoordWest"
  IDS_PRESS_KEY_NORTH             "Druk toets voor Noord"
  IDS_PRESS_KEY_NORTHEAST         "Druk toets voor NoordOost"
  IDS_PRESS_KEY_EAST              "Druk toets voor Oost"
  IDS_PRESS_KEY_SOUTHEAST         "Druk toets voor ZuidOost"
  IDS_PRESS_KEY_SOUTH             "Druk toets voor Zuid"
  IDS_PRESS_KEY_SOUTHWEST         "Druk toets voor ZuidWest"
  IDS_PRESS_KEY_WEST              "Druk toets voor West"
  IDS_PRESS_KEY_FIRE              "Druk toets voor Vuur"
  IDS_NO_USERPORT_ADAPTER         "Geen userport joy adapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA userport joy adapter"
  IDS_PET_USERPORT_ADAPTER        "PET userport joy adapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer userport joystick adapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM userport joy adapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT userport joy adapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft userport joy adapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte userport joy adapter"
  IDS_NO_SIDCART_JOY              "De SID cartridge joystick uitschakelen"
  IDS_SIDCART_JOY                 "Activeer SID cartridge joystick"
  IDS_NUMPAD_AND_RCTRL            "Numpad + RCtrl"
  IDS_KEYSET_A                    "Keyset A"
  IDS_KEYSET_B                    "Keyset B"
  IDS_ALL_BUTTONS_AS_FIRE         "Alle knoppen gebruiken als vuur"
  IDS_NUMERIC_SEE_ABOVE           "numeriek (zie boven)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Geen knop - Autovuren is uit"
  IDS_ALL_FILES_FILTER            "alle bestanden (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE paletbestanden (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE momentopnamebestanden (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM bestanden (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 bestanden (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Schijfbestanden (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Tape bestanden (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Ingepakte bestanden (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT cartridge bestanden (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Binaire cartridge bestanden (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE fliplijstbestanden (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE romsetbestanden (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE romsetarchieven (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE keymapbestanden (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodore emulator bestanden (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexibel"
  IDS_ADJUSTING                   "Aanpassend"
  IDS_EXACT                       "Exact"
  IDS_SOUND_DRIVER_DIRECTX        "Geluid stuurprogramma: DirectX"
  IDS_SOUND_DRIVER_WMM            "Geluid stuurprogramma: WMM"
  IDS_SYSTEM                      "Systeem"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Mediabestanden (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Configureer Keyset A"
  IDS_CONFIGURE_KEYSET_B          "Configureer Keyset B"
  IDS_SAVE_MEDIA_IMAGE            "Opslaan mediabestand"
  IDS_S_AT_D_SPEED                "%s met %d%% snelheid, %d fps%s"
  IDS_TAPE                        "Tape:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Opnemen\n%02d:%02d"
  IDS_PLAYBACK                    "Afspelen\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Onbekend"
  IDS_P_NUMBER                    "<nummer>"
  IDS_SET_INPUT_JOYSTICK_1        "Zet invoer apparaat voor joystick #1"
  IDS_SET_INPUT_JOYSTICK_2        "Zet invoer apparaat voor joystick #2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Zet invoer apparaat voor extra joystick #1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Zet invoer apparaat voor extra joystick #2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Sla instellingen op bij afsluiten"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Instellingen nooit opslaan bij afsluiten"
  IDS_CONFIRM_QUIT_VICE           "Bevestigen van het aflsuiten van VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Niet bevestigen van het afsluiten van VICE"
  IDS_USE_ALL_CPU_SMP             "Gebruik alle CPU's op SMP systemen"
  IDS_USE_FIRST_CPU_SMP           "Gebruik alleen de eerste CPU op SMP systemen"
  IDS_START_VICE_FULLSCREEN_MODE  "Start VICE in volschermmodus"
  IDS_DISABLE_DX9                 "DirectX9 video driver uitschakelen"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Onverwachte fout. Kreeg signaal %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Onverwachte fout. Kreeg signaal %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Idle"
  IDS_SERVER_LISTENING            "Server wacht op verbinding"
  IDS_CONNECTED_SERVER            "Verbonden server"
  IDS_CONNECTED_CLIENT            "Verbonden client"
  IDS_INVALID_PORT_NUMBER         "Ongeldig poort nummer"
  IDS_ERROR_STARTING_SERVER       "Een fout is opgetreden bij het starten van de server."
  IDS_ERROR_CONNECTING_CLIENT     "Een fout is opgetreden bij het verbinden."
#endif
  IDS_SOUND_RECORDING_STARTED     "Geluidsopname gestart..."
  IDS_SOUND_RECORDING_STOPPED     "Geluidsopname gestopt..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Annuleren"
  IDS_NONE                        "Geen"
  IDS_BROWSE                      "Bladeren..."
  IDS_SPECIFY_MIDI_IN             "kies MIDI-In apparaat"
  IDS_SPECIFY_MIDI_OUT            "Kies MIDI-uit apparaat"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Kan het EasyFlash crt bestand niet opslaan"
  IDS_NO_EASYFLASH_CART_INSERTED  "Geen EasyFlash cartridge aanwezig"
  IDS_DATASETTE_CAPTION           "Datasette instellingen"
  IDS_DATASETTE_RESET_WITH_CPU    "Reset Datasette met CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Snelheid van de motor tijdens lezen"
  IDS_DATASETTE_DELAY_TRIGGER     "Additionele aantal cycli vertraging per gebeurtenis"
  IDS_DATASETTE_DELAY_AT_ZERO     "Datasette zero gap vertraging"
  IDS_TOGGLE_USEIECDEVICE         "Gebruik IEC Apparaat"
  IDS_SELECTDISK                  "Disk bestand"
  IDS_SELECTDIR                   "Directory"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Echt IEC apparaat"
#endif
  IDS_SELECTNONE                  "Geen"
  IDS_AUTOSTART                   "Autostarten"
  IDS_BROWSEDIR                   "Bladeren..."
  IDS_TOGGLE_ATTACH_READONLY      "Alleen lezen"
  IDS_TOGGLE_READP00              "Lees P00 bestanden"
  IDS_TOGGLE_WRITEP00             "Schrijf P00 bestanden"
  IDS_TOGGLE_HIDENONP00           "Verberg non-P00 bestanden"
  IDS_JOYSTICK_CAPTION            "Joystick instellingen"
  IDS_JOYSTICK_IN_PORT_1          "Joystick in poort #1"
  IDS_SELECT_FIRE_BUTTON          "Selecteer vuur knop"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Autovuur knop instellingen"
  IDS_AUTOFIRE_SPEED              "Autovuur snelheid (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick in poort #2"
  IDS_JOY_CONFIG_A                "Configureer Keyset A"
  IDS_JOY_CONFIG_B                "Configureer Keyset B"
  IDS_JOY_CALIBRATE               "Kalibreer Joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Extra joystick adapter instellingen"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick in extra poort #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick in extra poort #2"
  IDS_KEYSET_SW                   "Zuid West"
  IDS_KEYSET_S                    "Zuiden"
  IDS_KEYSET_SE                   "Zuid Oost"
  IDS_KEYSET_W                    "West"
  IDS_KEYSET_E                    "Oost"
  IDS_KEYSET_NW                   "Noord West"
  IDS_KEYSET_N                    "Noord"
  IDS_KEYSET_NE                   "Noord Oost"
  IDS_KEYSET_FIRE                 "Vuur knop"
  IDS_SOUND_CAPTION               "Geluidsapparaat instellingen"
  IDS_SOUND_DIRECTX               "DirectX stuurprogramma"
  IDS_SOUND_WMM                   "WMM stuurprogramma"
  IDS_SOUND_OUTPUT_MODE           "Geluid uitvoer modus"
  IDS_SOUND_SAMPLE_FREQUENCY      "Sample snelheid :"
  IDS_SOUND_BUFFER_SIZE           "Geluidsbuffergrootte :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Geluidsfragmentgrootte :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Erg klein"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Klein"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Middelmatig"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Groot"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Erg groot"
  IDS_SOUND_SYNCH_METHOD          "Synchronisatiemethode :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Opslaan huidige gekoppelde schijfbestanden"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Opslaan huidig gekoppelde ROMs"
  IDS_FULLSCREEN_DRIVER           "Stuurprogramma:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdiepte:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Resolutie:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Vernieuwing snelheid:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK synchronisatie"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Render naar DX Primaire oppervlakte"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Aspect verhouding gebruiken (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Werkelijke aspect verhouding"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Waarde %.3f voor %s is buiten het bereik, %.3f zal gebruikt worden"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Waarde %d voor %s is buiten het bereik, %d zal gebruikt worden"
  IDS_AUDIO_LEAK                  "Audio lek"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Tint (0..2)"
  IDS_COLORS_SATURATION           "Verzadiging (0..2)"
  IDS_COLORS_CONTRAST             "Contrast (0..2)"
  IDS_COLORS_BRIGHTNESS           "Helderheid (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Scanlijnschaduw (0..1)"
  IDS_CRT_BLUR                    "Wazigheid (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Oneven lijnen fase (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Oneven lijnen compensatie (0..2)"
  IDS_VICII_PALETTE               "VICII palet"
  IDS_VIC_PALETTE                 "VICII palet"
  IDS_CRTC_PALETTE                "CRTC palet"
  IDS_VDC_PALETTE                 "VDC palet"
  IDS_TED_PALETTE                 "TED palet"
  IDS_VICII_COLORS                "VICII Kleuren"
  IDS_VIC_COLORS                  "VIC Kleuren"
  IDS_CRTC_COLORS                 "CRTC Kleuren"
  IDS_VDC_COLORS                  "VDC Kleuren"
  IDS_TED_COLORS                  "TED Kleuren"
  IDS_VICII_CRT_EMULATION         "VICII CRT emulatie"
  IDS_VIC_CRT_EMULATION           "VIC CRT emulatie"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT emulatie"
  IDS_VDC_CRT_EMULATION           "VDC CRT emulatie"
  IDS_TED_CRT_EMULATION           "TED CRT emulatie"
  IDS_VICII_RENDER_FILTER         "VICII Render filter"
  IDS_VIC_RENDER_FILTER           "VIC Render filter"
  IDS_CRTC_RENDER_FILTER          "CRTC Render filter"
  IDS_VDC_RENDER_FILTER           "VDC Render filter"
  IDS_TED_RENDER_FILTER           "TED Render filter"
  IDS_VICII_AUDIO_LEAK            "VICII Audio lek"
  IDS_VIC_AUDIO_LEAK              "VIC Audio lek"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audio lek"
  IDS_VDC_AUDIO_LEAK              "VDC Audio lek"
  IDS_TED_AUDIO_LEAK              "TED Audio lek"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Extern palet:"
  IDS_RAM_CAPTION                 "RAM instellingen"
  IDS_RAM_INIT_AT_POWERUP         "Initialisatie bij opstarten"
  IDS_RAM_VALUE_FIRST_BYTE        "Waarde van eerste byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Lengte van constante waarden"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Lengte van constant patroon"
  IDS_PRINTER_EMULATION           "Printer emulatie"
  IDS_PRINTER_FORMFEED            "Zend Formfeed"
  IDS_FILESYSTEM_PRINTER          "File system printer"
  IDS_PRINTER_DRVR                "Printer stuurprogramma"
  IDS_OUTPUT                      "Uitvoer"
  IDS_OUTPUT_TO_FILE              "Uitvoer bestand #"
  IDS_OUTPUT_FILE1_NAME           "Uitvoer bestand #1 naam"
  IDS_OUTPUT_FILE2_NAME           "Uitvoer bestand #2 naam"
  IDS_OUTPUT_FILE3_NAME           "Uitvoer bestand #3 naam"
  IDS_ROMSET_SELECT_ARCHIVE       "Romset archief"
  IDS_ROMSET_ARCHIVE_LOAD         "Laad archief"
  IDS_ROMSET_ARCHIVE_SAVE         "Opslaan archief"
  IDS_ROMSET_CONFIGURATION        "Configuratie"
  IDS_ROMSET_ARCHIVE_APPLY        "Toepassen"
  IDS_ROMSET_ARCHIVE_NEW          "Nieuw"
  IDS_ROMSET_ARCHIVE_DELETE       "Verwijderen"
  IDS_ROMSET_SELECT_FILE          "Romsetbestand"
  IDS_ROMSET_FILE_LOAD            "Laad romset"
  IDS_ROMSET_FILE_SAVE            "Opslaan romset"
  IDS_CUSTOM_SPEED_CAPTION        "Aangepaste snelheid"
  IDS_ENTER_CUSTOM_SPEED          "Geef snelheid op [%]"
  IDS_NEW_CONFIGURATION           "Nieuwe configuratie"
  IDS_ENTER_CONFIGURATION_NAME    "Geef configuratie naam"
  IDS_RS232_CAPTION               "RS232 instellingen"
  IDS_RS232_DEV_1                 "RS232 apparaat 1"
  IDS_RS232_DEV_2                 "RS232 apparaat 2"
  IDS_RS232_DEV_3                 "RS232 apparaat 3"
  IDS_RS232_DEV_4                 "RS232 apparaat 4"
  IDS_NETWORK_CAPTION             "Netplay instellingen"
  IDS_CURRENT_MODE                "Huidige modus"
  IDS_SERVER_BIND                 "Server binding"
  IDS_TCP_PORT                    "TCP poort"
  IDS_NETWORK_SERVER              "Start server"
  IDS_NETWORK_CLIENT              "Maak verbinding naar"
  IDS_NETWORK_DISCONNECT          "Verbreek verbinding"
  IDS_CONTROL                     "Bediening"
  IDS_SERVER                      "Server"
  IDS_CLIENT                      "Client"
  IDS_KEYBOARD                    "Toetsenbord"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Apparaten"
  IDS_SETTINGS                    "Instellingen"
  IDS_TOGGLE_CONSOLE_APPEND       "Logboek aan bestaand bestand toevoegen"
  IDS_IMAGE_CONTENTS              "bestandsinhoud"
  IDS_NEW_IMAGE                   "Nieuw Bestand"
  IDS_NAME                        "Naam"
  IDS_ID                          "ID"
  IDS_TYPE                        "Soort"
  IDS_BLANK_IMAGE                 "Maak Bestand"
  IDS_NEW_TAP_IMAGE               "Nieuw TAP bestand"
  IDS_SAVE                        "Opslaan"
  IDS_SELECT_DRIVER               "Selecteer Stuurprogramma"
  IDS_FFMPEG_SETTINGS             "FFMPEG instellingen"
  IDS_FORMAT                      "Formaat"
  IDS_AUDIO_CODEC                 "Audio codec"
  IDS_BITRATE                     "bitrate"
  IDS_VIDEO_CODEC                 "Video codec"
  IDS_SOUND_RECORD_CAPTION        "Geluidsopname instellingen"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Geluidsopname Formaat"
  IDS_SOUND_RECORD_FILE_LABEL     "Geluid opnamebestand"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Character"
  IDS_COMPUTER_RESOURCES_CAPTION  "Computer resources"
  IDS_COMPUTER_RESOURCES          "Computer resources opgeslagen naar romset"
  IDS_DRIVE_RESOURCES_CAPTION     "Drive resources"
  IDS_DRIVE_RESOURCES             "Drive resources opgeslagen naar romset"
  IDS_SYMBOLIC                    "Symbolisch"
  IDS_POSITIONAL                  "Positioneel"
  IDS_DUMP_KEYSET                 "Keyset opslaan"
  IDS_DUMP_SHORTCUTS              "Dump shortcuts"
  IDS_SYMBOLIC_US                 "Symbolisch US"
  IDS_SYMBOLIC_DE                 "Symbolisch DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "Geheugen"
  IDS_DRIVE_TYPE                  "Drivesoort"
  IDS_40_TRACK_HANDLING           "40-sporenondersteuning"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Nooit uitbreiden"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Vragen bij uitbreiden"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Uitbreiden bij toegang"
  IDS_IDLE_METHOD                 "Idlemethode"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Trap idle"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Sla cycli over"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Parallelle kabel"
  IDS_STANDARD                    "Standaard"
  IDS_DRIVE_EXPANSION             "Drive uitbreiding"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Geheugen"
  IDS_SID_GENGROUP1               "SID model"
  IDS_SID_FILTERS                 "SID filters"
  IDS_MP_FILE                     "Bestand"
  IDS_MP_ATTACH_DISK_IMAGE        "Koppel schijfbestand aan"
  IDS_MP_DETACH_DISK_IMAGE        "Ontkoppel schijfbestand"
  IDS_MP_FLIP_LIST                "Flip lijst"
  IDS_MP_DATASETTE_CONTROL        "Datasette regeling"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Koppel cartridge bestand..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Modus"
#endif
  IDS_MP_EDIT                     "Bewerken"
  IDS_MP_SNAPSHOT                 "Momentopname"
  IDS_MP_RECORDING_START_MODE     "Opname start modus"
  IDS_MP_OPTIONS                  "Opties"
  IDS_MP_REFRESH_RATE             "Vernieuwing snelheid"
  IDS_MP_MAXIMUM_SPEED            "Maximale snelheid"
  IDS_MP_VIDEO_STANDARD           "Videostandaard"
  IDS_MP_DRIVE_SYNC_FACTOR        "Drive synchronisatiefactor"
  IDS_MP_SETTINGS                 "Instellingen"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Cartridge/IO instellingen"
  IDS_MP_LANGUAGE                 "Taal"
  IDS_MP_HELP                     "Help"
  IDS_MP_VIEW                     "Beeld"
  IDS_MP_WINDOW                   "Venster"
  IDS_MI_EXIT                     "Afsluiten"
  IDS_MI_ABOUT                    "Over VICE..."
  IDS_MI_PAUSE                    "Pauze"
  IDS_MI_EDIT_COPY                "Kopie"
  IDS_MI_EDIT_PASTE               "Plakken"
  IDS_MI_AUTOSTART                "Autostart disk-/tapebestand..."
  IDS_MI_RESET_HARD               "Hard"
  IDS_MI_RESET_SOFT               "Zacht"
  IDS_MI_DRIVE8                   "Drive 8"
  IDS_MI_DRIVE9                   "Drive 9"
  IDS_MI_DRIVE10                  "Drive 10"
  IDS_MI_DRIVE11                  "Drive 11"
  IDS_MI_ATTACH_TAPE              "Koppel tapebestand aan..."
  IDS_MI_DETACH_TAPE              "Ontkoppel tapebestand"
  IDS_MI_DETACH_ALL               "Alles"
  IDS_MI_TOGGLE_SOUND             "Geluidsuitvoer"
  IDS_MI_TOGGLE_DOUBLESIZE        "Dubbele grootte"
  IDS_MI_TOGGLE_DOUBLESCAN        "Dubbele scan"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Dubbel vertikaal"
  IDS_MI_DRIVE_TRUE_EMULATION     "Hardwarematige driveemulatie"
  IDS_MI_DRIVE_SOUND_EMULATION    "Drive geluiden emulatie"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Manipuleer hardwarematige drive emulatie bij autostarten"
  IDS_MI_TOGGLE_VIDEOCACHE        "Videocache"
  IDS_MI_DRIVE_SETTINGS           "Drive instellingen..."
  IDS_MI_CART_SMART_ATTACH        "Slimme bestandskoppeling..."
  IDS_MI_CART_ATTACH_CRT          "CRT bestand..."
  IDS_MI_CART_ATTACH_8KB          "Algemeen 8KB bestand..."
  IDS_MI_CART_ATTACH_16KB         "Algemeen 16KB bestand..."
  IDS_MI_CART_ATTACH_AR           "Action Replay bestand..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 bestand..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 bestand..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos bestand..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power bestand..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad bestand..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE488 interfacebestand..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay bestand..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay bestand..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 interfacebestand..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 bestand..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 bestand..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC bestand..."
  IDS_MI_FLIP_ADD                 "Voeg huidig bestand toe (Drive 8)"
  IDS_MI_FLIP_REMOVE              "Verwijder huidig bestand (Drive 8)"
  IDS_MI_FLIP_NEXT                "Koppel volgend bestand (Drive 8)"
  IDS_MI_FLIP_PREVIOUS            "Koppel vorig bestand (Drive 8)"
  IDS_MI_FLIP_LOAD                "Laad fliplijstbestand"
  IDS_MI_FLIP_SAVE                "Fliplijstbestand opslaan"
  IDS_MI_DATASETTE_STOP           "Stop"
  IDS_MI_DATASETTE_START          "Start"
  IDS_MI_DATASETTE_FORWARD        "Vooruit"
  IDS_MI_DATASETTE_REWIND         "Terug"
  IDS_MI_DATASETTE_RECORD         "Opname"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Reset Teller"
  IDS_MI_CART_SET_DEFAULT         "Zet cartridge als standaard"
  IDS_MI_TOGGLE_CART_RESET        "Reset bij cartwisseling"
  IDS_MI_CART_DETACH              "Ontkoppel cartridge bestand(en)"
  IDS_MI_CART_FREEZE              "Cartridge freeze"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normaal"
  IDS_MI_DEBUG_MODE_SMALL         "Klein"
  IDS_MI_DEBUG_MODE_HISTORY       "Geschiedenis"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Geschiedenis Autospeel"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Hoofd CPU Volgen"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Drive0 CPU Volgen"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Drive1 CPU Volgen"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Laad momentopnamebestand..."
  IDS_MI_SNAPSHOT_SAVE            "Momentopnamebestand opslaan..."
  IDS_MI_LOADQUICK                "Snellaad momentopnamebestand"
  IDS_MI_SAVEQUICK                "Snelopslaan momentopnamebestand"
  IDS_MI_EVENT_TOGGLE_RECORD      "Start/Stop Opnamegeschiedenis"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Start/Stop Afspeelgeschiedenis"
  IDS_MI_EVENT_SETMILESTONE       "Zet opname mijlpaal"
  IDS_MI_EVENT_RESETMILESTONE     "Ga terug naar mijlpaal"
  IDS_MI_EVENT_START_MODE_SAVE    "Opslaan nieuwe momentopname"
  IDS_MI_EVENT_START_MODE_LOAD    "Laad bestaande momentopname"
  IDS_MI_EVENT_START_MODE_RESET   "Start met reset"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Overschrijf weergave"
  IDS_MI_EVENT_DIRECTORY          "Selecteer geschiedenisdirectory"
  IDS_MI_MEDIAFILE                "Opslaan/stop mediabestand..."
  IDS_MI_SOUND_RECORD_START       "Opname van geluid naar bestand..."
  IDS_MI_SOUND_RECORD_STOP        "Stop geluidsopname"
  IDS_MI_REFRESH_RATE_AUTO        "Auto"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Geen limiet"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Aangepast"
  IDS_MI_TOGGLE_WARP_MODE         "Warpmodus"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Altijd Boven"
  IDS_MI_TOGGLE_DX9DISABLE        "DirectX9 video driver uitschakelen"
  IDS_MI_SWAP_JOYSTICK            "Verwissel joysticks"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Verwissel userport joysticks"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Tegenovergestelde richtingen toestaan"
  IDS_MI_JOYKEYS_TOGGLE           "Activeer Joy Keys"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtuele apparaattraps"
  IDS_MI_MOUSE                    "Gebruik de muis"
  IDS_MI_C64MODEL_SETTINGS        "C64 model instellingen..."
  IDS_MI_AUTOSTART_SETTINGS       "Autostart instellingen..."
  IDS_MI_VIDEO_SETTINGS           "Video instellingen..."
  IDS_MI_DEVICEMANAGER            "Randapparaten instellingen..."
  IDS_MI_JOY_SETTINGS             "Joystick instellingen..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Userport joystick instellingen..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sidcart joystick instellingen..."
  IDS_MI_KEYBOARD_SETTINGS        "Toetsenbord instellingen..."
  IDS_MI_SOUND_SETTINGS           "Geluidsinstellingen..."
  IDS_MI_ROM_SETTINGS             "ROM instellingen..."
  IDS_MI_RAM_SETTINGS             "RAM instellingen..."
  IDS_MI_DATASETTE_SETTINGS       "Datasette instellingen..."
  IDS_MI_VICII_SETTINGS           "VIC-II instellingen..."
  IDS_MI_MOUSE_SETTINGS           "Muis instellingen..."
  IDS_MI_SID_SETTINGS             "SID instellingen..."
  IDS_MI_RS232_SETTINGS           "RS232 instellingen..."
  IDS_MI_REU_SETTINGS             "REU instellingen..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM instellingen..."
  IDS_MI_RAMCART_SETTINGS         "RamCart instellingen..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box instellingen..."
  IDS_MI_EXPERT_SETTINGS          "Expert Cartridge instellingen..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC instellingen..."
  IDS_MI_MMC64_SETTINGS           "MMC64 instellingen..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay instellingen..."
  IDS_MI_RR_SETTINGS              "Retro Replay instellingen..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice instellingen..."
  IDS_MI_MIDI_SETTINGS            "MIDI instellingen..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX instellingen..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC instellingen..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lichtpen instellingen..."
  IDS_MI_IDE64_SETTINGS           "IDE64 instellingen..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernet instellingen..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA instellingen..."
  IDS_MI_RS232USER_SETTINGS       "RS232 userport instellingen..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash instellingen..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander instellingen..."
  IDS_MI_TOGGLE_SFX_SS            "Activeer de SFX Sound Sampler cartridge"
  IDS_MI_TOGGLE_USERPORT_RTC      "Activeer de Userport RTC uitbreiding"
  IDS_MI_SETTINGS_SAVE_FILE       "Huidige instellingen opslaan naar opgegeven bestand"
  IDS_MI_SETTINGS_LOAD_FILE       "Instellingen laden van opgegeven bestand"
  IDS_MI_SETTINGS_SAVE            "Huidige instellingen opslaan"
  IDS_MI_SETTINGS_LOAD            "Opgeslagen instellingen laden"
  IDS_MI_SETTINGS_DEFAULT         "Herstel standaard instellingen"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Sla instellingen op bij afsluiten"
  IDS_MI_CONFIRM_ON_EXIT          "Bevestigen van het aflsuiten van VICE"
  IDS_MI_LANG_EN                  "Engels"
  IDS_MI_LANG_DA                  "Deens"
  IDS_MI_LANG_DE                  "Duits"
  IDS_MI_LANG_ES                  "Spaans"
  IDS_MI_LANG_FR                  "Frans"
  IDS_MI_LANG_HU                  "Hongaars"
  IDS_MI_LANG_IT                  "Italiaans"
  IDS_MI_LANG_KO                  "Koreaans"
  IDS_MI_LANG_NL                  "Nederlands"
  IDS_MI_LANG_PL                  "Pools"
  IDS_MI_LANG_RU                  "Russies"
  IDS_MI_LANG_SV                  "Zweeds"
  IDS_MI_LANG_TR                  "Turks"
  IDS_MI_CMDLINE                  "Commando opties"
  IDS_MI_CONTRIBUTORS             "Medewerkers"
  IDS_MI_LICENSE                  "Licentie"
  IDS_MI_WARRANTY                 "Geen garantie!"
  IDS_MI_TOGGLE_FULLSCREEN        "Volscherm"
  IDS_MI_SIDCART_SETTINGS         "SID cart instellingen..."
  IDS_MI_MON_OPEN                 "Open"
  IDS_MI_MON_SAVE                 "Opslaan"
  IDS_MI_MON_PRINT                "Print"
  IDS_MI_MON_EXIT                 "Afsluiten        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Stop Debug"
  IDS_MI_MON_STOP_EXEC            "Stop Uitvoering"
  IDS_MI_MON_STEP_INTO            "Stap in"
  IDS_MI_MON_STEP_OVER            "Stap over"
  IDS_MI_MON_SKIP_RETURN          "Stap tot terugkeer"
  IDS_MI_MON_GOTO_CURSOR          "Ga naar cursor"
  IDS_MI_MON_EVAL                 "Evalueren"
  IDS_MI_MON_CURRENT              "Huidige instructie"
  IDS_MI_MON_WND_EVAL             "Evaluatie venster"
  IDS_MI_MON_WND_REG              "Register venster"
  IDS_MI_MON_WND_MEM              "Geheugen venster"
  IDS_MI_MON_WND_DIS              "Disassemblyvenster"
  IDS_MI_MON_WND_CONSOLE          "Console venster"
  IDS_MI_MON_COMPUTER             "Computer"
  IDS_MI_MON_DRIVE8               "Drive 8"
  IDS_MI_MON_DRIVE9               "Drive 9"
  IDS_MI_MON_CASCADE              "Alle vensters"
  IDS_MI_MON_TILE_VERT            "Naast elkaar"
  IDS_MI_MON_TILE_HORIZ           "Onder elkaar"
  IDS_MI_MON_ARRANGE_ICONS        "Rangschik iconen"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "B��d VICE!"
  IDS_VICE_INFORMATION            "Informacje o VICE"
  IDS_VICE_QUESTION               "Pytanie VICE"
  IDS_FFMPEG_DLL_MISMATCH         "Twoja wersja ffmpeg.dll nie pasuje."
  IDS_DIRECTDRAW_ERROR            "B��d DirectDraw: Code:%8x Error:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Nie mo�na zapisa� ustawie�."
  IDS_CANNOT_LOAD_SETTINGS        "Nie mo�na wczyta� ustawie�."
  IDS_DEFAULT_SETTINGS_RESTORED   "Przywr�ono domy�lne ustawienia."
  IDS_CANNOT_ATTACH_FILE          "Nie mo�na zamontowa� danego pliku"
  IDS_START_MONITOR               "%s\n\nUruchomi� monitor? (Nie to reset, anuluj to kontynuacja)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Rozszerzy� obraz do formatu 40-�cie�kowego?"
  IDS_DETACHED_DEVICE_S           "Od��czono urz�dzenie %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Przy��czono %s do urz�dzenia#%s"
  IDS_DETACHED_TAPE               "Od��czono ta�m�"
  IDS_HISTORY_RECORDED_UNKNOWN    "Historia zapisana w nieznanej wersji programu"
  IDS_HISTORY_RECORDED_VICE_S     "Historia zapisana w VICE-%s"
  IDS_PAUSED                      "pauza"
  IDS_FRAME_NUMBER                "klatka #"
  IDS_RESUMED                     "resumed"
  IDS_REALLY_EXIT                 "Na pewno wyj��?\n\nWszystkie dane w emulowanym RAM-ie zostan� utracone."
  IDS_TFE_PROBLEM                 "Obs�uga TFE/RR-Net nie jest dost�pna na twoim systemie,\nbrakuje czego� wa�nego. Prosz� spojrze�\nna stron� wsparcia w bazie wiedzy VICE\n\n      http://vicekb.trikaliotis.net/13-005\n\nby znale�� mo�liwe przyczyny i w��czy� obs�ug� sieci w VICE."
  IDS_TFE_RRNET_SUPPORT           "Obs�uga TFE/RR-Net"
  IDS_CANNOT_AUTOSTART_FILE       "Nie mo�na automatycznie wystartowa� z danego pliku."
  IDS_ATTACHED_TAPE_S             "Zamontowana ta�ma %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Zapisywanie ustawie� powiod�o si�."
  IDS_SETTINGS_LOADED_SUCCESS     "Wczytywanie ustawie� powiod�o si�."
  IDS_ATTACH_DISK_IMAGE           "Zamontuj obraz dyskietki"
  IDS_ATTACH_TAPE_IMAGE           "Zamontuj obraz ta�my"
  IDS_AUTOSTART_IMAGE             "Automatycznie startuj z obrazu dysku lub ta�my"
  IDS_INVALID_CARTRIDGE           "Nieprawid�owy obraz kartrid�a"
  IDS_BAD_CARTRIDGE_CONFIG        "Z�a konfiguracja kartrid�a w UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Nieprawid�owy obraz kartrid�a"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Obraz wyj�cia konsoli logowania"
  IDS_LOG_FILES_TYPE              "Pliki logowania konsoli VICE (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Nie mo�na zapisa� pliku z logiem '%s'."
  IDS_LOAD_FLIP_LIST_FILE         "Wczytaj plik listy podmiany no�nik�w"
  IDS_CANNOT_READ_FLIP_LIST       "Nie mo�na odczyta� pliku listy podmiany no�nik�w"
  IDS_SAVE_FLIP_LIST_FILE         "Zapisz plik listy podmiany no�nik�w"
  IDS_CANNOT_WRITE_FLIP_LIST      "Nie mo�na zapisa� pliku listy wymiany no�nik�w"
  IDS_SELECT_KEYMAP_FILE          "Wybierz plik uk�adu klawiatury"
  IDS_SAVE_KEYMAP_FILE            "Zapisz plik uk�adu klawiatury"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Nie mo�na zapisa� pliku ustawie� klawiatury"
  IDS_SAVE_CONFIG_FILE            "Zapisz plik konfiguracji"
  IDS_LOAD_CONFIG_FILE            "Wczytaj plik konfiguracji"
  IDS_MAPPING                     "Mapowanie"
  IDS_KEYBOARD_SETTINGS           "Ustawienia klawiatury"
  IDS_ATTACH                      "Zamontuj"
  IDS_PLEASE_ENTER_A_FILENAME     "Prosz� wprowadzi� nazw� pliku."
  IDS_OVERWRITE_EXISTING_IMAGE    "Nadpisa� istniej�cy obraz?"
  IDS_CANNOT_CREATE_IMAGE         "Nie mo�na utworzy� pliku obrazu!"
  IDS_COMMAND_LINE_OPTIONS        "Opcje wiersza polece�"
  IDS_COMMAND_OPTIONS_AVAIL       "Kt�re opcje wiersza polece� s� dost�pne?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Nie wybrano sterownika albo wybrany sterownik nie jest obs�ugiwany"
  IDS_CANT_WRITE_SCREENSHOT_S     "Nie mo�na zapisa� pliku zrzutu ekranu `%s'."
  IDS_AUTOSTART_DISK_IMAGE        "Automatycznie startuj z obrazu dyskietki"
  IDS_SELECT_FS_DIRECTORY         "Wybierz katalog systemu plik�w"
  IDS_PRINTER_USERPORT            "Userport drukarki"
  IDS_PRINTER_4                   "Drukarka 4"
  IDS_PRINTER_5                   "Drukarka 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Nap�d 8"
  IDS_DRIVE_9                     "Nap�d 9"
  IDS_DRIVE_10                    "Nap�d 10"
  IDS_DRIVE_11                    "Nap�d 11"
  IDS_PERIPHERAL_SETTINGS         "Ustawienia zewn�trzne"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Nie mo�na zapisa� pliku zrzutu."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Nie mo�na wczyta� obrazu zrzutu"
  IDS_LOAD_S_ROM_IMAGE            "Wczytaj obraz ROM-u %s"
  IDS_SELECT_ROMSET_ARCHIVE       "Wybierz archiwum zestawu ROM-�w"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Nie mo�na wczyta� archiwum zestawu ROM-�w"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Nie mo�na zapisa� archiwum zestawu ROM-�w"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Nie mo�na wczyta� pliku zestawu ROM-�w"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Nie mo�na zapisa� pliku zestawu ROM-�w"
  IDS_SELECT_ROMSET_FILE          "Wybierz plik zestawu ROM-�w"
  IDS_ROMSET                      "Zestaw ROM-�w"
  IDS_COMPUTER                    "Komputer"
  IDS_DRIVE                       "Nap�d"
  IDS_ROM_SETTINGS                "Ustawienia ROM"
  IDS_SAVE_SNAPSHOT_IMAGE         "Zapisz obraz zrzutu"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Nie mo�na zapisa� pliku zrzutu '%s'"
  IDS_LOAD_SNAPSHOT_IMAGE         "Wczytaj obraz zrzutu"
  IDS_COULD_NOT_LOAD_PALETTE      "Nie mo�na wczyta� pliku palety."
  IDS_LOAD_VICE_PALETTE_FILE      "Wczytaj plik palety VICE"
  IDS_FULLSCREEN                  "Pe�ny ekran/DirectX"
  IDS_CRT_EMULATION               "Emulacja CRT"
  IDS_RENDER_FILTER               "Filtr renderera"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Ustawienia wideo"
  IDS_FILE_SYSTEM                 "System plik�w"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Rzeczywiste urz�dzenie IEC"
#endif
  IDS_RS232_DEVICE_I              "Urz�dzenie RS232 %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Zamontuj obraz kartrid�a CRT"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Zamontuj surowy obraz kartrid�a 8KB"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Zamontuj surowy obraz kartrid�a 16KB"
  IDS_ATTACH_AR_CART_IMAGE        "Zamontuj surowy obraz kartid�a 32KB Action Replay"
  IDS_ATTACH_AR3_CART_IMAGE       "Zamontuj surowy obraz kartrid�a 16KB Action Replay MK3"
  IDS_ATTACH_AR4_CART_IMAGE       "Zamontuj surowy obraz kartrid�a 32KB Action Replay MK4"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Zamontuj surowy obraz kartrid�a 16KB Stardos"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Zamontuj surowy obraz kartrid�a 32KB Atomic Power"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Zamontuj surowy obraz kartrid�a 8KB Epyx FastLoad"
  IDS_ATTACH_IEEE488_CART_IMG     "Zamontuj obraz kartrid�a IEEE-488 Interface"
  IDS_ATTACH_RETRO_R_CART_IMG     "Zamontuj surowy obraz kartrid�a 64KB Retro Replay"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Zamontuj surowy obraz kartrid�a 512kB MMC Replay"
  IDS_ATTACH_IDE64_CART_IMAGE     "Zamontuj surowy obraz kartrid�a 64KB IDE64"
  IDS_ATTACH_SS4_CART_IMAGE       "Zamontuj surowy obraz kartrid�a 32KB Super Snapshot V4"
  IDS_ATTACH_SS5_CART_IMAGE       "Zamontuj surowy obraz kartrid�a Super Snapshot V5"
  IDS_ATTACH_STB_CART_IMAGE       "Zamontuj surowy obraz kartrid�a Structured Basic"
  IDS_SELECT_CARTRIDGE_IMAGE      "Wybierz plik kartrid�a"
  IDS_MODEL                       "Model"
  IDS_DRIVE_SETTINGS              "Ustawienia nap�du"
  IDS_SELECT_START_SNAP_EVENT     "Wybierz pocz�tkowy zrzut historii zdarze�"
  IDS_SELECT_END_SNAP_EVENT       "Wybierz ko�cowy zrzut historii zdarze�"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *UNSTABLE* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "Wsp�pracownicy VICE"
  IDS_WHO_MADE_WHAT               "Kto co zrobi�?"
  IDS_LICENSE                     "Licencja"
  IDS_NO_WARRANTY                 "Bez gwarancji!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE jest rozpowszechniany BEZ �ADNEJ GWARANCJI!"
  IDS_PRESS_KEY_NORTHWEST         "Wci�nij klawisz G�raLewo"
  IDS_PRESS_KEY_NORTH             "Wci�nij klawisz G�ra"
  IDS_PRESS_KEY_NORTHEAST         "Wci�nij klawisz G�raPrawo"
  IDS_PRESS_KEY_EAST              "Wci�nij klawisz Prawo"
  IDS_PRESS_KEY_SOUTHEAST         "Wci�nij klawisz D�Prawo"
  IDS_PRESS_KEY_SOUTH             "Wci�nij klawisz D�"
  IDS_PRESS_KEY_SOUTHWEST         "Wci�nij klawisz D�Lewo"
  IDS_PRESS_KEY_WEST              "Wci�nij klawisz Lewo"
  IDS_PRESS_KEY_FIRE              "Wci�nij klawisz Fire"
  IDS_NO_USERPORT_ADAPTER         "Bez z��cza userportu joysticka"
  IDS_CGA_USERPORT_ADAPTER        "Z��cze CGA userportu joysticka"
  IDS_PET_USERPORT_ADAPTER        "Z��cze PET userportu joysticka"
  IDS_HUMMER_USERPORT_ADAPTER     "Z��cze Hummer userportu joysticka"
  IDS_OEM_USERPORT_ADAPTER        "Z��cze OEM userportu joysticka"
  IDS_HIT_USERPORT_ADAPTER        "Z��cze HIT userportu joysticka"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Z��cze userportu joysticka Kingsoft"
  IDS_STARBYTE_USERPORT_ADAPTER   "Z��cze userportu joysticka Starbyte"
  IDS_NO_SIDCART_JOY              "Wy��cz joystick kartrid�a SID"
  IDS_SIDCART_JOY                 "W��cz joystick kartrid�a SID"
  IDS_NUMPAD_AND_RCTRL            "Numpad + RCtrl"
  IDS_KEYSET_A                    "Klawisze A"
  IDS_KEYSET_B                    "Klawisze B"
  IDS_ALL_BUTTONS_AS_FIRE         "Wszystkie przyciski jako fire"
  IDS_NUMERIC_SEE_ABOVE           "numeryczny (patrz wy�ej)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Brak przycisku - Autofire wy��czony"
  IDS_ALL_FILES_FILTER            "Wszystkie pliki (*.*)"
  IDS_PALETTE_FILES_FILTER        "Pliki palety kolor�w VICE (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "Pliki zrzutu VICE (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "Pliki CBM (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "Pliki IDE64 (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Pliki obrazu dysku (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Pliki obrazu ta�my (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Pliki skompresowane (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "Pliki obrazu kartrid�a CRT (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Pliki obrazu surowego kartrid�a (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "Pliki listy wymiany no�nik�w VICE (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "Pliki zestawu ROM-�w VICE (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "Archiwa zestawu ROM-�w VICE (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "Pliki uk�adu klawiatury VICE (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Pliki emulatora Commodore (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Elastyczna"
  IDS_ADJUSTING                   "Dopasowana"
  IDS_EXACT                       "Dok�adna"
  IDS_SOUND_DRIVER_DIRECTX        "Sterownik d�wi�ku: DirectX"
  IDS_SOUND_DRIVER_WMM            "Sterownik d�wi�ku: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Pliki multimedialne (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Skonfiguruj uk�ad klawiszy A"
  IDS_CONFIGURE_KEYSET_B          "Skonfiguruj uk�ad klawiszy B"
  IDS_SAVE_MEDIA_IMAGE            "Zapisz plik multimedi�w"
  IDS_S_AT_D_SPEED                "%s, pr�dko�� %d%%, %d fps%s"
  IDS_TAPE                        "Ta�ma:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Zapis\n%02d:%02d"
  IDS_PLAYBACK                    "Odtwarzanie\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Nieznany"
  IDS_P_NUMBER                    "<numer>"
  IDS_SET_INPUT_JOYSTICK_1        "Ustaw urz�dzenie wej�cia joysticka #1"
  IDS_SET_INPUT_JOYSTICK_2        "Ustaw urz�dzenie wej�cia joysticka #2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Ustaw urz�dzenie wej�cia dodatkowego joysticka #1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Ustaw urz�dzenie wej�cia dodatkowego joysticka #2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Zapisz ustawienia przy wyj�ciu"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Nigdy nie zapisuj ustawie� przy wyj�ciu"
  IDS_CONFIRM_QUIT_VICE           "Potwierdzaj zamkni�cie VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Nigdy nie potwierdzaj zamkni�cia VICE"
  IDS_USE_ALL_CPU_SMP             "U�ywaj wszystkich CPU na systemach SMP"
  IDS_USE_FIRST_CPU_SMP           "U�ywaj tylko pierwszego CPU na systemach SMP"
  IDS_START_VICE_FULLSCREEN_MODE  "Uruchom VICE w trybie pe�noekranowym"
  IDS_DISABLE_DX9                 "Wy��cz sterownik wideo DirectX9"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Wydarzy� si� niespodziewany b��d. Odebrano sygna� %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Wydarzy� si� niespodziewany b��d. Odebrano sygna� %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Bezczynny"
  IDS_SERVER_LISTENING            "Serwer nas�uchuje"
  IDS_CONNECTED_SERVER            "Po��czony serwer"
  IDS_CONNECTED_CLIENT            "Po��czony klient"
  IDS_INVALID_PORT_NUMBER         "B��dny numer portu"
  IDS_ERROR_STARTING_SERVER       "Wyst�pi� b��d poczas uruchamiania serwera."
  IDS_ERROR_CONNECTING_CLIENT     "Wydarzy� si� b��d podczas ��czenia z klientem."
#endif
  IDS_SOUND_RECORDING_STARTED     "Rozpocz�to odtwarzanie d�wi�ku..."
  IDS_SOUND_RECORDING_STOPPED     "Zatrzymano odtwarzanie d�wi�ku..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Anuluj"
  IDS_NONE                        "Brak"
  IDS_BROWSE                      "Przegl�daj..."
  IDS_SPECIFY_MIDI_IN             "Okre�l urz�dzenie wej�cia MIDI"
  IDS_SPECIFY_MIDI_OUT            "Okre�l urz�dzenie wyj�cia MIDI"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "B��d zapisu pliku crt EasyFlash"
  IDS_NO_EASYFLASH_CART_INSERTED  "Nie w�o�ono kartrid�a EasyFlash"
  IDS_DATASETTE_CAPTION           "Ustawienia magnetofonu"
  IDS_DATASETTE_RESET_WITH_CPU    "Resetuj magnetofon razem z CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Pr�dko�� motorka przy odczycie"
  IDS_DATASETTE_DELAY_TRIGGER     "Dodatkowe op�nienie cykl�w przy ka�dym wywo�aniu."
  IDS_DATASETTE_DELAY_AT_ZERO     "Op�nienie pocz�tkowej przerwy magnetofonu"
  IDS_TOGGLE_USEIECDEVICE         "U�yj urz�dzenia IEC"
  IDS_SELECTDISK                  "Obraz dyskietki"
  IDS_SELECTDIR                   "Katalog"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Rzeczywiste urz�dzenie IEC"
#endif
  IDS_SELECTNONE                  "Brak"
  IDS_AUTOSTART                   "Autostart"
  IDS_BROWSEDIR                   "Przegl�daj..."
  IDS_TOGGLE_ATTACH_READONLY      "Zamontuj tylko do odczytu"
  IDS_TOGGLE_READP00              "Czytaj plik P00"
  IDS_TOGGLE_WRITEP00             "Zapisz plik P00"
  IDS_TOGGLE_HIDENONP00           "Ukryj pliki inne ni� P00"
  IDS_JOYSTICK_CAPTION            "Ustawienia joysticka"
  IDS_JOYSTICK_IN_PORT_1          "Joystick w porcie #1"
  IDS_SELECT_FIRE_BUTTON          "Wybierz przycisk fire"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Ustawienia przycisku autofire"
  IDS_AUTOFIRE_SPEED              "Szybko�� autofire (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick w porcie #2"
  IDS_JOY_CONFIG_A                "Skonfiguruj uk�ad klawiszy A"
  IDS_JOY_CONFIG_B                "Skonfiguruj uk�ad klawiszy B"
  IDS_JOY_CALIBRATE               "Kalibruj joystick(i)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Dodatkowe ustawienia joysticka"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick w dodatkowym porcie #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick w dodatkowym porcie #2"
  IDS_KEYSET_SW                   "D�l Lewo"
  IDS_KEYSET_S                    "D�"
  IDS_KEYSET_SE                   "D�l Prawo"
  IDS_KEYSET_W                    "Lewo"
  IDS_KEYSET_E                    "Prawo"
  IDS_KEYSET_NW                   "G�ra Lewo"
  IDS_KEYSET_N                    "G�ra"
  IDS_KEYSET_NE                   "G�ra Prawo"
  IDS_KEYSET_FIRE                 "Przycisk Fire"
  IDS_SOUND_CAPTION               "Konfiguruj ustawienia urz�dzenia d�wi�ku"
  IDS_SOUND_DIRECTX               "Sterownik DirectX"
  IDS_SOUND_WMM                   "Sterownik WMM"
  IDS_SOUND_OUTPUT_MODE           "Tryb wyj�cia d�wi�ku"
  IDS_SOUND_SAMPLE_FREQUENCY      "Pr�bkowanie :"
  IDS_SOUND_BUFFER_SIZE           "Rozmiar bufora d�wi�ku :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Rozmiar fragmentu d�wi�ku :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Bardzo ma�e"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Ma�y"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "�redni"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Wielki"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Bardzo du�e"
  IDS_SOUND_SYNCH_METHOD          "Metoda synchronizacji :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Zapisz zaontowane obrazy dyskietek"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Zapisz wczytane obrazy ROM-�w"
  IDS_FULLSCREEN_DRIVER           "Sterownik:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "G��bia bitowa:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Rozdzielczo��:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Cz�stotliwo�� od�wie�ania:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "Synchronizacja VBLANK"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Render do pierwszej �cianki DX"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Zachowaj proporcje ekranu (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Rzeczywiste proporcje ekranu"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Warto�� %.3f dla %s jest poza zasi�giem, zamiast tego u�ywam %.3f"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Warto�� %d dla %s jest poza zasi�giem, zamiast tego u�ywam %d"
  IDS_AUDIO_LEAK                  "Audio leak"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "Odcie� (0..2)"
  IDS_COLORS_SATURATION           "Nasycenie (0..2)"
  IDS_COLORS_CONTRAST             "Kontrast (0..2)"
  IDS_COLORS_BRIGHTNESS           "Jasno�� (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Cieniowane scanline (0..1)"
  IDS_CRT_BLUR                    "Rozmycie (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Faza linii nieparzystych (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Wyr�wnanie linii nieparzystych (0..2)"
  IDS_VICII_PALETTE               "Paleta VICII"
  IDS_VIC_PALETTE                 "Paleta VIC"
  IDS_CRTC_PALETTE                "Paleta CRTC"
  IDS_VDC_PALETTE                 "Paleta VDC"
  IDS_TED_PALETTE                 "Paleta TED"
  IDS_VICII_COLORS                "Kolory VICII"
  IDS_VIC_COLORS                  "Kolory VIC"
  IDS_CRTC_COLORS                 "Kolory CRTC"
  IDS_VDC_COLORS                  "Kolory VDC"
  IDS_TED_COLORS                  "Kolory TED"
  IDS_VICII_CRT_EMULATION         "Emulacja CRT VICII"
  IDS_VIC_CRT_EMULATION           "Emulacja CRT VIC"
  IDS_CRTC_CRT_EMULATION          "Emulacja CRT CRTC"
  IDS_VDC_CRT_EMULATION           "Emulacja CRT VDC"
  IDS_TED_CRT_EMULATION           "Emulacja CRT TED"
  IDS_VICII_RENDER_FILTER         "Filtr renderera VICII"
  IDS_VIC_RENDER_FILTER           "Filtr renderera VIC"
  IDS_CRTC_RENDER_FILTER          "Filtr renderera CRTC"
  IDS_VDC_RENDER_FILTER           "Filtr renderera VDC"
  IDS_TED_RENDER_FILTER           "Filtr renderera TED"
  IDS_VICII_AUDIO_LEAK            "Audio leak VICII"
  IDS_VIC_AUDIO_LEAK              "Audio leak VIC"
  IDS_CRTC_AUDIO_LEAK             "Audio leak CRTC"
  IDS_VDC_AUDIO_LEAK              "Audio leak VDC"
  IDS_TED_AUDIO_LEAK              "Audio leak TED"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Zewn�trzna paleta:"
  IDS_RAM_CAPTION                 "Ustawienia RAM"
  IDS_RAM_INIT_AT_POWERUP         "Inicjalizacja przy w��czaniu"
  IDS_RAM_VALUE_FIRST_BYTE        "Warto�� pierwszego bajta"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "D�ugo�� sta�ych warto�ci"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "L�ugo�� sta�ego wzorca"
  IDS_PRINTER_EMULATION           "Emulacja drukarki"
  IDS_PRINTER_FORMFEED            "Wy�lij Form Feed"
  IDS_FILESYSTEM_PRINTER          "Drukarka systemu plik�w"
  IDS_PRINTER_DRVR                "Sterownik drukarki"
  IDS_OUTPUT                      "Wyj�cie"
  IDS_OUTPUT_TO_FILE              "Zrzu� do pliku #"
  IDS_OUTPUT_FILE1_NAME           "Nazwa pliku zrzutu #1"
  IDS_OUTPUT_FILE2_NAME           "Nazwa pliku zrzutu #2"
  IDS_OUTPUT_FILE3_NAME           "Nazwa pliku zrzutu #3"
  IDS_ROMSET_SELECT_ARCHIVE       "Archiwum zestawu ROM-�w"
  IDS_ROMSET_ARCHIVE_LOAD         "Wczytaj archiwum"
  IDS_ROMSET_ARCHIVE_SAVE         "Zapisz archiwum"
  IDS_ROMSET_CONFIGURATION        "Konfiguracja"
  IDS_ROMSET_ARCHIVE_APPLY        "Zastosuj"
  IDS_ROMSET_ARCHIVE_NEW          "Nowy"
  IDS_ROMSET_ARCHIVE_DELETE       "Usu�"
  IDS_ROMSET_SELECT_FILE          "Plik zestawu ROM-�w"
  IDS_ROMSET_FILE_LOAD            "Wczytaj zestaw ROM-�w"
  IDS_ROMSET_FILE_SAVE            "Zapisz zestaw ROM-�w"
  IDS_CUSTOM_SPEED_CAPTION        "W�asna pr�dko��"
  IDS_ENTER_CUSTOM_SPEED          "Wprowad� w��sn� pr�dko�� [%]"
  IDS_NEW_CONFIGURATION           "Nowa konfiguracja"
  IDS_ENTER_CONFIGURATION_NAME    "Wprowad� nazw� konfiguracji"
  IDS_RS232_CAPTION               "Ustawienia RS232"
  IDS_RS232_DEV_1                 "Urz�dzenie RS232 1"
  IDS_RS232_DEV_2                 "Urz�dzenie RS232 2"
  IDS_RS232_DEV_3                 "Urz�dzenie RS232 3"
  IDS_RS232_DEV_4                 "Urz�dzenie RS232 4"
  IDS_NETWORK_CAPTION             "Ustawienia gry sieciowej"
  IDS_CURRENT_MODE                "Obecny tryb"
  IDS_SERVER_BIND                 "Po��czenie serwera"
  IDS_TCP_PORT                    "Port TCP"
  IDS_NETWORK_SERVER              "Uruchom serwer"
  IDS_NETWORK_CLIENT              "Po��cz z"
  IDS_NETWORK_DISCONNECT          "Roz��cz"
  IDS_CONTROL                     "Kontrola"
  IDS_SERVER                      "Serwer"
  IDS_CLIENT                      "Klient"
  IDS_KEYBOARD                    "Klawiatura"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Urz�dzenia"
  IDS_SETTINGS                    "Ustawienia"
  IDS_TOGGLE_CONSOLE_APPEND       "Dopisuj log do istniej�cego pliku"
  IDS_IMAGE_CONTENTS              "Zawarto�� obrazu"
  IDS_NEW_IMAGE                   "Nowy obraz"
  IDS_NAME                        "Nazwa"
  IDS_ID                          "ID"
  IDS_TYPE                        "Typ"
  IDS_BLANK_IMAGE                 "Utw�rz obraz"
  IDS_NEW_TAP_IMAGE               "Obraz New TAP"
  IDS_SAVE                        "Zapisz"
  IDS_SELECT_DRIVER               "Wybierz sterownik"
  IDS_FFMPEG_SETTINGS             "Ustawienia FFMPEG"
  IDS_FORMAT                      "Format"
  IDS_AUDIO_CODEC                 "Kodek audio"
  IDS_BITRATE                     "szybko�� transmisji"
  IDS_VIDEO_CODEC                 "Kodek wideo"
  IDS_SOUND_RECORD_CAPTION        "Ustawienia zapisu d�wi�ku"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Format zapisu d�wi�ku"
  IDS_SOUND_RECORD_FILE_LABEL     "Plik zapisu d�wi�ku"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Znak"
  IDS_COMPUTER_RESOURCES_CAPTION  "Zasoby komputera"
  IDS_COMPUTER_RESOURCES          "Zasoby komputera zapisane w zestawie ROM-�w"
  IDS_DRIVE_RESOURCES_CAPTION     "Zasoby nap�du"
  IDS_DRIVE_RESOURCES             "Zasoby nap�du zapisane do zestawu ROM-�w"
  IDS_SYMBOLIC                    "Symboliczne"
  IDS_POSITIONAL                  "Pozycjonalne"
  IDS_DUMP_KEYSET                 "Zrzu� zestaw klawiszy"
  IDS_DUMP_SHORTCUTS              "Zrzu� skr�ty"
  IDS_SYMBOLIC_US                 "Symboliczna US"
  IDS_SYMBOLIC_DE                 "Symboliczna DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Poz."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Poz."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Poz."
  IDS_MEMORY                      "Pami��"
  IDS_DRIVE_TYPE                  "Typ nap�du"
  IDS_40_TRACK_HANDLING           "Obs�uga 40 �cie�ek"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Nigdy nie rozszerzaj"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Zapytaj przy rozszerzaniu"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Rozszerz przy dost�pie"
  IDS_IDLE_METHOD                 "Metoda bezczynno�ci"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Trap idle"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Opuszczaj cykle"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "��cze portu r�wnoleg�ego"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Rozszerzenie nap�du"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Pami��"
  IDS_SID_GENGROUP1               "Model SID-a"
  IDS_SID_FILTERS                 "Filtry SID"
  IDS_MP_FILE                     "Plik"
  IDS_MP_ATTACH_DISK_IMAGE        "Zamontuj obraz dyskietki"
  IDS_MP_DETACH_DISK_IMAGE        "Wyjmij obraz dyskietki"
  IDS_MP_FLIP_LIST                "Lista podmiany no�nika"
  IDS_MP_DATASETTE_CONTROL        "Zarz�dzanie magnetofonem"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Zamontuj obraz kartrid�a..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Tryb"
#endif
  IDS_MP_EDIT                     "Edycja"
  IDS_MP_SNAPSHOT                 "Zrzut"
  IDS_MP_RECORDING_START_MODE     "Rozpocznij tryb zapisu"
  IDS_MP_OPTIONS                  "Opcje"
  IDS_MP_REFRESH_RATE             "Cz�stotliwo�� od�wie�ania"
  IDS_MP_MAXIMUM_SPEED            "Maksymalna pr�dko��"
  IDS_MP_VIDEO_STANDARD           "Standard wideo"
  IDS_MP_DRIVE_SYNC_FACTOR        "Czynnik synchronizacji stacji"
  IDS_MP_SETTINGS                 "Ustawienia"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Ustawienia kartrid�a i we/wy"
  IDS_MP_LANGUAGE                 "J�zyk"
  IDS_MP_HELP                     "Pomoc"
  IDS_MP_VIEW                     "Widok"
  IDS_MP_WINDOW                   "Okno"
  IDS_MI_EXIT                     "Wyj�cie"
  IDS_MI_ABOUT                    "O VICE..."
  IDS_MI_PAUSE                    "Pauza"
  IDS_MI_EDIT_COPY                "Kopiuj"
  IDS_MI_EDIT_PASTE               "Wklej"
  IDS_MI_AUTOSTART                "Automatycznie startuj z obrazu dysku lub ta�my..."
  IDS_MI_RESET_HARD               "Twardy"
  IDS_MI_RESET_SOFT               "Mi�kki"
  IDS_MI_DRIVE8                   "Nap�d 8"
  IDS_MI_DRIVE9                   "Nap�d 9"
  IDS_MI_DRIVE10                  "Nap�d 10"
  IDS_MI_DRIVE11                  "Nap�d 11"
  IDS_MI_ATTACH_TAPE              "Zamontuj obraz ta�my..."
  IDS_MI_DETACH_TAPE              "Wyjmij obraz ta�my"
  IDS_MI_DETACH_ALL               "Wszystkie"
  IDS_MI_TOGGLE_SOUND             "Odtwarzanie d�wi�ku"
  IDS_MI_TOGGLE_DOUBLESIZE        "Podw�jny rozmiar"
  IDS_MI_TOGGLE_DOUBLESCAN        "Podw�jne skanowanie"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Podw�jne pionowe"
  IDS_MI_DRIVE_TRUE_EMULATION     "Rzeczywista emulacja nap�du"
  IDS_MI_DRIVE_SOUND_EMULATION    "Emulacja odg�os�w stacji dysk�w"
  IDS_MI_AUTOSTART_HANDLE_TDE     "W��cz rzeczywist� emulacj� nap�du przy autostarcie"
  IDS_MI_TOGGLE_VIDEOCACHE        "Cache wideo"
  IDS_MI_DRIVE_SETTINGS           "Ustawienia nap�du..."
  IDS_MI_CART_SMART_ATTACH        "Inteligentne montowanie obrazu..."
  IDS_MI_CART_ATTACH_CRT          "Obraz CRT..."
  IDS_MI_CART_ATTACH_8KB          "Obraz Generic 8KB..."
  IDS_MI_CART_ATTACH_16KB         "Obraz Generic 16KB..."
  IDS_MI_CART_ATTACH_AR           "Obraz Action Replay..."
  IDS_MI_CART_ATTACH_AR3          "Obraz Action Replay MK3..."
  IDS_MI_CART_ATTACH_AR4          "Obraz Action Replay MK4..."
  IDS_MI_CART_ATTACH_STARDOS      "Obraz Stardos..."
  IDS_MI_CART_ATTACH_AT           "Obraz Atomic Power..."
  IDS_MI_CART_ATTACH_EPYX         "Obraz Epyx FastLoad..."
  IDS_MI_CART_ATTACH_IEEE488      "Obraz IEEE-488 Interface..."
  IDS_MI_CART_ATTACH_RR           "Obraz Retro Replay..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "Obraz MMC Replay..."
  IDS_MI_CART_ATTACH_IDE64        "Obraz interfejsu IDE64..."
  IDS_MI_CART_ATTACH_SS4          "Obraz Super Snapshot V4..."
  IDS_MI_CART_ATTACH_SS5          "Obraz Super Snapshot V5..."
  IDS_MI_CART_ATTACH_STB          "Obraz Structured BASIC..."
  IDS_MI_FLIP_ADD                 "Dodaj aktualny obraz (jednostka 8)"
  IDS_MI_FLIP_REMOVE              "Usu� aktualny obraz (jednostka 8)"
  IDS_MI_FLIP_NEXT                "Zamontuj nast�pny obraz (jednostka 8)"
  IDS_MI_FLIP_PREVIOUS            "Zamontuj poprzedni obraz (jednostka 8)"
  IDS_MI_FLIP_LOAD                "Wczytaj plik listy podmiany no�nik�w"
  IDS_MI_FLIP_SAVE                "Zapisz plik listy podmiany no�nik�w"
  IDS_MI_DATASETTE_STOP           "Zatrzymaj"
  IDS_MI_DATASETTE_START          "Start"
  IDS_MI_DATASETTE_FORWARD        "Przewi� do przodu"
  IDS_MI_DATASETTE_REWIND         "Przewi� do ty�u"
  IDS_MI_DATASETTE_RECORD         "Nagrywaj"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Skasuj licznik"
  IDS_MI_CART_SET_DEFAULT         "Ustaw kartrid� jako domy�lny"
  IDS_MI_TOGGLE_CART_RESET        "Restart przy zmianie kartrid�a"
  IDS_MI_CART_DETACH              "Wysu� obraz(y) kartrid�a"
  IDS_MI_CART_FREEZE              "Zamro�enie kartrid�a"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Zwyk�y"
  IDS_MI_DEBUG_MODE_SMALL         "Ma�y"
  IDS_MI_DEBUG_MODE_HISTORY       "Historia"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Automatyczne odgrywanie historii"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "�ledzenie g��wnego CPU"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "�ledzenie CPU stacji0"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "�ledzenie CPU stacji1"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Wczytaj obraz zrzutu..."
  IDS_MI_SNAPSHOT_SAVE            "Zapisz obraz zrzutu..."
  IDS_MI_LOADQUICK                "Wczytaj obraz szybkiego zrzutu"
  IDS_MI_SAVEQUICK                "Zapisz obraz szybkiego zrzutu"
  IDS_MI_EVENT_TOGGLE_RECORD      "Odtwarzaj/Zatrzymaj histori� zapisu"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Odtwarzaj/Zatrzymaj histori� odtwarzania"
  IDS_MI_EVENT_SETMILESTONE       "Ustaw kamie� milowy zapisu"
  IDS_MI_EVENT_RESETMILESTONE     "Powr�� do kamienia milowego"
  IDS_MI_EVENT_START_MODE_SAVE    "Zapisz nowy zrzut"
  IDS_MI_EVENT_START_MODE_LOAD    "Wczytaj istniej�cy zrzut"
  IDS_MI_EVENT_START_MODE_RESET   "Rozpocznij z resetem"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Nadpisuj wyj�ciowy sygna�"
  IDS_MI_EVENT_DIRECTORY          "Wybierz pliki lub katalog historii"
  IDS_MI_MEDIAFILE                "Zapisz i zatrzymaj plik multimedi�w..."
  IDS_MI_SOUND_RECORD_START       "Zapisz d�wi�k do pliku..."
  IDS_MI_SOUND_RECORD_STOP        "Zatrzymaj zapis d�wi�ku"
  IDS_MI_REFRESH_RATE_AUTO        "Automatyczna"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Bez limitu"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "W�asna"
  IDS_MI_TOGGLE_WARP_MODE         "Tryb przyspieszony"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Zawsze na wierzchu"
  IDS_MI_TOGGLE_DX9DISABLE        "Wy��cz sterownik wideo DirectX9"
  IDS_MI_SWAP_JOYSTICK            "Zamie� joysticki"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Zamie� joysticki w userportach"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Pozw�l na przeciwstawne kierunki"
  IDS_MI_JOYKEYS_TOGGLE           "W��cz klawisze joysticka"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Traps urz�dzenia wirtualnego."
  IDS_MI_MOUSE                    "Przechwytuj zdarzenia myszy"
  IDS_MI_C64MODEL_SETTINGS        "Ustawienia modelu C64..."
  IDS_MI_AUTOSTART_SETTINGS       "Ustawienia autostartu..."
  IDS_MI_VIDEO_SETTINGS           "Ustawienia wideo..."
  IDS_MI_DEVICEMANAGER            "Ustawienia zewn�trzne..."
  IDS_MI_JOY_SETTINGS             "Ustawienia joysticka..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Ustawienia userportu joysticka..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Ustawienia joysticka Sidcart..."
  IDS_MI_KEYBOARD_SETTINGS        "Ustawienia klawiatury..."
  IDS_MI_SOUND_SETTINGS           "Ustawienia d�wi�ku..."
  IDS_MI_ROM_SETTINGS             "Ustawienia ROM..."
  IDS_MI_RAM_SETTINGS             "Ustawienia RAM..."
  IDS_MI_DATASETTE_SETTINGS       "Ustawienia magnetofonu..."
  IDS_MI_VICII_SETTINGS           "Ustawienia VIC-II..."
  IDS_MI_MOUSE_SETTINGS           "Ustawienia myszy..."
  IDS_MI_SID_SETTINGS             "Ustawienia SID..."
  IDS_MI_RS232_SETTINGS           "Ustawienia RS232..."
  IDS_MI_REU_SETTINGS             "Ustawienia REU..."
  IDS_MI_GEORAM_SETTINGS          "Ustawienia GEO-RAM..."
  IDS_MI_RAMCART_SETTINGS         "Ustawienia RamCart..."
  IDS_MI_DQBB_SETTINGS            "Ustawienia Double Quick Brown Box..."
  IDS_MI_EXPERT_SETTINGS          "Ustawienia Expert Cartridge..."
  IDS_MI_ISEPIC_SETTINGS          "Ustawienia ISEPIC..."
  IDS_MI_MMC64_SETTINGS           "Ustawienia MMC64..."
  IDS_MI_MMCREPLAY_SETTINGS       "Ustawienia MMC Replay..."
  IDS_MI_RR_SETTINGS              "Ustawienia Retro Replay..."
  IDS_MI_MAGICVOICE_SETTINGS      "Ustawienia Magic Voice..."
  IDS_MI_MIDI_SETTINGS            "Ustawienia MIDI..."
  IDS_MI_DIGIMAX_SETTINGS         "Ustawienia DigiMAX..."
  IDS_MI_DS12C887RTC_SETTINGS     "Ustawienia DS12C887 RTC..."
  IDS_MI_LIGHTPEN_SETTINGS        "Ustawienia pi�ra �wietlnego..."
  IDS_MI_IDE64_SETTINGS           "Ustawienia IDE64..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ustawienia Ethernet..."
#endif
  IDS_MI_ACIA_SETTINGS            "Ustawienia ACIA..."
  IDS_MI_RS232USER_SETTINGS       "Ustawienia userportu RS232..."
  IDS_MI_EASYFLASH_SETTINGS       "Ustawienia EasyFlash..."
  IDS_MI_SFX_SE_SETTINGS          "Ustawienia SFX Sound Expander..."
  IDS_MI_TOGGLE_SFX_SS            "W��cz kartrid� SFX Sound Sampler"
  IDS_MI_TOGGLE_USERPORT_RTC      "W��cz rozszerzenie Userport RTC"
  IDS_MI_SETTINGS_SAVE_FILE       "Zapisz obecne ustawienia do danego pliku"
  IDS_MI_SETTINGS_LOAD_FILE       "Wczytaj ustawienia z danego pliku"
  IDS_MI_SETTINGS_SAVE            "Zapisz obecne ustawienia"
  IDS_MI_SETTINGS_LOAD            "Wczytaj zapisane ustawienia"
  IDS_MI_SETTINGS_DEFAULT         "Ustaw domy�lne ustawienia"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Zapisz ustawienia przy wyj�ciu"
  IDS_MI_CONFIRM_ON_EXIT          "Potwierdzaj zamkni�cie VICE"
  IDS_MI_LANG_EN                  "Angielski"
  IDS_MI_LANG_DA                  "Du�ski"
  IDS_MI_LANG_DE                  "Niemiecki"
  IDS_MI_LANG_ES                  "Hiszpa�ski"
  IDS_MI_LANG_FR                  "Francuski"
  IDS_MI_LANG_HU                  "W�gierski"
  IDS_MI_LANG_IT                  "W�oski"
  IDS_MI_LANG_KO                  "Korea�ski"
  IDS_MI_LANG_NL                  "Holenderski"
  IDS_MI_LANG_PL                  "Polski"
  IDS_MI_LANG_RU                  "Rosyjski"
  IDS_MI_LANG_SV                  "Szwedzki"
  IDS_MI_LANG_TR                  "Turecki"
  IDS_MI_CMDLINE                  "Opcje wiersza polece�"
  IDS_MI_CONTRIBUTORS             "Wsp�pracownicy"
  IDS_MI_LICENSE                  "Licencja"
  IDS_MI_WARRANTY                 "Bez gwarancji!"
  IDS_MI_TOGGLE_FULLSCREEN        "Pe�ny ekran"
  IDS_MI_SIDCART_SETTINGS         "Ustawienia karty SID..."
  IDS_MI_MON_OPEN                 "Otw�rz"
  IDS_MI_MON_SAVE                 "Zapisz"
  IDS_MI_MON_PRINT                "Drukuj"
  IDS_MI_MON_EXIT                 "Wyj�cie         Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Zatrzymaj Debug"
  IDS_MI_MON_STOP_EXEC            "Zatrzymaj wykonywanie"
  IDS_MI_MON_STEP_INTO            "Krok w"
  IDS_MI_MON_STEP_OVER            "Krok nad"
  IDS_MI_MON_SKIP_RETURN          "Krok do powrotu"
  IDS_MI_MON_GOTO_CURSOR          "Id� do kursora"
  IDS_MI_MON_EVAL                 "Oce�"
  IDS_MI_MON_CURRENT              "Obecna instrukcja"
  IDS_MI_MON_WND_EVAL             "Okno oceny"
  IDS_MI_MON_WND_REG              "Okno rejestr�w"
  IDS_MI_MON_WND_MEM              "Okno pami�ci"
  IDS_MI_MON_WND_DIS              "Okno deasemblera"
  IDS_MI_MON_WND_CONSOLE          "Okno konsoli"
  IDS_MI_MON_COMPUTER             "Komputer"
  IDS_MI_MON_DRIVE8               "Nap�d 8"
  IDS_MI_MON_DRIVE9               "Nap�d 9"
  IDS_MI_MON_CASCADE              "Kaskada"
  IDS_MI_MON_TILE_VERT            "Uporz�dkuj w pionie"
  IDS_MI_MON_TILE_HORIZ           "Uporz�dkuj w poziomie"
  IDS_MI_MON_ARRANGE_ICONS        "Ustaw ikony"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28595)
#endif
STRINGTABLE
LANGUAGE LANG_RUSSIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "������ VICE!"
  IDS_VICE_INFORMATION            "VICE Information"
  IDS_VICE_QUESTION               "VICE Question"
  IDS_FFMPEG_DLL_MISMATCH         "Your ffmpeg dll version doesn't match."
  IDS_DIRECTDRAW_ERROR            "DirectDraw error: Code:%8x Error:%s"
  IDS_CANNOT_SAVE_SETTINGS        "�� ������� ��������� ���������"
  IDS_CANNOT_LOAD_SETTINGS        "�� ������� ��������� ���������."
  IDS_DEFAULT_SETTINGS_RESTORED   "��������� �� ��������� �������������"
  IDS_CANNOT_ATTACH_FILE          "�� ������� ���������� ��������� ����"
  IDS_START_MONITOR               "%s\n\nStart monitor? (No will reset, cancel will continue)"
  IDS_VICE_CPU_JAM                "VICE CPU JAM"
  IDS_EXTEND_TO_40_TRACKS         "Extend image to 40-track format?"
  IDS_DETACHED_DEVICE_S           "����������� ���������� %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "���������� %s � ����������#%s"
  IDS_DETACHED_TAPE               "Detached tape"
  IDS_HISTORY_RECORDED_UNKNOWN    "History recorded with unknown release"
  IDS_HISTORY_RECORDED_VICE_S     "History recorded with VICE-%s"
  IDS_PAUSED                      "�����������"
  IDS_FRAME_NUMBER                "frame #"
  IDS_RESUMED                     "resumed"
  IDS_REALLY_EXIT                 "Do you really want to exit?\n\nAll the data present in the emulated RAM will be lost."
  IDS_TFE_PROBLEM                 "TFE/RR-Net support is not available on your system,\nthere is some important part missing. Please have a\nlook at the VICE knowledge base support page\n\n      http://vicekb.trikaliotis.net/13-005\n\nfor possible reasons and to activate networking with VICE."
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net support"
  IDS_CANNOT_AUTOSTART_FILE       "Cannot autostart specified file."
  IDS_ATTACHED_TAPE_S             "Attached tape %s"
  IDS_SETTINGS_SAVED_SUCCESS      "��������� ������� ���������"
  IDS_SETTINGS_LOADED_SUCCESS     "��������� ������� ���������."
  IDS_ATTACH_DISK_IMAGE           "�������� ����� �����"
  IDS_ATTACH_TAPE_IMAGE           "�������� ����� ������"
  IDS_AUTOSTART_IMAGE             "������������� ��������� ����� �����/�������"
  IDS_INVALID_CARTRIDGE           "�������� ����� ���������"
  IDS_BAD_CARTRIDGE_CONFIG        "Bad cartridge config in UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "�������� ����� ���������"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Logging console output image"
  IDS_LOG_FILES_TYPE              "VICE console logging files (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Cannot write log file `%s'."
  IDS_LOAD_FLIP_LIST_FILE         "Load flip list file"
  IDS_CANNOT_READ_FLIP_LIST       "Cannot read flip list file"
  IDS_SAVE_FLIP_LIST_FILE         "Save flip list file"
  IDS_CANNOT_WRITE_FLIP_LIST      "Cannot write flip list file"
  IDS_SELECT_KEYMAP_FILE          "Select keymap file"
  IDS_SAVE_KEYMAP_FILE            "Save keymap file"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Cannot write keymap file"
  IDS_SAVE_CONFIG_FILE            "Save config file"
  IDS_LOAD_CONFIG_FILE            "Load config file"
  IDS_MAPPING                     "Mapping"
  IDS_KEYBOARD_SETTINGS           "��������� ����������"
  IDS_ATTACH                      "Attach"
  IDS_PLEASE_ENTER_A_FILENAME     "���������� ������� ��� �����."
  IDS_OVERWRITE_EXISTING_IMAGE    "���������� ��������� �����?"
  IDS_CANNOT_CREATE_IMAGE         "�� ������� ������� ���� ������!"
  IDS_COMMAND_LINE_OPTIONS        "����� ��������� ������"
  IDS_COMMAND_OPTIONS_AVAIL       "����� ����� ��������� ������ ���� � �������?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "������� �� ������ ��� ��������� ������� �� ��������������"
  IDS_CANT_WRITE_SCREENSHOT_S     "Cannot write screenshot file `%s'."
  IDS_AUTOSTART_DISK_IMAGE        "Autostart disk image"
  IDS_SELECT_FS_DIRECTORY         "Select file system directory"
  IDS_PRINTER_USERPORT            "Printer Userport"
  IDS_PRINTER_4                   "������� 4"
  IDS_PRINTER_5                   "������� 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "���������� 8"
  IDS_DRIVE_9                     "���������� 9"
  IDS_DRIVE_10                    "���������� 10"
  IDS_DRIVE_11                    "���������� 11"
  IDS_PERIPHERAL_SETTINGS         "Peripheral settings"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Can't write snapshot file."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "�� ������� ��������� ����� ��������"
  IDS_LOAD_S_ROM_IMAGE            "��������� %s ROM �����"
  IDS_SELECT_ROMSET_ARCHIVE       "Select romset archive"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Cannot load romset archive!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Cannot save romset archive!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Cannot load romset file!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Cannot save romset file!"
  IDS_SELECT_ROMSET_FILE          "Select romset file"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "���������"
  IDS_DRIVE                       "����������"
  IDS_ROM_SETTINGS                "��������� ���"
  IDS_SAVE_SNAPSHOT_IMAGE         "��������� �������"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Cannot write snapshot file `%s'."
  IDS_LOAD_SNAPSHOT_IMAGE         "��������� �������"
  IDS_COULD_NOT_LOAD_PALETTE      "�� ������� ��������� ���� �������."
  IDS_LOAD_VICE_PALETTE_FILE      "Load VICE palette file"
  IDS_FULLSCREEN                  "Fullscreen/DirectX"
  IDS_CRT_EMULATION               "CRT emulation"
  IDS_RENDER_FILTER               "Render filter"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "��������� �����"
  IDS_FILE_SYSTEM                 "�������� �������"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Real IEC device"
#endif
  IDS_RS232_DEVICE_I              "RS232 device %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Attach CRT cartridge image"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "���������� ������ ������ 8�� ���������"
  IDS_ATTACH_RAW_16KB_CART_IMG    "���������� ������ ������ 16�� ���������"
  IDS_ATTACH_AR_CART_IMAGE        "Attach raw 32KB Action Replay cartridge image"
  IDS_ATTACH_AR3_CART_IMAGE       "Attach raw 16KB Action Replay MK3 cartridge image"
  IDS_ATTACH_AR4_CART_IMAGE       "Attach raw 32KB Action Replay MK4 cartridge image"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Attach raw 16KB Stardos cartridge image"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Attach raw 32KB Atomic Power cartridge image"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Attach raw 8KB Epyx FastLoad cartridge image"
  IDS_ATTACH_IEEE488_CART_IMG     "Attach IEEE-488 Interface cartridge image"
  IDS_ATTACH_RETRO_R_CART_IMG     "Attach raw 64KB Retro Replay cartridge image"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Attach raw 512kB MMC Replay cartridge image"
  IDS_ATTACH_IDE64_CART_IMAGE     "Attach raw 64KB IDE64 cartridge image"
  IDS_ATTACH_SS4_CART_IMAGE       "Attach raw 32KB Super Snapshot V4 cartridge image"
  IDS_ATTACH_SS5_CART_IMAGE       "Attach raw 64KB Super Snapshot V5 cartridge image"
  IDS_ATTACH_STB_CART_IMAGE       "Attach raw Structured Basic cartridge image"
  IDS_SELECT_CARTRIDGE_IMAGE      "�������� ���� ���������"
  IDS_MODEL                       "������"
  IDS_DRIVE_SETTINGS              "Drive settings"
  IDS_SELECT_START_SNAP_EVENT     "Select start snapshot for event history"
  IDS_SELECT_END_SNAP_EVENT       "Select end snapshot for event history"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *UNSTABLE* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE contributors"
  IDS_WHO_MADE_WHAT               "Who made what?"
  IDS_LICENSE                     "��������"
  IDS_NO_WARRANTY                 "��� ��������!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE ���������������� ��� �����¸�!"
  IDS_PRESS_KEY_NORTHWEST         "Press key for NorthWest"
  IDS_PRESS_KEY_NORTH             "Press key for North"
  IDS_PRESS_KEY_NORTHEAST         "Press key for NorthEast"
  IDS_PRESS_KEY_EAST              "Press key for East"
  IDS_PRESS_KEY_SOUTHEAST         "Press key for SouthEast"
  IDS_PRESS_KEY_SOUTH             "Press key for South"
  IDS_PRESS_KEY_SOUTHWEST         "Press key for SouthWest"
  IDS_PRESS_KEY_WEST              "Press key for West"
  IDS_PRESS_KEY_FIRE              "Press key for Fire"
  IDS_NO_USERPORT_ADAPTER         "No userport joy adapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA userport joy adapter"
  IDS_PET_USERPORT_ADAPTER        "PET userport joy adapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer userport joy adapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM userport joy adapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT userport joy adapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft userport joy adapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte userport joy adapter"
  IDS_NO_SIDCART_JOY              "Disable SID cartridge joystick"
  IDS_SIDCART_JOY                 "Enable SID cartridge joystick"
  IDS_NUMPAD_AND_RCTRL            "Numpad + RCtrl"
  IDS_KEYSET_A                    "����� ������ A"
  IDS_KEYSET_B                    "����� ������ B"
  IDS_ALL_BUTTONS_AS_FIRE         "All buttons used as fire"
  IDS_NUMERIC_SEE_ABOVE           "numeric (see above)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "No button - Autofire disabled"
  IDS_ALL_FILES_FILTER            "��� ����� (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE palette files (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE snapshot files (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 files (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk image files (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "����� ������ ������� (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Zipped files (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT cartridge image files (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "Raw cartridge image files (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE flip list files (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE romset files (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE romset archives (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE keymap files (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodore emulator files (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexible"
  IDS_ADJUSTING                   "Adjusting"
  IDS_EXACT                       "Exact"
  IDS_SOUND_DRIVER_DIRECTX        "Sound driver: DirectX"
  IDS_SOUND_DRIVER_WMM            "Sound driver: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "����"
  IDS_STEREO                      "������"
  IDS_MEDIA_FILES_FILTER          "����� ����� (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    "ڱ"
  IDS_CONFIGURE_KEYSET_A          "������� ����� ������ �"
  IDS_CONFIGURE_KEYSET_B          "������� ����� ������ �"
  IDS_SAVE_MEDIA_IMAGE            "��������� ����� ����"
  IDS_S_AT_D_SPEED                "%s at %d%% speed, %d fps%s"
  IDS_TAPE                        "�������:"
  IDS_JOYSTICK_C                  "��������:"
  IDS_RECORDING                   "������\n%02d:%02d"
  IDS_PLAYBACK                    "���������������\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Unknown"
  IDS_P_NUMBER                    "<number>"
  IDS_SET_INPUT_JOYSTICK_1        "Set input device for joystick #1"
  IDS_SET_INPUT_JOYSTICK_2        "���������� ���������� ����� ��� ��������� 2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "���������� ���������� ����� ��� ��������������� ��������� 1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "���������� ���������� ����� ��� ��������������� ��������� 2"
  IDS_SAVE_SETTINGS_ON_EXIT       "��������� ��������� ����� ������"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "������� �� ��������� ��������� ��� ������"
  IDS_CONFIRM_QUIT_VICE           "����������� �������� VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "������� �� ������������ �������� VICE"
  IDS_USE_ALL_CPU_SMP             "Use all CPU on SMP systems"
  IDS_USE_FIRST_CPU_SMP           "Use only first CPU on SMP systems"
  IDS_START_VICE_FULLSCREEN_MODE  "��������� VICE � ������������� ������"
  IDS_DISABLE_DX9                 "��������� ����� ������� DirectX9"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "An unexpected error occured. Received signal %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "An unexpected error occured. Received signal %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Idle"
  IDS_SERVER_LISTENING            "Server listening"
  IDS_CONNECTED_SERVER            "Connected server"
  IDS_CONNECTED_CLIENT            "Connected client"
  IDS_INVALID_PORT_NUMBER         "�������� ����"
  IDS_ERROR_STARTING_SERVER       "An error occured starting the server."
  IDS_ERROR_CONNECTING_CLIENT     "An error occured connecting the client."
#endif
  IDS_SOUND_RECORDING_STARTED     "������ ����� ������..."
  IDS_SOUND_RECORDING_STOPPED     "������ ����� ������������..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "��������"
  IDS_NONE                        "None"
  IDS_BROWSE                      "�����..."
  IDS_SPECIFY_MIDI_IN             "������� MIDI ���������� �����"
  IDS_SPECIFY_MIDI_OUT            "������� MIDI ���������� ������"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Error saving EasyFlash crt file"
  IDS_NO_EASYFLASH_CART_INSERTED  "No EasyFlash cartridge inserted"
  IDS_DATASETTE_CAPTION           "Datasette settings"
  IDS_DATASETTE_RESET_WITH_CPU    "Reset Datasette with CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Speed of motor while reading"
  IDS_DATASETTE_DELAY_TRIGGER     "cycle(s) additional delay each trigger"
  IDS_DATASETTE_DELAY_AT_ZERO     "Datasette zero gap delay"
  IDS_TOGGLE_USEIECDEVICE         "Use IEC Device"
  IDS_SELECTDISK                  "����� �����"
  IDS_SELECTDIR                   "�����"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Real IEC device"
#endif
  IDS_SELECTNONE                  "None"
  IDS_AUTOSTART                   "Autostart"
  IDS_BROWSEDIR                   "�����..."
  IDS_TOGGLE_ATTACH_READONLY      "Attach read only"
  IDS_TOGGLE_READP00              "Read P00 files"
  IDS_TOGGLE_WRITEP00             "Write P00 files"
  IDS_TOGGLE_HIDENONP00           "Hide non-P00 files"
  IDS_JOYSTICK_CAPTION            "��������� ���������"
  IDS_JOYSTICK_IN_PORT_1          "�������� � ����� 1"
  IDS_SELECT_FIRE_BUTTON          "�������� ������ �����"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "��������� ������ Auto fire"
  IDS_AUTOFIRE_SPEED              "�������� Autofire (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "�������� � ����� 2"
  IDS_JOY_CONFIG_A                "������� ����� ������ �"
  IDS_JOY_CONFIG_B                "������� ����� ������ �"
  IDS_JOY_CALIBRATE               "Calibrate Joystick(s)"
  IDS_EXTRA_JOYSTICK_CAPTION      "��������� ��������������� ���������"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "�������� � �������������� ����� 1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "�������� � �������������� ����� 2"
  IDS_KEYSET_SW                   "South West"
  IDS_KEYSET_S                    "South"
  IDS_KEYSET_SE                   "South East"
  IDS_KEYSET_W                    "West"
  IDS_KEYSET_E                    "East"
  IDS_KEYSET_NW                   "North West"
  IDS_KEYSET_N                    "North"
  IDS_KEYSET_NE                   "North East"
  IDS_KEYSET_FIRE                 "������ Fire"
  IDS_SOUND_CAPTION               "���������� ��������� ��������� ����������"
  IDS_SOUND_DIRECTX               "������� DirectX"
  IDS_SOUND_WMM                   "WMM driver"
  IDS_SOUND_OUTPUT_MODE           "Sound output mode"
  IDS_SOUND_SAMPLE_FREQUENCY      "Sample rate :"
  IDS_SOUND_BUFFER_SIZE           "Sound Buffer Size :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Sound Fragment Size :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "�����"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "�������"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "�������"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "Synchronization Method :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "��������� ������������ ������ ������"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "��������� ����������� ROM ������"
  IDS_FULLSCREEN_DRIVER           "Driver:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdepth:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "����������:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "������� ����������:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK synchronization"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Render to DX Primary surface"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Keep aspect ratio (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "True aspect ratio"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "Value %.3f for %s is out of range, using %.3f instead"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "Value %d for %s is out of range, using %d instead"
  IDS_AUDIO_LEAK                  "Audio leak"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "������� (0..2)"
  IDS_COLORS_SATURATION           "Saturation (0..2)"
  IDS_COLORS_CONTRAST             "������������� (0..2)"
  IDS_COLORS_BRIGHTNESS           "������� (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Scanline shade (0..1)"
  IDS_CRT_BLUR                    "Blur (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Odd lines phase (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Odd lines offset (0..2)"
  IDS_VICII_PALETTE               "VICII Palette"
  IDS_VIC_PALETTE                 "VIC Palette"
  IDS_CRTC_PALETTE                "CRTC Palette"
  IDS_VDC_PALETTE                 "VDC Palette"
  IDS_TED_PALETTE                 "TED Palette"
  IDS_VICII_COLORS                "VICII Colors"
  IDS_VIC_COLORS                  "VIC Colors"
  IDS_CRTC_COLORS                 "CRTC Colors"
  IDS_VDC_COLORS                  "VDC Colors"
  IDS_TED_COLORS                  "TED Colors"
  IDS_VICII_CRT_EMULATION         "VICII CRT emulation"
  IDS_VIC_CRT_EMULATION           "VIC CRT emulation"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT emulation"
  IDS_VDC_CRT_EMULATION           "VDC CRT emulation"
  IDS_TED_CRT_EMULATION           "TED CRT emulation"
  IDS_VICII_RENDER_FILTER         "VICII Render filter"
  IDS_VIC_RENDER_FILTER           "VIC Render filter"
  IDS_CRTC_RENDER_FILTER          "CRTC Render filter"
  IDS_VDC_RENDER_FILTER           "VDC Render filter"
  IDS_TED_RENDER_FILTER           "TED Render filter"
  IDS_VICII_AUDIO_LEAK            "VICII Audio leak"
  IDS_VIC_AUDIO_LEAK              "VIC Audio leak"
  IDS_CRTC_AUDIO_LEAK             "CRTC Audio leak"
  IDS_VDC_AUDIO_LEAK              "VDC Audio leak"
  IDS_TED_AUDIO_LEAK              "TED Audio leak"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "External Palette:"
  IDS_RAM_CAPTION                 "��������� RAM"
  IDS_RAM_INIT_AT_POWERUP         "Initialization at powerup"
  IDS_RAM_VALUE_FIRST_BYTE        "Value of first byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Length of constant values"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Length of constant pattern"
  IDS_PRINTER_EMULATION           "�������� ��������"
  IDS_PRINTER_FORMFEED            "Send Formfeed"
  IDS_FILESYSTEM_PRINTER          "File system printer"
  IDS_PRINTER_DRVR                "������� ��������"
  IDS_OUTPUT                      "Output"
  IDS_OUTPUT_TO_FILE              "Output to file #"
  IDS_OUTPUT_FILE1_NAME           "Output file #1 name"
  IDS_OUTPUT_FILE2_NAME           "Output file #2 name"
  IDS_OUTPUT_FILE3_NAME           "Output file #3 name"
  IDS_ROMSET_SELECT_ARCHIVE       "Romset archive"
  IDS_ROMSET_ARCHIVE_LOAD         "Load archive"
  IDS_ROMSET_ARCHIVE_SAVE         "��������� �����"
  IDS_ROMSET_CONFIGURATION        "Configuration"
  IDS_ROMSET_ARCHIVE_APPLY        "���������"
  IDS_ROMSET_ARCHIVE_NEW          "New"
  IDS_ROMSET_ARCHIVE_DELETE       "�������"
  IDS_ROMSET_SELECT_FILE          "Romset file"
  IDS_ROMSET_FILE_LOAD            "Load romset"
  IDS_ROMSET_FILE_SAVE            "Save romset"
  IDS_CUSTOM_SPEED_CAPTION        "Custom speed"
  IDS_ENTER_CUSTOM_SPEED          "Enter custom speed [%]"
  IDS_NEW_CONFIGURATION           "New configuration"
  IDS_ENTER_CONFIGURATION_NAME    "Enter configuration name"
  IDS_RS232_CAPTION               "��������� RS232"
  IDS_RS232_DEV_1                 "RS232 device 1"
  IDS_RS232_DEV_2                 "RS232 device 2"
  IDS_RS232_DEV_3                 "RS232 device 3"
  IDS_RS232_DEV_4                 "RS232 device 4"
  IDS_NETWORK_CAPTION             "��������� ������� ����"
  IDS_CURRENT_MODE                "������� �����"
  IDS_SERVER_BIND                 "Server Bind"
  IDS_TCP_PORT                    "TCP ����"
  IDS_NETWORK_SERVER              "Start server"
  IDS_NETWORK_CLIENT              "������������ �"
  IDS_NETWORK_DISCONNECT          "Disconnect"
  IDS_CONTROL                     "Control"
  IDS_SERVER                      "������"
  IDS_CLIENT                      "Client"
  IDS_KEYBOARD                    "����������"
  IDS_JOYSTICK_1                  "�������� 1"
  IDS_JOYSTICK_2                  "�������� 2"
  IDS_DEVICES                     "����������"
  IDS_SETTINGS                    "���������"
  IDS_TOGGLE_CONSOLE_APPEND       "Append log to existing file"
  IDS_IMAGE_CONTENTS              "Image Contents"
  IDS_NEW_IMAGE                   "New Image"
  IDS_NAME                        "���"
  IDS_ID                          "ID"
  IDS_TYPE                        "Type"
  IDS_BLANK_IMAGE                 "Create Image"
  IDS_NEW_TAP_IMAGE               "New TAP Image"
  IDS_SAVE                        "���������"
  IDS_SELECT_DRIVER               "Select Driver"
  IDS_FFMPEG_SETTINGS             "FFMPEG settings"
  IDS_FORMAT                      "������"
  IDS_AUDIO_CODEC                 "����� �����"
  IDS_BITRATE                     "bitrate"
  IDS_VIDEO_CODEC                 "����� �����"
  IDS_SOUND_RECORD_CAPTION        "��������� ������ �����"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Sound Record Format"
  IDS_SOUND_RECORD_FILE_LABEL     "Sound Record File"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Character"
  IDS_COMPUTER_RESOURCES_CAPTION  "Computer resources"
  IDS_COMPUTER_RESOURCES          "Computer resources saved to romset"
  IDS_DRIVE_RESOURCES_CAPTION     "Drive resources"
  IDS_DRIVE_RESOURCES             "Drive resources saved to romset"
  IDS_SYMBOLIC                    "Symbolic"
  IDS_POSITIONAL                  "Positional"
  IDS_DUMP_KEYSET                 "Dump keyset"
  IDS_DUMP_SHORTCUTS              "Dump shortcuts"
  IDS_SYMBOLIC_US                 "Symbolic US"
  IDS_SYMBOLIC_DE                 "Symbolic DE"
  IDS_GR_SYM                      "Gr Sym."
  IDS_GR_POS                      "Gr Pos."
  IDS_UK_SYM                      "UK Sym."
  IDS_UK_POS                      "UK Pos."
  IDS_DE_SYM                      "DE Sym."
  IDS_DE_POS                      "DE Pos."
  IDS_MEMORY                      "������"
  IDS_DRIVE_TYPE                  "Drive type"
  IDS_40_TRACK_HANDLING           "40 track handling"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Never extend"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Ask on extend"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Extend on access"
  IDS_IDLE_METHOD                 "Idle method"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Trap idle"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Skip cycles"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Parallel cable"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Drive expansion"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "������"
  IDS_SID_GENGROUP1               "������ ��������������� SID"
  IDS_SID_FILTERS                 "������� SID"
  IDS_MP_FILE                     "����"
  IDS_MP_ATTACH_DISK_IMAGE        "�������� ����� �����"
  IDS_MP_DETACH_DISK_IMAGE        "������ ����� �����"
  IDS_MP_FLIP_LIST                "Flip list"
  IDS_MP_DATASETTE_CONTROL        "Datassette control"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "�������� ����� ���������..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Debug"
#ifdef DEBUG
  IDS_MP_MODE                     "Mode"
#endif
  IDS_MP_EDIT                     "������"
  IDS_MP_SNAPSHOT                 "�������"
  IDS_MP_RECORDING_START_MODE     "Recording start mode"
  IDS_MP_OPTIONS                  "�����"
  IDS_MP_REFRESH_RATE             "������� ����������"
  IDS_MP_MAXIMUM_SPEED            "������������ ��������"
  IDS_MP_VIDEO_STANDARD           "����� ��������"
  IDS_MP_DRIVE_SYNC_FACTOR        "Drive sync factor"
  IDS_MP_SETTINGS                 "���������"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Cartridge/IO settings"
  IDS_MP_LANGUAGE                 "����"
  IDS_MP_HELP                     "������"
  IDS_MP_VIEW                     "���"
  IDS_MP_WINDOW                   "����"
  IDS_MI_EXIT                     "�����"
  IDS_MI_ABOUT                    "��������� � VICE..."
  IDS_MI_PAUSE                    "�����"
  IDS_MI_EDIT_COPY                "����������"
  IDS_MI_EDIT_PASTE               "��������"
  IDS_MI_AUTOSTART                "������������� ��������� ����� �����/�������..."
  IDS_MI_RESET_HARD               "Hard"
  IDS_MI_RESET_SOFT               "Soft"
  IDS_MI_DRIVE8                   "���������� 8"
  IDS_MI_DRIVE9                   "���������� 9"
  IDS_MI_DRIVE10                  "���������� 10"
  IDS_MI_DRIVE11                  "���������� 11"
  IDS_MI_ATTACH_TAPE              "�������� ����� ������..."
  IDS_MI_DETACH_TAPE              "������ ����� ������"
  IDS_MI_DETACH_ALL               "���"
  IDS_MI_TOGGLE_SOUND             "Sound playback"
  IDS_MI_TOGGLE_DOUBLESIZE        "������� ������"
  IDS_MI_TOGGLE_DOUBLESCAN        "Double scan"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Double vertical"
  IDS_MI_DRIVE_TRUE_EMULATION     "True drive emulation"
  IDS_MI_DRIVE_SOUND_EMULATION    "Drive sound emulation"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Handle True Drive Emulation on autostart"
  IDS_MI_TOGGLE_VIDEOCACHE        "����� ���"
  IDS_MI_DRIVE_SETTINGS           "Drive settings..."
  IDS_MI_CART_SMART_ATTACH        "Smart-attach image..."
  IDS_MI_CART_ATTACH_CRT          "CRT image..."
  IDS_MI_CART_ATTACH_8KB          "Generic 8KB image..."
  IDS_MI_CART_ATTACH_16KB         "Generic 16KB image..."
  IDS_MI_CART_ATTACH_AR           "Action Replay image..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 image..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 image..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos image..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power image..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad image..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE-488 Interface image..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay image..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay image..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 interface image..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 image..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 image..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC image..."
  IDS_MI_FLIP_ADD                 "Add current image (Unit 8)"
  IDS_MI_FLIP_REMOVE              "Remove current image (Unit 8)"
  IDS_MI_FLIP_NEXT                "Attach next image (Unit 8)"
  IDS_MI_FLIP_PREVIOUS            "Attach previous image (Unit 8)"
  IDS_MI_FLIP_LOAD                "Load flip list file"
  IDS_MI_FLIP_SAVE                "Save flip list file"
  IDS_MI_DATASETTE_STOP           "����������"
  IDS_MI_DATASETTE_START          "Start"
  IDS_MI_DATASETTE_FORWARD        "��������� ������"
  IDS_MI_DATASETTE_REWIND         "��������� �����"
  IDS_MI_DATASETTE_RECORD         "������"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Reset Counter"
  IDS_MI_CART_SET_DEFAULT         "���������� �������� �� ���������"
  IDS_MI_TOGGLE_CART_RESET        "Reset on cart change"
  IDS_MI_CART_DETACH              "������ ������ ����������"
  IDS_MI_CART_FREEZE              "Cartridge freeze"
  IDS_MI_MONITOR                  "�������"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "�����"
  IDS_MI_DEBUG_MODE_HISTORY       "�������"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "History Autoplay"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Main CPU Trace"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Drive0 CPU Trace"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Drive1 CPU Trace"
#endif
  IDS_MI_SNAPSHOT_LOAD            "��������� �������..."
  IDS_MI_SNAPSHOT_SAVE            "��������� �������..."
  IDS_MI_LOADQUICK                "Load quicksnapshot image"
  IDS_MI_SAVEQUICK                "Save quicksnapshot image"
  IDS_MI_EVENT_TOGGLE_RECORD      "Start/Stop Recording History"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Start/Stop Playback History"
  IDS_MI_EVENT_SETMILESTONE       "���������� ����� ������"
  IDS_MI_EVENT_RESETMILESTONE     "Return to milestone"
  IDS_MI_EVENT_START_MODE_SAVE    "��������� ����� �������"
  IDS_MI_EVENT_START_MODE_LOAD    "��������� ������������ �������"
  IDS_MI_EVENT_START_MODE_RESET   "Start with reset"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Overwrite Playback"
  IDS_MI_EVENT_DIRECTORY          "Select History files/directory"
  IDS_MI_MEDIAFILE                "Save/stop media file..."
  IDS_MI_SOUND_RECORD_START       "�������� ���� � ����..."
  IDS_MI_SOUND_RECORD_STOP        "���������� ������ �����"
  IDS_MI_REFRESH_RATE_AUTO        "����"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "No limit"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Custom"
  IDS_MI_TOGGLE_WARP_MODE         "Warp mode"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Always on Top"
  IDS_MI_TOGGLE_DX9DISABLE        "��������� ����� ������� DirectX9"
  IDS_MI_SWAP_JOYSTICK            "Swap joysticks"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Swap userport joysticks"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Allow opposite directions"
  IDS_MI_JOYKEYS_TOGGLE           "Enable Joy Keys"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtual device traps"
  IDS_MI_MOUSE                    "Grab mouse events"
  IDS_MI_C64MODEL_SETTINGS        "C64 model settings..."
  IDS_MI_AUTOSTART_SETTINGS       "��������� �����������..."
  IDS_MI_VIDEO_SETTINGS           "��������� �����..."
  IDS_MI_DEVICEMANAGER            "Peripheral settings..."
  IDS_MI_JOY_SETTINGS             "��������� ���������..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Userport joystick settings..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sidcart joystick settings..."
  IDS_MI_KEYBOARD_SETTINGS        "��������� ����������..."
  IDS_MI_SOUND_SETTINGS           "��������� �����..."
  IDS_MI_ROM_SETTINGS             "��������� ���..."
  IDS_MI_RAM_SETTINGS             "��������� RAM..."
  IDS_MI_DATASETTE_SETTINGS       "Datasette settings..."
  IDS_MI_VICII_SETTINGS           "��������� VIC-II..."
  IDS_MI_MOUSE_SETTINGS           "Mouse settings..."
  IDS_MI_SID_SETTINGS             "��������� SID..."
  IDS_MI_RS232_SETTINGS           "��������� RS232..."
  IDS_MI_REU_SETTINGS             "REU settings..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM settings..."
  IDS_MI_RAMCART_SETTINGS         "RamCart settings..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box settings..."
  IDS_MI_EXPERT_SETTINGS          "Expert Cartridge settings..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC settings..."
  IDS_MI_MMC64_SETTINGS           "MMC64 settings..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay settings..."
  IDS_MI_RR_SETTINGS              "Retro Replay settings..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice settings..."
  IDS_MI_MIDI_SETTINGS            "MIDI settings..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX settings..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC settings..."
  IDS_MI_LIGHTPEN_SETTINGS        "Lightpen settings..."
  IDS_MI_IDE64_SETTINGS           "IDE64 settings..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernet settings..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA settings..."
  IDS_MI_RS232USER_SETTINGS       "RS232 userport settings..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash settings..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander settings..."
  IDS_MI_TOGGLE_SFX_SS            "Enable the SFX Sound Sampler cartridge"
  IDS_MI_TOGGLE_USERPORT_RTC      "Enable the Userport RTC expansion"
  IDS_MI_SETTINGS_SAVE_FILE       "��������� ������� ��������� � ��������� �����"
  IDS_MI_SETTINGS_LOAD_FILE       "��������� ��������� �� ���������� �����"
  IDS_MI_SETTINGS_SAVE            "��������� ������� ���������"
  IDS_MI_SETTINGS_LOAD            "��������� ����������� ���������"
  IDS_MI_SETTINGS_DEFAULT         "���������� ��������� �� ���������"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "��������� ��������� ����� ������"
  IDS_MI_CONFIRM_ON_EXIT          "����������� �������� VICE"
  IDS_MI_LANG_EN                  "����������"
  IDS_MI_LANG_DA                  "�������"
  IDS_MI_LANG_DE                  "��������"
  IDS_MI_LANG_ES                  "���������"
  IDS_MI_LANG_FR                  "�����������"
  IDS_MI_LANG_HU                  "����������"
  IDS_MI_LANG_IT                  "�����������"
  IDS_MI_LANG_KO                  "Korean"
  IDS_MI_LANG_NL                  "�����������"
  IDS_MI_LANG_PL                  "��������"
  IDS_MI_LANG_RU                  "�������"
  IDS_MI_LANG_SV                  "��������"
  IDS_MI_LANG_TR                  "��������"
  IDS_MI_CMDLINE                  "����� ��������� ������"
  IDS_MI_CONTRIBUTORS             "Contributors"
  IDS_MI_LICENSE                  "��������"
  IDS_MI_WARRANTY                 "��� ��������!"
  IDS_MI_TOGGLE_FULLSCREEN        "�� ���� �����"
  IDS_MI_SIDCART_SETTINGS         "SID cart settings..."
  IDS_MI_MON_OPEN                 "�������"
  IDS_MI_MON_SAVE                 "���������"
  IDS_MI_MON_PRINT                "������"
  IDS_MI_MON_EXIT                 "�����        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Stop Debug"
  IDS_MI_MON_STOP_EXEC            "���������� ����������"
  IDS_MI_MON_STEP_INTO            "Step into"
  IDS_MI_MON_STEP_OVER            "Step over"
  IDS_MI_MON_SKIP_RETURN          "Step until return"
  IDS_MI_MON_GOTO_CURSOR          "Go to cursor"
  IDS_MI_MON_EVAL                 "Evaluate"
  IDS_MI_MON_CURRENT              "Current instruction"
  IDS_MI_MON_WND_EVAL             "Evaluation window"
  IDS_MI_MON_WND_REG              "Register window"
  IDS_MI_MON_WND_MEM              "Memory window"
  IDS_MI_MON_WND_DIS              "Disassembly window"
  IDS_MI_MON_WND_CONSOLE          "Console window"
  IDS_MI_MON_COMPUTER             "���������"
  IDS_MI_MON_DRIVE8               "���������� 8"
  IDS_MI_MON_DRIVE9               "���������� 9"
  IDS_MI_MON_CASCADE              "Cascade"
  IDS_MI_MON_TILE_VERT            "Tile vertically"
  IDS_MI_MON_TILE_HORIZ           "Tile horizontally"
  IDS_MI_MON_ARRANGE_ICONS        "����������� ������"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE-fel!"
  IDS_VICE_INFORMATION            "VICE-information"
  IDS_VICE_QUESTION               "VICE-fr�ga"
  IDS_FFMPEG_DLL_MISMATCH         "Versionen p� din ffmpeg-dll st�mmer inte."
  IDS_DIRECTDRAW_ERROR            "DirectDraw-fel: Kod:%8x Fel:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Kan inte spara inst�llningar."
  IDS_CANNOT_LOAD_SETTINGS        "Kan inte l�sa inst�llningar."
  IDS_DEFAULT_SETTINGS_RESTORED   "F�rvalda inst�llningar �terst�llda."
  IDS_CANNOT_ATTACH_FILE          "Kan inte ansluta filen"
  IDS_START_MONITOR               "%s\n\nStarta monitor? (Nej kommer att �terst�lla, avbryt forts�tter)"
  IDS_VICE_CPU_JAM                "VICE CPU-blockering"
  IDS_EXTEND_TO_40_TRACKS         "Ut�ka avbildning till 40-sp�rsformat?"
  IDS_DETACHED_DEVICE_S           "Kopplade fr�n enhet %s"
  IDS_ATTACHED_S_TO_DEVICE_S      "Ansl�t %s till enhet %s"
  IDS_DETACHED_TAPE               "Kopplade fr�n band"
  IDS_HISTORY_RECORDED_UNKNOWN    "Historik inspelad med ok�nd version"
  IDS_HISTORY_RECORDED_VICE_S     "Historik inspelad med VICE-%s"
  IDS_PAUSED                      "pausad"
  IDS_FRAME_NUMBER                "ram nr"
  IDS_RESUMED                     "�terupptagen"
  IDS_REALLY_EXIT                 "Vill du verkligen avsluta?\n\nAlla data i emulerat RAM kommer f�rloras."
  IDS_TFE_PROBLEM                 "St�d f�r TFE/RR-Net �r inte tillg�ngligt p� ditt system,\nviktiga delar saknas. Se supportsidan i VICEs\nkunskapsdatabas\n\n      http://vicekb.trikaliotis.net/13-005\n\nf�r m�jliga orsaker och hur du aktivera n�tverk i VICE."
  IDS_TFE_RRNET_SUPPORT           "St�d f�r TFE/RR-Net"
  IDS_CANNOT_AUTOSTART_FILE       "Kan inte autostarta angiven fil."
  IDS_ATTACHED_TAPE_S             "Ansl�t band %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Inst�llningarna har sparats."
  IDS_SETTINGS_LOADED_SUCCESS     "Inst�llningarna har l�sts in."
  IDS_ATTACH_DISK_IMAGE           "Anslut diskettavbildningsfil"
  IDS_ATTACH_TAPE_IMAGE           "Anslut bandavbildningsfil"
  IDS_AUTOSTART_IMAGE             "Autostarta disk-/bandavbildningsfil"
  IDS_INVALID_CARTRIDGE           "Ogiltig insticksmodulfil"
  IDS_BAD_CARTRIDGE_CONFIG        "Felaktiga insticksmodulsinst�llningar i UI!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Ogiltig insticksmodulfil"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "Logga konsolutdataavbildning"
  IDS_LOG_FILES_TYPE              "VICE konsolloggfiler (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Kan inte skriva loggfil \042%s\042."
  IDS_LOAD_FLIP_LIST_FILE         "L�s vallistefil"
  IDS_CANNOT_READ_FLIP_LIST       "Kunde inte l�sa vallistefil"
  IDS_SAVE_FLIP_LIST_FILE         "Spara vallistefil"
  IDS_CANNOT_WRITE_FLIP_LIST      "Kan inte skriva vallistefil"
  IDS_SELECT_KEYMAP_FILE          "V�lj tangentbordsfil"
  IDS_SAVE_KEYMAP_FILE            "Spara tangentbordsfil"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Kan inte skriva tangentbordsfil"
  IDS_SAVE_CONFIG_FILE            "Spara inst�llningsfil"
  IDS_LOAD_CONFIG_FILE            "L�s inst�llningsfil"
  IDS_MAPPING                     "Koppling"
  IDS_KEYBOARD_SETTINGS           "Tangentbordsinst�llningar"
  IDS_ATTACH                      "Anslut"
  IDS_PLEASE_ENTER_A_FILENAME     "Ange filnamn."
  IDS_OVERWRITE_EXISTING_IMAGE    "Skriva �ver existerande avbildning?"
  IDS_CANNOT_CREATE_IMAGE         "Kan inte skapa avbildningsfil!"
  IDS_COMMAND_LINE_OPTIONS        "Kommandoradsflaggor"
  IDS_COMMAND_OPTIONS_AVAIL       "Vilka kommandoradsflaggor �r tillg�ngliga?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Drivrutin har inte valts eller vald drivrutin st�ds inte"
  IDS_CANT_WRITE_SCREENSHOT_S     "Kan inte skriva sk�rmdumpsfil \042%s\042."
  IDS_AUTOSTART_DISK_IMAGE        "Autostarta diskettavbildning"
  IDS_SELECT_FS_DIRECTORY         "Ange filsystemskatalog"
  IDS_PRINTER_USERPORT            "Skrivare anv�ndarport"
  IDS_PRINTER_4                   "Skrivare 4"
  IDS_PRINTER_5                   "Skrivare 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "Enhet 8"
  IDS_DRIVE_9                     "Enhet 9"
  IDS_DRIVE_10                    "Enhet 10"
  IDS_DRIVE_11                    "Enhet 11"
  IDS_PERIPHERAL_SETTINGS         "Inst�llningar f�r kringutrustning"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Kan inte skriva �gonblicksbildfil."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Kan inte l�sa in �gonblicksbildfil"
  IDS_LOAD_S_ROM_IMAGE            "L�s %s-ROM-fil"
  IDS_SELECT_ROMSET_ARCHIVE       "V�lj ROM-upps�ttningsarkiv"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Kunde inte l�sa ROM-upps�ttningsarkiv!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Kan inte spara ROM-upps�ttningsarkiv!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Kan inte l�sa in ROM-upps�ttningsfil!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Kunde inte spara ROM-upps�ttningsfil!"
  IDS_SELECT_ROMSET_FILE          "V�lj ROM-upps�ttningsfil"
  IDS_ROMSET                      "ROM-upps�ttning"
  IDS_COMPUTER                    "Dator"
  IDS_DRIVE                       "Enhet"
  IDS_ROM_SETTINGS                "ROM-inst�llningar"
  IDS_SAVE_SNAPSHOT_IMAGE         "Spara �gonblicksbildfil"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Kan inte skriva �gonblicksbildfil \042%s\042."
  IDS_LOAD_SNAPSHOT_IMAGE         "L�ser in �gonblicksbild"
  IDS_COULD_NOT_LOAD_PALETTE      "Kunde inte l�sa in palettfil."
  IDS_LOAD_VICE_PALETTE_FILE      "L�s in VICE-palettfil"
  IDS_FULLSCREEN                  "Fullsk�rm/DirectX"
  IDS_CRT_EMULATION               "CRT-emulering"
  IDS_RENDER_FILTER               "Rendrerarfilter"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "Grafikinst�llningar"
  IDS_FILE_SYSTEM                 "Filsystem"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "�kta IEC-enhet"
#endif
  IDS_RS232_DEVICE_I              "RS232-enhet %i"
  IDS_ATTACH_CRT_CART_IMAGE       "Anslut CRT-insticksmodulfil"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "Anslut r� 8KB-insticksmodulavbildning"
  IDS_ATTACH_RAW_16KB_CART_IMG    "Anslut r� 16KB-insticksmodulavbildning"
  IDS_ATTACH_AR_CART_IMAGE        "Anslut r� 32KB-Action Replay-insticksmodulfil"
  IDS_ATTACH_AR3_CART_IMAGE       "Anslut r� 16KB-Action Replay MK3-insticksmodulfil"
  IDS_ATTACH_AR4_CART_IMAGE       "Anslut r� 32KB-Action Replay MK4-insticksmodulfil"
  IDS_ATTACH_STARDOS_CART_IMAGE   "Anslut r� 16KB Stardos-insticksmodulfil"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "Anslut r� 32KB Atomic Power-insticksmodulfil"
  IDS_ATTACH_EPYX_FL_CART_IMG     "Anslut r� 8KB Epyx FastLoad-insticksmodulfil"
  IDS_ATTACH_IEEE488_CART_IMG     "Anslut IEEE-488-gr�nssnittsavbildningsfil"
  IDS_ATTACH_RETRO_R_CART_IMG     "Anslut r� 64KB-Retro Replay-insticksmodulfil"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "Anslut r� 512kB MMC Replay-avbildningsfil"
  IDS_ATTACH_IDE64_CART_IMAGE     "Anslut r� 64KB IDE64-insticksmodulfil"
  IDS_ATTACH_SS4_CART_IMAGE       "Anslut r� 32KB Super Snapshot V4-insticksmodulfil"
  IDS_ATTACH_SS5_CART_IMAGE       "Anslut r� 64KB-Super Snapshot V5-insticksmodulfil"
  IDS_ATTACH_STB_CART_IMAGE       "Anslut r� Strucured Basic-insticksmodulfil"
  IDS_SELECT_CARTRIDGE_IMAGE      "V�lj insticksmodulfil"
  IDS_MODEL                       "Modell"
  IDS_DRIVE_SETTINGS              "Diskettenhetsinst�llningar"
  IDS_SELECT_START_SNAP_EVENT     "V�lj start�gonblicksmodul f�r h�ndelsehistorik"
  IDS_SELECT_END_SNAP_EVENT       "V�lj slut�gonblicksbild f�r h�ndelsehistorik"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Version %s *INSTABIL* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Version %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "Bidragsl�mnare till VICE"
  IDS_WHO_MADE_WHAT               "Vem gjorde vad?"
  IDS_LICENSE                     "Licens"
  IDS_NO_WARRANTY                 "Ingen garanti!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE distribueras UTAN N�GON SOM HELST GARANTI!"
  IDS_PRESS_KEY_NORTHWEST         "Tryck tangent f�r nordv�st"
  IDS_PRESS_KEY_NORTH             "Tryck tangent f�r nord"
  IDS_PRESS_KEY_NORTHEAST         "Tryck tangent f�r nord�st"
  IDS_PRESS_KEY_EAST              "Tryck tangent f�r �st"
  IDS_PRESS_KEY_SOUTHEAST         "Tryck tangent f�r syd�st"
  IDS_PRESS_KEY_SOUTH             "Tryck tangent f�r syd"
  IDS_PRESS_KEY_SOUTHWEST         "Tryck tangent f�r sydv�st"
  IDS_PRESS_KEY_WEST              "Tryck tangent f�r v�st"
  IDS_PRESS_KEY_FIRE              "Tryck tangent f�r avtryckare"
  IDS_NO_USERPORT_ADAPTER         "Ingen anv�ndarportsspakadapter"
  IDS_CGA_USERPORT_ADAPTER        "CGA-anv�ndarportsspakadapter"
  IDS_PET_USERPORT_ADAPTER        "PET-anv�ndarportsspakadapter"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer-anv�ndarportsspakadapter"
  IDS_OEM_USERPORT_ADAPTER        "OEM-anv�ndarportsspakadapter"
  IDS_HIT_USERPORT_ADAPTER        "HIT-anv�ndarportsspakadapter"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft anv�ndarportsspakadapter"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte anv�ndarportsspakadapter"
  IDS_NO_SIDCART_JOY              "Inaktivera SID-insticksmodul-styrspak"
  IDS_SIDCART_JOY                 "Aktivera SID-insticksmodul-styrspak"
  IDS_NUMPAD_AND_RCTRL            "Numerisk knappsats + h�ger Ctrl"
  IDS_KEYSET_A                    "Upps�ttning A"
  IDS_KEYSET_B                    "Upps�ttning B"
  IDS_ALL_BUTTONS_AS_FIRE         "Alla knappar anv�nds som avtryckare"
  IDS_NUMERIC_SEE_ABOVE           "numerisk (se ovan)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "Ingen knapp - Autofire inaktiverad"
  IDS_ALL_FILES_FILTER            "Alla filer (*.)"
  IDS_PALETTE_FILES_FILTER        "VICE-palettfiler (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE-�gonblicksbildfiler (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM-filer (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64-filer (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Diskettavbildningar (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Bandavbildningar (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Zippade filer (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT-insticksmodulfiler (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "R�a insticksmodulfiler (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE-vallistefiler (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE-ROM-upps�ttningsfiler (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE-ROM-upps�ttningsarkiv (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE-tangentbordsfiler (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodoreemulatorfiler (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Flexibel"
  IDS_ADJUSTING                   "Anpassande"
  IDS_EXACT                       "Exakt"
  IDS_SOUND_DRIVER_DIRECTX        "Ljuddrivrutin: DirectX"
  IDS_SOUND_DRIVER_WMM            "Ljuddrivrutin: WMM"
  IDS_SYSTEM                      "System"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Mediafiler (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Konfigurera upps�ttning A"
  IDS_CONFIGURE_KEYSET_B          "Konfigurera upps�ttning B"
  IDS_SAVE_MEDIA_IMAGE            "Spara mediafil"
  IDS_S_AT_D_SPEED                "%s med %d%% hastighet, %d b/s%s"
  IDS_TAPE                        "Band:"
  IDS_JOYSTICK_C                  "Styrspak:"
  IDS_RECORDING                   "Spelar in\n%02d:%02d"
  IDS_PLAYBACK                    "Spelar upp\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Ok�nd"
  IDS_P_NUMBER                    "<nummer>"
  IDS_SET_INPUT_JOYSTICK_1        "V�lj indataenhet f�r spelport 1"
  IDS_SET_INPUT_JOYSTICK_2        "V�lj indataenhet f�r spelport 2"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "V�lj indataenhet f�r extra spelport 1"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "V�lj indataenhet f�r extra spelport 2"
  IDS_SAVE_SETTINGS_ON_EXIT       "Spara inst�llningar vid avslut"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "Spara aldrig inst�llningar vid avslut"
  IDS_CONFIRM_QUIT_VICE           "Bekr�fta f�r att avsluta VICE"
  IDS_NO_CONFIRM_QUIT_VICE        "Bekr�fta inte f�r att avsluta VICE"
  IDS_USE_ALL_CPU_SMP             "Anv�nd Alla CPU:er p� SMP-system"
  IDS_USE_FIRST_CPU_SMP           "Anv�nd bara f�rsta CPU:n p� SMP-system"
  IDS_START_VICE_FULLSCREEN_MODE  "Starta VICE i fullsk�rmsl�ge"
  IDS_DISABLE_DX9                 "Inaktivera DirectX9-grafikdrivrutin"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Ett ok�nt fel uppstod. Tog emot signal %d (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Ett ok�nt fel uppstod. Tog emot signal %d."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "V�ntar"
  IDS_SERVER_LISTENING            "Servern lyssnar"
  IDS_CONNECTED_SERVER            "Ansluten server"
  IDS_CONNECTED_CLIENT            "Ansluten klient"
  IDS_INVALID_PORT_NUMBER         "Ogiltigt portnummer"
  IDS_ERROR_STARTING_SERVER       "Fel vid start av servern."
  IDS_ERROR_CONNECTING_CLIENT     "Fel vid anslutning til klienten."
#endif
  IDS_SOUND_RECORDING_STARTED     "Ljudinspelning startad..."
  IDS_SOUND_RECORDING_STOPPED     "Ljudinspelning stoppad..."
  IDS_OK                          "OK"
  IDS_CANCEL                      "Avbryt"
  IDS_NONE                        "Ingen"
  IDS_BROWSE                      "Bl�ddra..."
  IDS_SPECIFY_MIDI_IN             "Ange enhet f�r MIDI-in"
  IDS_SPECIFY_MIDI_OUT            "Ange enhet f�r MIDI-ut"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "Fel vid skrivning av EasyFlash-crt-fil."
  IDS_NO_EASYFLASH_CART_INSERTED  "EasyFlash-insticksmodul har inte satts in"
  IDS_DATASETTE_CAPTION           "Datasetteinst�llningar"
  IDS_DATASETTE_RESET_WITH_CPU    "Nollst�ll Datasette med CPU"
  IDS_DATASETTE_MOTOR_GROUP       "Motorhastighet vid l�sning"
  IDS_DATASETTE_DELAY_TRIGGER     "cykler ytterligare f�rdr�jning per puls"
  IDS_DATASETTE_DELAY_AT_ZERO     "Datasette nollgapsf�rdr�jning"
  IDS_TOGGLE_USEIECDEVICE         "Anv�nd IEC-enhet"
  IDS_SELECTDISK                  "Diskavbildning"
  IDS_SELECTDIR                   "Katalog"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "�kta IEC-enhet"
#endif
  IDS_SELECTNONE                  "Ingen"
  IDS_AUTOSTART                   "Starta automatiskt"
  IDS_BROWSEDIR                   "Bl�ddra..."
  IDS_TOGGLE_ATTACH_READONLY      "Anslut skrivskyddat"
  IDS_TOGGLE_READP00              "L�s P00-filer"
  IDS_TOGGLE_WRITEP00             "Skriv P00-filer"
  IDS_TOGGLE_HIDENONP00           "G�m icke-P00-filer"
  IDS_JOYSTICK_CAPTION            "Inst�llningar f�r styrspak"
  IDS_JOYSTICK_IN_PORT_1          "Styrspak i spelport 1"
  IDS_SELECT_FIRE_BUTTON          "V�lj avtryckarknapp"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Inst�llningar f�r autofire"
  IDS_AUTOFIRE_SPEED              "Hastighet f�r autofire (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Styrspak i spelport 2"
  IDS_JOY_CONFIG_A                "Konfigurera upps�ttning A"
  IDS_JOY_CONFIG_B                "Konfigurera upps�ttning B"
  IDS_JOY_CALIBRATE               "Kalibrera styrspak(ar)"
  IDS_EXTRA_JOYSTICK_CAPTION      "Inst�llningar f�r extra styrspak"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Styrspak i extraport #1"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Styrspak i extraport #2"
  IDS_KEYSET_SW                   "Sydv�st"
  IDS_KEYSET_S                    "Syd"
  IDS_KEYSET_SE                   "Syd�st"
  IDS_KEYSET_W                    "V�st"
  IDS_KEYSET_E                    "�st"
  IDS_KEYSET_NW                   "Nordv�st"
  IDS_KEYSET_N                    "Nord"
  IDS_KEYSET_NE                   "Nord�st"
  IDS_KEYSET_FIRE                 "Avtryckarknapp"
  IDS_SOUND_CAPTION               "Inst�llningar f�r ljudenheter"
  IDS_SOUND_DIRECTX               "DirectX-drivrutiner"
  IDS_SOUND_WMM                   "WMM-drivrutin"
  IDS_SOUND_OUTPUT_MODE           "Utdatal�ge f�r ljud"
  IDS_SOUND_SAMPLE_FREQUENCY      "Samplingshastighet :"
  IDS_SOUND_BUFFER_SIZE           "Ljudbuffertstorlek :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Storlek p� ljudfragment :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "Liten"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Medium"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "Stor"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "Synkroniseringsmetod :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Spara anslutna diskettavbildningar"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Spara inl�sta ROM-avbildningar"
  IDS_FULLSCREEN_DRIVER           "Drivrutin:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bitdjup:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "Uppl�sning:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Uppdateringshastighet:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK-synkronisering"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "Rendrera till DXs prim�ra yta"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "Beh�ll bredd-/h�jdf�rh�llande (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "�kta bredd-/h�jdf�rh�llande"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "V�rdet %.3f f�r %s �r utanf�r gr�nserna, anv�nder %.3f ist�llet"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "V�rdet %d f�r %s �r utanf�r gr�nserna, anv�nder %d ist�llet"
  IDS_AUDIO_LEAK                  "Audiol�ckage"
  IDS_COLORS_GAMMA                "Gamma (0..4)"
  IDS_COLORS_TINT                 "F�rgton (0..2)"
  IDS_COLORS_SATURATION           "M�ttnad (0..2)"
  IDS_COLORS_CONTRAST             "Kontrast (0..2)"
  IDS_COLORS_BRIGHTNESS           "Ljusstyrka (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Skuggning av skannlinjer (0..1)"
  IDS_CRT_BLUR                    "Suddighet (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Fas f�r udda linjer (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Utj�mning f�r udda linjer (0..2)"
  IDS_VICII_PALETTE               "VICII-palett"
  IDS_VIC_PALETTE                 "VIC-palett"
  IDS_CRTC_PALETTE                "CRTC-palett"
  IDS_VDC_PALETTE                 "VDC-palett"
  IDS_TED_PALETTE                 "TED-palett"
  IDS_VICII_COLORS                "F�rger f�r VICII"
  IDS_VIC_COLORS                  "F�rger f�r VIC"
  IDS_CRTC_COLORS                 "F�rger f�r CRTC"
  IDS_VDC_COLORS                  "F�rger f�r VDC"
  IDS_TED_COLORS                  "F�rger f�r TED"
  IDS_VICII_CRT_EMULATION         "CRT-emulering f�r VICII"
  IDS_VIC_CRT_EMULATION           "CRT-emulering f�r VIC"
  IDS_CRTC_CRT_EMULATION          "CRT-emulering f�r CRTC"
  IDS_VDC_CRT_EMULATION           "CRT-emulering f�r VDC"
  IDS_TED_CRT_EMULATION           "CRT-emulering f�r TED"
  IDS_VICII_RENDER_FILTER         "Rendrerarfilter f�r VICII"
  IDS_VIC_RENDER_FILTER           "Rendrerarfilter f�r VIC"
  IDS_CRTC_RENDER_FILTER          "Rendrerarfilter f�r CRTC"
  IDS_VDC_RENDER_FILTER           "Rendrerarfilter f�r VDC"
  IDS_TED_RENDER_FILTER           "Rendrerarfilter f�r TED"
  IDS_VICII_AUDIO_LEAK            "VICII audiol�ckage"
  IDS_VIC_AUDIO_LEAK              "VIC audiol�ckage"
  IDS_CRTC_AUDIO_LEAK             "CRTC audiol�ckage"
  IDS_VDC_AUDIO_LEAK              "VDC audiol�ckage"
  IDS_TED_AUDIO_LEAK              "TED audiol�ckage"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Extern palett:"
  IDS_RAM_CAPTION                 "RAM-inst�llningar"
  IDS_RAM_INIT_AT_POWERUP         "Initiering vid str�mp�slag"
  IDS_RAM_VALUE_FIRST_BYTE        "V�rde p� f�rsta byte"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "L�ngd p� konstanta v�rden"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "L�ngd p� konstant m�nster"
  IDS_PRINTER_EMULATION           "Skrivaremulering"
  IDS_PRINTER_FORMFEED            "S�nd sidmatning"
  IDS_FILESYSTEM_PRINTER          "Filsystemsskrivare"
  IDS_PRINTER_DRVR                "Skrivardrivrutin"
  IDS_OUTPUT                      "Utdata"
  IDS_OUTPUT_TO_FILE              "Utdata till fil"
  IDS_OUTPUT_FILE1_NAME           "Namn p� utdatafil 1"
  IDS_OUTPUT_FILE2_NAME           "Namn p� utdatafil 2"
  IDS_OUTPUT_FILE3_NAME           "Namn p� utdatafil 3"
  IDS_ROMSET_SELECT_ARCHIVE       "ROM-upps�ttningsarkiv"
  IDS_ROMSET_ARCHIVE_LOAD         "L�s in arkiv"
  IDS_ROMSET_ARCHIVE_SAVE         "Spara arkiv"
  IDS_ROMSET_CONFIGURATION        "inst�llningar"
  IDS_ROMSET_ARCHIVE_APPLY        "Verkst�ll"
  IDS_ROMSET_ARCHIVE_NEW          "Skapa"
  IDS_ROMSET_ARCHIVE_DELETE       "Ta bort"
  IDS_ROMSET_SELECT_FILE          "ROM-upps�ttningsfil"
  IDS_ROMSET_FILE_LOAD            "L�s ROM-upps�ttning"
  IDS_ROMSET_FILE_SAVE            "Spara ROM-upps�ttning"
  IDS_CUSTOM_SPEED_CAPTION        "Egen hastighet"
  IDS_ENTER_CUSTOM_SPEED          "Ange egen hastighet [%]"
  IDS_NEW_CONFIGURATION           "Nya inst�llningar"
  IDS_ENTER_CONFIGURATION_NAME    "Ange namn p� inst�llningar"
  IDS_RS232_CAPTION               "RS232-inst�llningar"
  IDS_RS232_DEV_1                 "RS232-enhet 1"
  IDS_RS232_DEV_2                 "RS232-enhet 2"
  IDS_RS232_DEV_3                 "RS232-enhet 3"
  IDS_RS232_DEV_4                 "RS232-enhet 4"
  IDS_NETWORK_CAPTION             "Inst�llningar f�r n�tverksspel"
  IDS_CURRENT_MODE                "Nuvarande l�ge"
  IDS_SERVER_BIND                 "Serverbindning"
  IDS_TCP_PORT                    "TCP-port"
  IDS_NETWORK_SERVER              "Starta server"
  IDS_NETWORK_CLIENT              "Anslut till"
  IDS_NETWORK_DISCONNECT          "Koppla fr�n"
  IDS_CONTROL                     "Styrning"
  IDS_SERVER                      "Server"
  IDS_CLIENT                      "Klient"
  IDS_KEYBOARD                    "Tangentbord"
  IDS_JOYSTICK_1                  "Styrspak 1"
  IDS_JOYSTICK_2                  "Styrspak 2"
  IDS_DEVICES                     "Enheter"
  IDS_SETTINGS                    "Inst�llningar"
  IDS_TOGGLE_CONSOLE_APPEND       "L�gg till log i existerande fil"
  IDS_IMAGE_CONTENTS              "Inneh�ll i avbildning"
  IDS_NEW_IMAGE                   "Ny avbildning"
  IDS_NAME                        "Namn"
  IDS_ID                          "ID"
  IDS_TYPE                        "Typ"
  IDS_BLANK_IMAGE                 "Skapa avbildning"
  IDS_NEW_TAP_IMAGE               "Ny TAP-avbildning"
  IDS_SAVE                        "Spara"
  IDS_SELECT_DRIVER               "V�lj drivrutin"
  IDS_FFMPEG_SETTINGS             "FFMPEG-inst�llningar"
  IDS_FORMAT                      "Format"
  IDS_AUDIO_CODEC                 "Ljudomkodare"
  IDS_BITRATE                     "bithastighet"
  IDS_VIDEO_CODEC                 "Videoomkodare"
  IDS_SOUND_RECORD_CAPTION        "Inst�llningar f�r ljudinspelning"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Format f�r ljudinspelning"
  IDS_SOUND_RECORD_FILE_LABEL     "Ljudinspelningsfil"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Teckengenerator"
  IDS_COMPUTER_RESOURCES_CAPTION  "Datorresurser"
  IDS_COMPUTER_RESOURCES          "Datorresurser lagrade i ROM-upps�ttning"
  IDS_DRIVE_RESOURCES_CAPTION     "Enhetsresurser"
  IDS_DRIVE_RESOURCES             "Enhetsresurser lagrade i ROM-upps�ttning"
  IDS_SYMBOLIC                    "Symbolisk"
  IDS_POSITIONAL                  "Positionsriktig"
  IDS_DUMP_KEYSET                 "Spara tangentbord"
  IDS_DUMP_SHORTCUTS              "Spara genv�gar"
  IDS_SYMBOLIC_US                 "Symbolisk US"
  IDS_SYMBOLIC_DE                 "Symbolisk DE"
  IDS_GR_SYM                      "Gr sym."
  IDS_GR_POS                      "Gr pos."
  IDS_UK_SYM                      "UK sym."
  IDS_UK_POS                      "UK pos."
  IDS_DE_SYM                      "DE sym."
  IDS_DE_POS                      "DE pos."
  IDS_MEMORY                      "Minne"
  IDS_DRIVE_TYPE                  "Enhetstyp"
  IDS_40_TRACK_HANDLING           "Hantering av 40 sp�r"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Ut�ka aldrig"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Fr�ga vid ut�kning"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Ut�ka vid �tkomst"
  IDS_IDLE_METHOD                 "Pausmetod"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "F�nga inaktiva"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Hoppa cykler"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Parallellkabel"
  IDS_STANDARD                    "Standard"
  IDS_DRIVE_EXPANSION             "Enhetsut�kning"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Minne"
  IDS_SID_GENGROUP1               "SID-modell"
  IDS_SID_FILTERS                 "SID-filter"
  IDS_MP_FILE                     "Arkiv"
  IDS_MP_ATTACH_DISK_IMAGE        "Anslut diskettavbildningsfil"
  IDS_MP_DETACH_DISK_IMAGE        "Koppla fr�n diskettavbildningsfil"
  IDS_MP_FLIP_LIST                "Vallista"
  IDS_MP_DATASETTE_CONTROL        "Datasettestyrning"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Anslut insticksmodulfil..."
  IDS_MP_RESET                    "�terst�ll"
  IDS_MP_DEBUG                    "Fels�k"
#ifdef DEBUG
  IDS_MP_MODE                     "L�ge"
#endif
  IDS_MP_EDIT                     "Redigera"
  IDS_MP_SNAPSHOT                 "�gonblicksbild"
  IDS_MP_RECORDING_START_MODE     "Spelar in startl�ge"
  IDS_MP_OPTIONS                  "Alternativ"
  IDS_MP_REFRESH_RATE             "Uppdateringshastighet"
  IDS_MP_MAXIMUM_SPEED            "Maximal hastighet"
  IDS_MP_VIDEO_STANDARD           "TV-standard"
  IDS_MP_DRIVE_SYNC_FACTOR        "Synkfaktor f�r diskettstation"
  IDS_MP_SETTINGS                 "Inst�llningar"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Modul/IO-inst�llningar"
  IDS_MP_LANGUAGE                 "Spr�k"
  IDS_MP_HELP                     "Hj�lp"
  IDS_MP_VIEW                     "Visa"
  IDS_MP_WINDOW                   "F�nster"
  IDS_MI_EXIT                     "Avsluta"
  IDS_MI_ABOUT                    "Om VICE..."
  IDS_MI_PAUSE                    "Paus"
  IDS_MI_EDIT_COPY                "Kopiera"
  IDS_MI_EDIT_PASTE               "Klistra in"
  IDS_MI_AUTOSTART                "Autostarta disk-/bandavbildningsfil..."
  IDS_MI_RESET_HARD               "H�rd"
  IDS_MI_RESET_SOFT               "Mjuk"
  IDS_MI_DRIVE8                   "Enhet 8"
  IDS_MI_DRIVE9                   "Enhet 9"
  IDS_MI_DRIVE10                  "Enhet 10"
  IDS_MI_DRIVE11                  "Enhet 11"
  IDS_MI_ATTACH_TAPE              "Anslut bandavbildningsfil..."
  IDS_MI_DETACH_TAPE              "Koppla fr�n bandavbildningsfil"
  IDS_MI_DETACH_ALL               "Alla"
  IDS_MI_TOGGLE_SOUND             "Aktivera ljud�tergivning"
  IDS_MI_TOGGLE_DOUBLESIZE        "Dubbel storlek"
  IDS_MI_TOGGLE_DOUBLESCAN        "Dubbelskanning"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "Dubbel vertikal"
  IDS_MI_DRIVE_TRUE_EMULATION     "�kta diskettenhetsemulering"
  IDS_MI_DRIVE_SOUND_EMULATION    "Emulera ljud fr�n diskettstation"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Hantera �kta diskettenhetsemulering vid autostart"
  IDS_MI_TOGGLE_VIDEOCACHE        "Grafikcache"
  IDS_MI_DRIVE_SETTINGS           "Diskettenhetsinst�llningar..."
  IDS_MI_CART_SMART_ATTACH        "Smartanslut avbildning..."
  IDS_MI_CART_ATTACH_CRT          "CRT-fil..."
  IDS_MI_CART_ATTACH_8KB          "Vanlig 8KB-fil..."
  IDS_MI_CART_ATTACH_16KB         "Vanlig 16KB-fil..."
  IDS_MI_CART_ATTACH_AR           "Action Replay-fil..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3-fil..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4-fil..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos-fil..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power-fil..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad-fil..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE488-gr�nssnittsfil..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay-fil..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay-fil..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64-gr�nssnittsfil..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4-fil..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5-fil..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC-fil..."
  IDS_MI_FLIP_ADD                 "L�gg till aktuell avbildning (enhet 8)"
  IDS_MI_FLIP_REMOVE              "Ta bort aktuell avbildning (enhet 8)"
  IDS_MI_FLIP_NEXT                "Anslut n�sta avbildning (enhet 8)"
  IDS_MI_FLIP_PREVIOUS            "Anslut f�reg�ende avbildning (enhet 8)"
  IDS_MI_FLIP_LOAD                "L�s vallistefil"
  IDS_MI_FLIP_SAVE                "Spara vallistefil"
  IDS_MI_DATASETTE_STOP           "Stoppa"
  IDS_MI_DATASETTE_START          "Starta"
  IDS_MI_DATASETTE_FORWARD        "Spola fram�t"
  IDS_MI_DATASETTE_REWIND         "Spola bak�t"
  IDS_MI_DATASETTE_RECORD         "Spela in"
  IDS_MI_DATASETTE_RESET          "�terst�ll"
  IDS_MI_DATASETTE_RESET_COUNTER  "Nollst�ll r�knare"
  IDS_MI_CART_SET_DEFAULT         "V�lj insticksmodul som f�rval"
  IDS_MI_TOGGLE_CART_RESET        "Nollst�ll vid modulbyte"
  IDS_MI_CART_DETACH              "Koppla fr�n insticksmodulfil(er)"
  IDS_MI_CART_FREEZE              "Insticksmodulens frysfunktion"
  IDS_MI_MONITOR                  "Monitor"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "Liten"
  IDS_MI_DEBUG_MODE_HISTORY       "Historik"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Spela upp historik automatiskt"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Sp�ra huvud-CPU"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "Sp�ra CPU f�r enhet 0"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "Sp�ra CPU f�r enhet 1"
#endif
  IDS_MI_SNAPSHOT_LOAD            "L�ser in �gonblicksbild..."
  IDS_MI_SNAPSHOT_SAVE            "Spara �gonblicksbildfil..."
  IDS_MI_LOADQUICK                "L�s in snabb�gonblicksbild"
  IDS_MI_SAVEQUICK                "Spara snabb�gonblicksbildfil"
  IDS_MI_EVENT_TOGGLE_RECORD      "B�rja/sluta spela in h�ndelser"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "B�rja/sluta spela upp h�ndelser"
  IDS_MI_EVENT_SETMILESTONE       "Ange inspelningsbokm�rke"
  IDS_MI_EVENT_RESETMILESTONE     "�terg� till bokm�rke"
  IDS_MI_EVENT_START_MODE_SAVE    "Spara ny �gonblicksbild"
  IDS_MI_EVENT_START_MODE_LOAD    "L�s in existerande �gonblicksbild"
  IDS_MI_EVENT_START_MODE_RESET   "Starta med nollst�llning"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Skriv �ver aktiv uppspelning"
  IDS_MI_EVENT_DIRECTORY          "V�lj historikfiler/-katalog"
  IDS_MI_MEDIAFILE                "Starta/stoppa mediafil..."
  IDS_MI_SOUND_RECORD_START       "Spela in ljud till fil..."
  IDS_MI_SOUND_RECORD_STOP        "Stoppa ljudinspelning"
  IDS_MI_REFRESH_RATE_AUTO        "Auto"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Ingen gr�ns"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "Egen"
  IDS_MI_TOGGLE_WARP_MODE         "Warpl�ge"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Alltid �verst"
  IDS_MI_TOGGLE_DX9DISABLE        "Inaktivera DirectX9-grafikdrivrutin"
  IDS_MI_SWAP_JOYSTICK            "V�xla spelportarna"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "V�xla anv�ndarportstyrspakar"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Till�t motsatta riktningar"
  IDS_MI_JOYKEYS_TOGGLE           "Aktivera styrspak via tangenter"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Virtuella enhetstrap:ar"
  IDS_MI_MOUSE                    "F�nga mush�ndelser"
  IDS_MI_C64MODEL_SETTINGS        "C64-modellinst�llningar..."
  IDS_MI_AUTOSTART_SETTINGS       "Autostartinst�llningar..."
  IDS_MI_VIDEO_SETTINGS           "Grafikinst�llningar..."
  IDS_MI_DEVICEMANAGER            "Inst�llningar f�r kringutrustning..."
  IDS_MI_JOY_SETTINGS             "Inst�llningar f�r styrspak..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Inst�llningar f�r anv�ndarportsstyrspak..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Inst�llningar f�r Sidcart-styrspak..."
  IDS_MI_KEYBOARD_SETTINGS        "Tangentbordsinst�llningar..."
  IDS_MI_SOUND_SETTINGS           "Ljudinst�llningar..."
  IDS_MI_ROM_SETTINGS             "ROM-inst�llningar..."
  IDS_MI_RAM_SETTINGS             "RAM-inst�llningar..."
  IDS_MI_DATASETTE_SETTINGS       "Datasetteinst�llningar..."
  IDS_MI_VICII_SETTINGS           "VIC-II-inst�llningar..."
  IDS_MI_MOUSE_SETTINGS           "Musinst�llningar..."
  IDS_MI_SID_SETTINGS             "SID-inst�llningar..."
  IDS_MI_RS232_SETTINGS           "RS232-inst�llningar..."
  IDS_MI_REU_SETTINGS             "REU-Inst�llningar..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM-inst�llningar..."
  IDS_MI_RAMCART_SETTINGS         "RamCart-inst�llningar..."
  IDS_MI_DQBB_SETTINGS            "Inst�llninga f�r dubbel Quick Brown Box..."
  IDS_MI_EXPERT_SETTINGS          "Inst�llningar f�r Expert Cartridge..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC-inst�llningar..."
  IDS_MI_MMC64_SETTINGS           "MMC64-inst�llningar......"
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay-inst�llningar..."
  IDS_MI_RR_SETTINGS              "Retro Replay-inst�llningar..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice-inst�llningar..."
  IDS_MI_MIDI_SETTINGS            "MIDI-inst�llningar..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX-inst�llningar..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC-inst�llningar..."
  IDS_MI_LIGHTPEN_SETTINGS        "Inst�llningar f�r ljuspenna..."
  IDS_MI_IDE64_SETTINGS           "IDE64-inst�llningar..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernetinst�llningar..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA-inst�llningar..."
  IDS_MI_RS232USER_SETTINGS       "RS232-anv�ndarportinst�llningar..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash-inst�llningar..."
  IDS_MI_SFX_SE_SETTINGS          "Inst�llningar f�r SFX Sound Expander..."
  IDS_MI_TOGGLE_SFX_SS            "Aktivera SFX Sound Sampler-insticksmodul"
  IDS_MI_TOGGLE_USERPORT_RTC      "Aktivera anv�ndarport-RTC-expansion"
  IDS_MI_SETTINGS_SAVE_FILE       "Spara nuvarande inst�llningar till den angivna filen"
  IDS_MI_SETTINGS_LOAD_FILE       "L�s inst�llningar fr�n den angivna filen"
  IDS_MI_SETTINGS_SAVE            "Spara nuvarande inst�llningar"
  IDS_MI_SETTINGS_LOAD            "L�s sparade inst�llningar"
  IDS_MI_SETTINGS_DEFAULT         "�terst�ll f�rvalda inst�llningar"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "Spara inst�llningar vid avslut"
  IDS_MI_CONFIRM_ON_EXIT          "Bekr�fta f�r att avsluta VICE"
  IDS_MI_LANG_EN                  "Engelska"
  IDS_MI_LANG_DA                  "Danska"
  IDS_MI_LANG_DE                  "Tyska"
  IDS_MI_LANG_ES                  "Spanska"
  IDS_MI_LANG_FR                  "Franska"
  IDS_MI_LANG_HU                  "Ungerska"
  IDS_MI_LANG_IT                  "Italienska"
  IDS_MI_LANG_KO                  "Koreanska"
  IDS_MI_LANG_NL                  "Nederl�ndska"
  IDS_MI_LANG_PL                  "Polska"
  IDS_MI_LANG_RU                  "Ryska"
  IDS_MI_LANG_SV                  "Svenska"
  IDS_MI_LANG_TR                  "Turkiska"
  IDS_MI_CMDLINE                  "Kommandoradsflaggor"
  IDS_MI_CONTRIBUTORS             "Bidragsl�mnare"
  IDS_MI_LICENSE                  "Licens"
  IDS_MI_WARRANTY                 "Ingen garanti!"
  IDS_MI_TOGGLE_FULLSCREEN        "Fullsk�rm"
  IDS_MI_SIDCART_SETTINGS         "SID-modulinst�llningarg..."
  IDS_MI_MON_OPEN                 "�ppna"
  IDS_MI_MON_SAVE                 "Spara"
  IDS_MI_MON_PRINT                "Skriv ut"
  IDS_MI_MON_EXIT                 "Avsluta        Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Avsluta fels�kning"
  IDS_MI_MON_STOP_EXEC            "Avsluta Exekvering"
  IDS_MI_MON_STEP_INTO            "Stega in"
  IDS_MI_MON_STEP_OVER            "Stega �ver"
  IDS_MI_MON_SKIP_RETURN          "Stega till retur"
  IDS_MI_MON_GOTO_CURSOR          "G� till mark�r"
  IDS_MI_MON_EVAL                 "Utv�rdera"
  IDS_MI_MON_CURRENT              "Aktuell instruktion"
  IDS_MI_MON_WND_EVAL             "Utv�rderingsf�nster"
  IDS_MI_MON_WND_REG              "Registerf�nster"
  IDS_MI_MON_WND_MEM              "Minnesf�nster"
  IDS_MI_MON_WND_DIS              "Disassembleringsf�nster"
  IDS_MI_MON_WND_CONSOLE          "Konsolf�nster"
  IDS_MI_MON_COMPUTER             "Dator"
  IDS_MI_MON_DRIVE8               "Enhet 8"
  IDS_MI_MON_DRIVE9               "Enhet 9"
  IDS_MI_MON_CASCADE              "�verlappande"
  IDS_MI_MON_TILE_VERT            "Sida vid sida"
  IDS_MI_MON_TILE_HORIZ           "�ver och under"
  IDS_MI_MON_ARRANGE_ICONS        "Arrangera ikoner"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_VICE_ERROR                  "VICE Hatas�!"
  IDS_VICE_INFORMATION            "VICE Bilgisi"
  IDS_VICE_QUESTION               "VICE Sorusu"
  IDS_FFMPEG_DLL_MISMATCH         "ffmpeg dll versiyonunuz uyumlu de�il."
  IDS_DIRECTDRAW_ERROR            "DirectDraw hatas�: Kod:%8x Hata:%s"
  IDS_CANNOT_SAVE_SETTINGS        "Ayarlar kaydedilemedi."
  IDS_CANNOT_LOAD_SETTINGS        "Ayarlar y�klenemedi."
  IDS_DEFAULT_SETTINGS_RESTORED   "Varsay�lan ayarlara geri d�n�ld�."
  IDS_CANNOT_ATTACH_FILE          "Belirtilen dosya yerle�tirilemedi"
  IDS_START_MONITOR               "%s\n\nMonit�r� ba�lat? (Hay�r reset atacakt�r, �ptal devam edecektir)"
  IDS_VICE_CPU_JAM                "VICE CPU SIKI�MASI"
  IDS_EXTEND_TO_40_TRACKS         "Imaj 40-track bi�imine geni�letilsin mi?"
  IDS_DETACHED_DEVICE_S           "Ayg�t %s ��kart�ld�"
  IDS_ATTACHED_S_TO_DEVICE_S      "%s ayg�t#%s'a yerle�tirildi"
  IDS_DETACHED_TAPE               "Teyp ��kart�ld�"
  IDS_HISTORY_RECORDED_UNKNOWN    "Tarih�e bilinmeyen yay�mlanmayla kaydedildi"
  IDS_HISTORY_RECORDED_VICE_S     "Tarih�e VICE-%s ile kaydedildi"
  IDS_PAUSED                      "duraklat�ld�"
  IDS_FRAME_NUMBER                "frame #"
  IDS_RESUMED                     "yeniden ba�lat�ld�"
  IDS_REALLY_EXIT                 "��kmak istedi�inizden emin misiniz?\n\nEm�le edilmi� RAM'de bulunan mevcut t�m veri kaybedilecektir."
  IDS_TFE_PROBLEM                 "TFE/RR-Net deste�i sisteminizde mevcut de�il,\n�nemli bir par�a eksik. L�tfen VICE bilgi taban�\ndestek sayfas�na g�z at�n\n\n      http://vicekb.trikaliotis.net/13-005\n\nolas� sebepler ve VICE'�n a� deste�ini aktive etmek i�in."
  IDS_TFE_RRNET_SUPPORT           "TFE/RR-Net deste�i"
  IDS_CANNOT_AUTOSTART_FILE       "Belirtilen dosya otomatik ba�lat�lamad�."
  IDS_ATTACHED_TAPE_S             "Yerle�tirilmi� teyp %s"
  IDS_SETTINGS_SAVED_SUCCESS      "Ayarlar ba�ar�yla kaydedildi."
  IDS_SETTINGS_LOADED_SUCCESS     "Ayarlar ba�ar�yla y�klendi."
  IDS_ATTACH_DISK_IMAGE           "Disk imaj�n� yerle�tir"
  IDS_ATTACH_TAPE_IMAGE           "Teyp imaj�n� yerle�tir"
  IDS_AUTOSTART_IMAGE             "Disk/Teyp imaj�n� otomatik ba�lat"
  IDS_INVALID_CARTRIDGE           "Ge�ersiz kartu� imaj�"
  IDS_BAD_CARTRIDGE_CONFIG        "UI'de k�t� kartu� konfig�rasyonu!"
  IDS_INVALID_CARTRIDGE_IMAGE     "Ge�ersiz kartu� imaj�"
  IDS_LOG_CONSOLE_OUTPUT_IMAGE    "konsol imaj ��kt�s� loglan�yor"
  IDS_LOG_FILES_TYPE              "VICE konsol log dosyalar� (*.dbg)"
  IDS_CANNOT_WRITE_LOGFILE_S      "Log dosyas� `%s' yaz�lamad�."
  IDS_LOAD_FLIP_LIST_FILE         "S�ralama listesi dosyas�n� y�kle"
  IDS_CANNOT_READ_FLIP_LIST       "S�ralama listesi dosyas� okunamad�"
  IDS_SAVE_FLIP_LIST_FILE         "S�ralama listesi dosyas�n� kaydet"
  IDS_CANNOT_WRITE_FLIP_LIST      "S�ralama listesi dosyas� yaz�lamad�"
  IDS_SELECT_KEYMAP_FILE          "Tu� Haritas� dosyas� se�"
  IDS_SAVE_KEYMAP_FILE            "Tu� Haritas� dosyas�n� kaydet"
  IDS_CANNOT_WRITE_KEYMAP_FILE    "Tu� Haritas� dosyas� yaz�lamad�"
  IDS_SAVE_CONFIG_FILE            "Konfig�rasyon dosyas�n� kaydet"
  IDS_LOAD_CONFIG_FILE            "Konfig�rasyon dosyas�n� y�kle"
  IDS_MAPPING                     "Haritalama"
  IDS_KEYBOARD_SETTINGS           "Klavye ayarlar�"
  IDS_ATTACH                      "Yerle�tir"
  IDS_PLEASE_ENTER_A_FILENAME     "L�tfen dosya ismi girin."
  IDS_OVERWRITE_EXISTING_IMAGE    "Varolan imaj�n �zerine yaz�ls�n m�?"
  IDS_CANNOT_CREATE_IMAGE         "Imaj dosyas� yarat�lamad�!"
  IDS_COMMAND_LINE_OPTIONS        "Komut sat�r� se�enekleri"
  IDS_COMMAND_OPTIONS_AVAIL       "Hangi komut sat�r� se�enekleri mevcut?"
  IDS_NO_DRIVER_SELECT_SUPPORT    "Se�ilmi� s�r�c� yok ya da desteklenmiyor"
  IDS_CANT_WRITE_SCREENSHOT_S     "Ekran g�r�nt�s� dosyas� `%s' yaz�lamad�."
  IDS_AUTOSTART_DISK_IMAGE        "Disk imaj�n� otomatik ba�lat"
  IDS_SELECT_FS_DIRECTORY         "Dosya sistem dizinini se�"
  IDS_PRINTER_USERPORT            "Yaz�c� Userport'u"
  IDS_PRINTER_4                   "Yaz�c� 4"
  IDS_PRINTER_5                   "Yaz�c� 5"
  IDS_PRINTER_6                   "Printer 6"
  IDS_DRIVE_8                     "S�r�c� 8"
  IDS_DRIVE_9                     "S�r�c� 9"
  IDS_DRIVE_10                    "S�r�c� 10"
  IDS_DRIVE_11                    "S�r�c� 11"
  IDS_PERIPHERAL_SETTINGS         "�evresel ayarlar"
  IDS_CANT_WRITE_SNAPSHOT_FILE    "Anl�k g�r�nt� dosyas� yaz�lamad�."
  IDS_CANNOT_READ_SNAPSHOT_IMG    "Anl�k g�r�nt� dosyas� okunamad�."
  IDS_LOAD_S_ROM_IMAGE            "%s ROM imaj�n� y�kle"
  IDS_SELECT_ROMSET_ARCHIVE       "Romset ar�ivini se�"
  IDS_CANNOT_LOAD_ROMSET_ARCH     "Romset ar�ivi y�klenemedi!"
  IDS_CANNOT_SAVE_ROMSET_ARCH     "Romset ar�ivi kaydedilemedi!"
  IDS_CANNOT_LOAD_ROMSET_FILE     "Romset dosyas� y�klenemedi!"
  IDS_CANNOT_SAVE_ROMSET_FILE     "Romset dosyas� kaydedilemedi!"
  IDS_SELECT_ROMSET_FILE          "Romset dosyas�n� se�"
  IDS_ROMSET                      "Romset"
  IDS_COMPUTER                    "Bilgisayar"
  IDS_DRIVE                       "S�r�c�"
  IDS_ROM_SETTINGS                "ROM ayarlar�"
  IDS_SAVE_SNAPSHOT_IMAGE         "Anl�k g�r�nt� imaj�n� kaydet"
  IDS_CANNOT_WRITE_SNAPSHOT_S     "Anl�k g�r�nt� dosyas� yaz�lamad� `%s'."
  IDS_LOAD_SNAPSHOT_IMAGE         "Anl�k g�r�nt� imaj�n� y�kle"
  IDS_COULD_NOT_LOAD_PALETTE      "Palet dosyas� y�klenemedi."
  IDS_LOAD_VICE_PALETTE_FILE      "VICE palet dosyas� y�kle"
  IDS_FULLSCREEN                  "Tam Ekran/DirectX"
  IDS_CRT_EMULATION               "CRT em�lasyonu"
  IDS_RENDER_FILTER               "�mge olu�turma filtresi"
  IDS_SCALE2X                     "Scale2x"
  IDS_VIDEO_SETTINGS              "G�r�nt� ayarlar�"
  IDS_FILE_SYSTEM                 "Dosya sistemi"
#ifdef HAVE_OPENCBM
  IDS_REAL_IEC_DEVICE             "Ger�ek IEC ayg�t�"
#endif
  IDS_RS232_DEVICE_I              "RS232 ayg�t� %i"
  IDS_ATTACH_CRT_CART_IMAGE       "CRT kartu� imaj� yerle�tir"
  IDS_ATTACH_RAW_8KB_CART_IMAGE   "D�z 8KB kartu� imaj� yerle�tir"
  IDS_ATTACH_RAW_16KB_CART_IMG    "D�z 16KB kartu� imaj� yerle�tir"
  IDS_ATTACH_AR_CART_IMAGE        "D�z 32KB Action Replay kartu� imaj� yerle�tir"
  IDS_ATTACH_AR3_CART_IMAGE       "D�z 16KB Action Replay MK3 kartu� imaj� yerle�tir"
  IDS_ATTACH_AR4_CART_IMAGE       "D�z 32KB Action Replay MK4 kartu� imaj� yerle�tir"
  IDS_ATTACH_STARDOS_CART_IMAGE   "D�z 16KB Stardos kartu� imaj� yerle�tir"
  IDS_ATTACH_ATOMIC_P_CART_IMG    "D�z 32KB Atomic Power kartu� imaj� yerle�tir"
  IDS_ATTACH_EPYX_FL_CART_IMG     "D�z 8KB Epyx FastLoad kartu� imaj� yerle�tir"
  IDS_ATTACH_IEEE488_CART_IMG     "IEEE-488 Arabirimi kartu� imaj� yerle�tir"
  IDS_ATTACH_RETRO_R_CART_IMG     "D�z 64KB Retro Replay kartu� imaj� yerle�tir"
  IDS_ATTACH_MMC_REPLAY_CART_IMG  "D�z 512kB MMC Replay kartu� imaj� yerle�tir"
  IDS_ATTACH_IDE64_CART_IMAGE     "D�z 64KB IDE64 kartu� imaj� yerle�tir"
  IDS_ATTACH_SS4_CART_IMAGE       "D�z 32KB Super Snapshot V4 kartu� imaj� yerle�tir"
  IDS_ATTACH_SS5_CART_IMAGE       "D�z 64KB Super Snapshot V5 kartu� imaj� yerle�tir"
  IDS_ATTACH_STB_CART_IMAGE       "D�z yap�land�r�lm�� Basic kartu� imaj� yerle�tir"
  IDS_SELECT_CARTRIDGE_IMAGE      "Kartu� dosyas�n� se�"
  IDS_MODEL                       "Model"
  IDS_DRIVE_SETTINGS              "S�r�c� ayarlar�"
  IDS_SELECT_START_SNAP_EVENT     "Olay tarih�esi i�in ba�lang�� anl�k g�r�nt�s�n� se�"
  IDS_SELECT_END_SNAP_EVENT       "Olay tarih�esi i�in biti� anl�k g�r�nt�s�n� se�"
#ifdef UNSTABLE
  IDS_VERSION_S_UNSTABLE          "Versiyon %s *�ST�KRARSIZ* (%s)"
  IDS_VERSION_S_REV_S_UNSTABLE    "Version %s rev %s *UNSTABLE* (%s)"
#else
  IDS_VERSION_S                   "Versiyon %s (%s)"
  IDS_VERSION_S_REV_S             "Version %s rev %s (%s)"
#endif
  IDS_VICE_CONTRIBUTORS           "VICE kat�l�mc�lar�"
  IDS_WHO_MADE_WHAT               "Kim ne yapt�?"
  IDS_LICENSE                     "Lisans"
  IDS_NO_WARRANTY                 "Garanti verilmez!"
  IDS_VICE_WITHOUT_WARRANTY       "VICE H��B�R GARANT� VER�LMEDEN da��t�lm��t�r!"
  IDS_PRESS_KEY_NORTHWEST         "KuzeyBat� i�in bir tu�a bas�n"
  IDS_PRESS_KEY_NORTH             "Kuzey i�in bir tu�a bas�n"
  IDS_PRESS_KEY_NORTHEAST         "KuzeyDo�u i�in bir tu�a bas�n"
  IDS_PRESS_KEY_EAST              "Do�u i�in bir tu�a bas�n"
  IDS_PRESS_KEY_SOUTHEAST         "G�neyDo�u i�in bir tu�a bas�n"
  IDS_PRESS_KEY_SOUTH             "G�ney i�in bir tu�a bas�n"
  IDS_PRESS_KEY_SOUTHWEST         "G�neyBat� i�in bir tu�a bas�n"
  IDS_PRESS_KEY_WEST              "Bat� i�in bir tu�a bas�n"
  IDS_PRESS_KEY_FIRE              "Ate� i�in bir tu�a bas�n"
  IDS_NO_USERPORT_ADAPTER         "Userport joy d�n��t�r�c� yok"
  IDS_CGA_USERPORT_ADAPTER        "CGA userport joy d�n��t�r�c�"
  IDS_PET_USERPORT_ADAPTER        "PET userport joy d�n��t�r�c�"
  IDS_HUMMER_USERPORT_ADAPTER     "Hummer userport joy d�n��t�r�c�"
  IDS_OEM_USERPORT_ADAPTER        "OEM userport joy d�n��t�r�c�"
  IDS_HIT_USERPORT_ADAPTER        "HIT userport joy d�n��t�r�c�"
  IDS_KINGSOFT_USERPORT_ADAPTER   "Kingsoft userport joy d�n��t�r�c�"
  IDS_STARBYTE_USERPORT_ADAPTER   "Starbyte userport joy d�n��t�r�c�"
  IDS_NO_SIDCART_JOY              "SID kartu�u joystick'ini pasifle�tir"
  IDS_SIDCART_JOY                 "SID kartu�u joystick'ini aktif et"
  IDS_NUMPAD_AND_RCTRL            "Numpad + Sa� Ctrl"
  IDS_KEYSET_A                    "Tu� Seti A"
  IDS_KEYSET_B                    "Tu� Seti B"
  IDS_ALL_BUTTONS_AS_FIRE         "T�m d��meler ate� olarak kullan�l�r"
  IDS_NUMERIC_SEE_ABOVE           "N�merik (yukar�ya bak�n)"
  IDS_NO_BUTTON_NO_AUTOFIRE       "D��me yok - Otomatik ate�i pasifle�tir"
  IDS_ALL_FILES_FILTER            "T�m dosyalar (*.*)"
  IDS_PALETTE_FILES_FILTER        "VICE palet dosyalar� (*.vpl)"
  IDS_SNAPSHOT_FILES_FILTER       "VICE anl�k g�r�nt� dosyalar� (*.vsf)"
  IDS_CBM_IMAGE_FILES_FILTER      "CBM dosyalar� (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m;*.d4m;*.g64;*.g41;*.p64;*.x64;*.t64;*.tap;*.prg;*.p00)"
  IDS_IDE64_IMAGE_FILES_FILTER    "IDE64 dosyalar� (*.fdd;*.hdd;*.iso;*.cfa)"
  IDS_DISK_IMAGE_FILES_FILTER     "Disk imaj dosyalar� (*.d64;*.d71;*.d80;*.d81;*.d82;*.d1m;*.d2m*;*.d4m;.g64;*.g41;*.p64;*.x64)"
  IDS_TAPE_IMAGE_FILES_FILTER     "Teyp imaj dosyalar� (*.t64;*.tap)"
  IDS_ZIPPED_FILES_FILTER         "Ziplenmi� dosyalar (*.zip;*.bz2;*.gz;*.d6z;*.d7z;*.d8z;*.g6z;*.g4z;*.p6z;*.x6z)"
  IDS_CRT_FILES_FILTER            "CRT kartu� imaj� dosyalar� (*.crt)"
  IDS_RAW_CART_FILES_FILTER       "D�z kartu� imaj� dosyalar� (*.bin)"
  IDS_FLIP_LIST_FILES_FILTER      "VICE s�ralama listesi dosyalar� (*.vfl)"
  IDS_ROMSET_FILES_FILTER         "VICE romset dosyalar� (*.vrs)"
  IDS_ROMSET_ARCHIVES_FILTER      "VICE romset ar�ivleri (*.vra)"
  IDS_KEYMAP_FILES_FILTER         "VICE tu� haritas� dosyalar� (*.vkm)"
  IDS_PRGP00_FILES_FILTER         "Commodore em�lat�r� dosyalar� (*.prg;*.p00)"
  IDS_FLEXIBLE                    "Esnek"
  IDS_ADJUSTING                   "D�zeltme"
  IDS_EXACT                       "Aynen"
  IDS_SOUND_DRIVER_DIRECTX        "Ses s�r�c�s�: DirectX"
  IDS_SOUND_DRIVER_WMM            "Ses s�r�c�s�: WMM"
  IDS_SYSTEM                      "Sistem"
  IDS_MONO                        "Mono"
  IDS_STEREO                      "Stereo"
  IDS_MEDIA_FILES_FILTER          "Ortam dosyalar� (*.bmp;*.gif;*.iff;*.jpg;*.pcx;*.png;*.ppm;*.wav;*.mp3;*.avi;*.mpg)"
  IDS_SPACE_KB                    " kB"
  IDS_CONFIGURE_KEYSET_A          "Tu� Seti A'y� Konfig�re Et"
  IDS_CONFIGURE_KEYSET_B          "Tu� Seti B'yi Konfig�re Et"
  IDS_SAVE_MEDIA_IMAGE            "Ortam dosyas� kaydet"
  IDS_S_AT_D_SPEED                "%s %d%% h�z�nda, %d fps%s"
  IDS_TAPE                        "Teyp:"
  IDS_JOYSTICK_C                  "Joystick:"
  IDS_RECORDING                   "Kaydediliyor\n%02d:%02d"
  IDS_PLAYBACK                    "Kay�ttan y�r�t�l�yor\n%02d:%02d (%02d:%02d)"
  IDS_UNKNOWN                     "Bilinmeyen"
  IDS_P_NUMBER                    "<say�>"
  IDS_SET_INPUT_JOYSTICK_1        "Joystick #1 i�in giri� ayg�t� belirle"
  IDS_SET_INPUT_JOYSTICK_2        "Joystick #2 i�in giri� ayg�t� belirle"
  IDS_SET_INPUT_EXTRA_JOYSTICK_1  "Ekstra joystick #1 i�in giri� ayg�t� belirle"
  IDS_SET_INPUT_EXTRA_JOYSTICK_2  "Ekstra joystick #2 i�in giri� ayg�t� belirle"
  IDS_SAVE_SETTINGS_ON_EXIT       "��k��ta ayarlar� kaydet"
  IDS_NO_SAVE_SETTINGS_ON_EXIT    "��k��ta ayarlar� asla kaydetme"
  IDS_CONFIRM_QUIT_VICE           "VICE'dan ��k��� teyit et"
  IDS_NO_CONFIRM_QUIT_VICE        "VICE'dan ��k��� asla teyit etme"
  IDS_USE_ALL_CPU_SMP             "SMP sistemlerinde t�m CPUlar� kullan"
  IDS_USE_FIRST_CPU_SMP           "SMP sistemlerinde yaln�zca ilk CPU'yu kullan"
  IDS_START_VICE_FULLSCREEN_MODE  "VICE'� tam ekran modunda ba�lat"
  IDS_DISABLE_DX9                 "DirectX9 video s�r�c�s�n� pasifle�tir"
#ifdef SYS_SIGLIST_DECLARED
  IDS_RECEIVED_SIGNAL_D_S         "Beklenmeyen hata olu�tu. %d sinyali al�nd� (%s)."
#else
  IDS_RECEIVED_SIGNAL_D           "Beklenmeyen hata olu�tu. %d sinyali al�nd�."
#endif
#ifdef HAVE_NETWORK
  IDS_IDLE                        "Bo�a vakit ge�irme"
  IDS_SERVER_LISTENING            "Sunucu dinleniyor"
  IDS_CONNECTED_SERVER            "Sunucuya ba�lan�ld�"
  IDS_CONNECTED_CLIENT            "Ba�l� istemci"
  IDS_INVALID_PORT_NUMBER         "Ge�ersiz port numaras�"
  IDS_ERROR_STARTING_SERVER       "Sunucu ba�lat�l�rken bir hata olu�tu."
  IDS_ERROR_CONNECTING_CLIENT     "�stemciye ba�lan�rken bir hata olu�tu."
#endif
  IDS_SOUND_RECORDING_STARTED     "Ses Kayd� ba�lad�..."
  IDS_SOUND_RECORDING_STOPPED     "Ses Kayd� durduruldu..."
  IDS_OK                          "Tamam"
  IDS_CANCEL                      "�ptal"
  IDS_NONE                        "Yok"
  IDS_BROWSE                      "G�z at..."
  IDS_SPECIFY_MIDI_IN             "MIDI-In ayg�t�n� belirleyin"
  IDS_SPECIFY_MIDI_OUT            "MIDI-Out ayg�t�n� belirleyin"
  IDS_ERROR_SAVING_EASYFLASH_CRT  "EasyFlash crt dosyas� kay�t hatas�"
  IDS_NO_EASYFLASH_CART_INSERTED  "EasyFlash kartu�u tak�lmam��"
  IDS_DATASETTE_CAPTION           "Teyp Ayarlar�"
  IDS_DATASETTE_RESET_WITH_CPU    "CPU ile birlikte Teyp'i resetle"
  IDS_DATASETTE_MOTOR_GROUP       "Motorun okurkenki h�z�"
  IDS_DATASETTE_DELAY_TRIGGER     "cycle(lar) her tetiklemede eklenen gecikme"
  IDS_DATASETTE_DELAY_AT_ZERO     "Teyp s�f�r ara beklemesi"
  IDS_TOGGLE_USEIECDEVICE         "IEC Ayg�t� Kullan"
  IDS_SELECTDISK                  "Disk imaj�"
  IDS_SELECTDIR                   "Dizin"
#ifdef HAVE_OPENCBM
  IDS_SELECTREAL                  "Ger�ek IEC ayg�t�"
#endif
  IDS_SELECTNONE                  "Yok"
  IDS_AUTOSTART                   "Otomatik ba�lat"
  IDS_BROWSEDIR                   "G�z at..."
  IDS_TOGGLE_ATTACH_READONLY      "Salt okunur yerle�tir"
  IDS_TOGGLE_READP00              "P00 dosyalar�n� oku"
  IDS_TOGGLE_WRITEP00             "P00 dosyalar�n� yaz"
  IDS_TOGGLE_HIDENONP00           "P00 harici dosyalar� gizle"
  IDS_JOYSTICK_CAPTION            "Joystick ayarlar�"
  IDS_JOYSTICK_IN_PORT_1          "Joystick port #1'de"
  IDS_SELECT_FIRE_BUTTON          "Ate� d��mesini se�"
  IDS_AUTO_FIRE_BUTTON_SETTINGS   "Otomatik ate� d��mesi ayarlar�"
  IDS_AUTOFIRE_SPEED              "Otomatik ate� h�z� (1..32)"
  IDS_JOYSTICK_IN_PORT_2          "Joystick port #2'de"
  IDS_JOY_CONFIG_A                "Tu� Seti A'y� Konfig�re Et"
  IDS_JOY_CONFIG_B                "Tu� Seti B'yi Konfig�re Et"
  IDS_JOY_CALIBRATE               "Joystick(ler)i kalibre et"
  IDS_EXTRA_JOYSTICK_CAPTION      "Ekstra joystick ayarlar�"
  IDS_JOYSTICK_IN_EXTRA_PORT_1    "Joystick ekstra port #1'de"
  IDS_JOYSTICK_IN_EXTRA_PORT_2    "Joystick ekstra port #2'de"
  IDS_KEYSET_SW                   "G�ney Bat�"
  IDS_KEYSET_S                    "G�ney"
  IDS_KEYSET_SE                   "G�ney Do�u"
  IDS_KEYSET_W                    "Bat�"
  IDS_KEYSET_E                    "Do�u"
  IDS_KEYSET_NW                   "Kuzey Bat�"
  IDS_KEYSET_N                    "Kuzey"
  IDS_KEYSET_NE                   "Kuzey Do�u"
  IDS_KEYSET_FIRE                 "Ate� d��mesi"
  IDS_SOUND_CAPTION               "Ses Ayg�t� Ayarlar�n� Konfig�re Et"
  IDS_SOUND_DIRECTX               "DirectX s�r�c�s�"
  IDS_SOUND_WMM                   "WMM s�r�c�s�"
  IDS_SOUND_OUTPUT_MODE           "Ses ��k��� modu"
  IDS_SOUND_SAMPLE_FREQUENCY      "�rnek h�z� :"
  IDS_SOUND_BUFFER_SIZE           "Ses Arabellek Boyutu :"
  IDS_SOUND_FRAGMENT_SIZE_LABEL   "Ses Par�a Boyutu :"
  IDS_SOUND_FRAGMENT_SIZE_V_SMALL "Very small"
  IDS_SOUND_FRAGMENT_SIZE_SMALL   "K���k"
  IDS_SOUND_FRAGMENT_SIZE_MEDIUM  "Orta"
  IDS_SOUND_FRAGMENT_SIZE_LARGE   "B�y�k"
  IDS_SOUND_FRAGMENT_SIZE_V_LARGE "Very large"
  IDS_SOUND_SYNCH_METHOD          "Senkronizasyon Metodu :"
  IDS_TOGGLE_SNAPSHOT_SAVE_DISKS  "Halihaz�rda yerle�tirilmi� disk imajlar�n� kaydet"
  IDS_TOGGLE_SNAPSHOT_SAVE_ROMS   "Halihaz�rda y�klenmi� ROM imajlar�n� kaydet"
  IDS_FULLSCREEN_DRIVER           "S�r�c�:"
  IDS_FULLSCREEN_DRVR_BITDEPTH    "Bit derinli�i:"
  IDS_FULLSCREEN_DRVR_RESOLUTION  "��z�n�rl�k:"
  IDS_FULLSCREEN_DRVR_REFRESHRATE "Yenileme h�z�:"
  IDS_TOGGLE_VIDEO_VBLANK_SYNC    "VBLANK senkronizasyonu"
  IDS_TOGGLE_VIDEO_DX_PRIMARY     "DX Birincil y�zeyine �iz"
  IDS_TOGGLE_KEEP_ASPECT_RATIO    "En boy oran� koru (0,5..2)"
  IDS_TOGGLE_TRUE_ASPECT_RATIO    "Ger�ek en boy oran�"
  IDS_VAL_F_FOR_S_OUT_RANGE_USE_F "%.3f de�eri i�in %s alan d���na ��kt�, yerine %.3f kullan�l�yor"
  IDS_VAL_D_FOR_S_OUT_RANGE_USE_D "%d de�eri i�in %s alan d���na ��kt�, yerine %d kullan�l�yor"
  IDS_AUDIO_LEAK                  "Ses ka�a��"
  IDS_COLORS_GAMMA                "Gama (0..4)"
  IDS_COLORS_TINT                 "Ton (0..2)"
  IDS_COLORS_SATURATION           "Doygunluk (0..2)"
  IDS_COLORS_CONTRAST             "Kar��tl�k (0..2)"
  IDS_COLORS_BRIGHTNESS           "Parlakl�k (0..2)"
  IDS_CRT_SCANLINE_SHADE          "Tarama sat�r� n�ans� (0..1)"
  IDS_CRT_BLUR                    "Bulan�kl�k (0..1)"
  IDS_CRT_ODDLINE_PHASE           "Tek sat�r faz� (0..2)"
  IDS_CRT_ODDLINE_OFFSET          "Tek sat�r ofseti (0..2)"
  IDS_VICII_PALETTE               "VICII Paleti"
  IDS_VIC_PALETTE                 "VIC Paleti"
  IDS_CRTC_PALETTE                "CRTC Paleti"
  IDS_VDC_PALETTE                 "VDC Paleti"
  IDS_TED_PALETTE                 "TED Paleti"
  IDS_VICII_COLORS                "VICII Renkleri"
  IDS_VIC_COLORS                  "VIC Renkleri"
  IDS_CRTC_COLORS                 "CRTC Renkleri"
  IDS_VDC_COLORS                  "VDC Renkleri"
  IDS_TED_COLORS                  "TED Renkleri"
  IDS_VICII_CRT_EMULATION         "VICII CRT em�lasyonu"
  IDS_VIC_CRT_EMULATION           "VIC CRT em�lasyonu"
  IDS_CRTC_CRT_EMULATION          "CRTC CRT em�lasyonu"
  IDS_VDC_CRT_EMULATION           "VDC CRT em�lasyonu"
  IDS_TED_CRT_EMULATION           "TED CRT em�lasyonu"
  IDS_VICII_RENDER_FILTER         "VICII imge olu�turma filtresi"
  IDS_VIC_RENDER_FILTER           "VIC imge olu�turma filtresi"
  IDS_CRTC_RENDER_FILTER          "CRTC imge olu�turma filtresi"
  IDS_VDC_RENDER_FILTER           "VDC imge olu�turma filtresi"
  IDS_TED_RENDER_FILTER           "TED imge olu�turma filtresi"
  IDS_VICII_AUDIO_LEAK            "VICII Ses ka�a��"
  IDS_VIC_AUDIO_LEAK              "VIC Ses ka�a��"
  IDS_CRTC_AUDIO_LEAK             "CRTC Ses ka�a��"
  IDS_VDC_AUDIO_LEAK              "VDC Ses ka�a��"
  IDS_TED_AUDIO_LEAK              "TED Ses ka�a��"
  IDS_TOGGLE_VIDEO_EXTPALETTE     "Harici Palet:"
  IDS_RAM_CAPTION                 "RAM ayarlar�"
  IDS_RAM_INIT_AT_POWERUP         "G�� verildi�inde ba�lang�� ayarlar�n� yap"
  IDS_RAM_VALUE_FIRST_BYTE        "�lk byte de�eri"
  IDS_RAM_LENGTH_CONSTANT_VALUES  "Sabit de�erlerin uzunlu�u"
  IDS_RAM_LENGTH_CONSTANT_PATTERN "Sabit desenlerin uzunlu�u"
  IDS_PRINTER_EMULATION           "Yaz�c� em�lasyonu"
  IDS_PRINTER_FORMFEED            "Sayfa ilerletme g�nder"
  IDS_FILESYSTEM_PRINTER          "Dosya sistemi yaz�c�s�"
  IDS_PRINTER_DRVR                "Yaz�c� s�r�c�s�"
  IDS_OUTPUT                      "��kt�"
  IDS_OUTPUT_TO_FILE              "��kt� dosyas� #"
  IDS_OUTPUT_FILE1_NAME           "��kt� dosyas� #1 ismi"
  IDS_OUTPUT_FILE2_NAME           "��kt� dosyas� #2 ismi"
  IDS_OUTPUT_FILE3_NAME           "��kt� dosyas� #3 ismi"
  IDS_ROMSET_SELECT_ARCHIVE       "Romset ar�ivi"
  IDS_ROMSET_ARCHIVE_LOAD         "Ar�iv y�kle"
  IDS_ROMSET_ARCHIVE_SAVE         "Ar�iv kaydet"
  IDS_ROMSET_CONFIGURATION        "Konfig�rasyon"
  IDS_ROMSET_ARCHIVE_APPLY        "Uygula"
  IDS_ROMSET_ARCHIVE_NEW          "Yeni"
  IDS_ROMSET_ARCHIVE_DELETE       "Sil"
  IDS_ROMSET_SELECT_FILE          "Romset dosyas�"
  IDS_ROMSET_FILE_LOAD            "Romset y�kle"
  IDS_ROMSET_FILE_SAVE            "Romset kaydet"
  IDS_CUSTOM_SPEED_CAPTION        "�zel h�z"
  IDS_ENTER_CUSTOM_SPEED          "�zel h�z� girin [%]"
  IDS_NEW_CONFIGURATION           "Yeni konfig�rasyon"
  IDS_ENTER_CONFIGURATION_NAME    "Konfig�rasyon ismi girin"
  IDS_RS232_CAPTION               "RS232 ayarlar�"
  IDS_RS232_DEV_1                 "RS232 ayg�t 1"
  IDS_RS232_DEV_2                 "RS232 ayg�t 2"
  IDS_RS232_DEV_3                 "RS232 ayg�t 3"
  IDS_RS232_DEV_4                 "RS232 ayg�t 4"
  IDS_NETWORK_CAPTION             "Netplay Ayarlar�"
  IDS_CURRENT_MODE                "Ge�erli mod"
  IDS_SERVER_BIND                 "Sunucu Ba�lant�s�"
  IDS_TCP_PORT                    "TCP portu"
  IDS_NETWORK_SERVER              "Sunucuyu ba�lat"
  IDS_NETWORK_CLIENT              "Ba�lan�lan"
  IDS_NETWORK_DISCONNECT          "Ba�lant�y� kes"
  IDS_CONTROL                     "Kontrol"
  IDS_SERVER                      "Sunucu"
  IDS_CLIENT                      "�stemci"
  IDS_KEYBOARD                    "Klavye"
  IDS_JOYSTICK_1                  "Joystick 1"
  IDS_JOYSTICK_2                  "Joystick 2"
  IDS_DEVICES                     "Ayg�tlar"
  IDS_SETTINGS                    "Ayarlar"
  IDS_TOGGLE_CONSOLE_APPEND       "Varolan dosyaya log ekle"
  IDS_IMAGE_CONTENTS              "Imaj ��eri�i"
  IDS_NEW_IMAGE                   "Yeni �maj"
  IDS_NAME                        "�sim"
  IDS_ID                          "ID"
  IDS_TYPE                        "Tip"
  IDS_BLANK_IMAGE                 "Imaj Yarat"
  IDS_NEW_TAP_IMAGE               "Yeni TAP Imaj�"
  IDS_SAVE                        "Kaydet"
  IDS_SELECT_DRIVER               "S�r�c� Se�"
  IDS_FFMPEG_SETTINGS             "FFMPEG ayarlar�"
  IDS_FORMAT                      "Bi�im"
  IDS_AUDIO_CODEC                 "Ses kode�i"
  IDS_BITRATE                     "bith�z�"
  IDS_VIDEO_CODEC                 "G�r�nt� kode�i"
  IDS_SOUND_RECORD_CAPTION        "Ses kay�t ayarlar�"
  IDS_SOUND_RECORD_FORMAT_LABEL   "Ses Kay�t Bi�imi"
  IDS_SOUND_RECORD_FILE_LABEL     "Ses Kay�t Dosyas�"
  IDS_KERNAL                      "Kernal"
  IDS_SCPU64                      "SCPU64"
  IDS_BASIC                       "Basic"
  IDS_CHARACTER                   "Karakter"
  IDS_COMPUTER_RESOURCES_CAPTION  "Bilgisayar kaynaklar�"
  IDS_COMPUTER_RESOURCES          "Bilgisayar kaynaklar� romsete kaydedildi"
  IDS_DRIVE_RESOURCES_CAPTION     "S�r�c� kaynaklar�"
  IDS_DRIVE_RESOURCES             "S�r�c� kaynaklar� romsete kaydedildi"
  IDS_SYMBOLIC                    "Sembolik"
  IDS_POSITIONAL                  "Konumsal"
  IDS_DUMP_KEYSET                 "Tu� Setini d�k"
  IDS_DUMP_SHORTCUTS              "K�sayollar� d�k"
  IDS_SYMBOLIC_US                 "Sembolik US"
  IDS_SYMBOLIC_DE                 "Sembolik DE"
  IDS_GR_SYM                      "Gr Sem."
  IDS_GR_POS                      "Gr Poz."
  IDS_UK_SYM                      "UK Sem."
  IDS_UK_POS                      "UK Poz."
  IDS_DE_SYM                      "DE Sem."
  IDS_DE_POS                      "DE Poz."
  IDS_MEMORY                      "Bellek"
  IDS_DRIVE_TYPE                  "S�r�c� tipi"
  IDS_40_TRACK_HANDLING           "40 track i�leme"
  IDS_SELECT_DRIVE_EXTEND_NEVER   "Asla geni�letme"
  IDS_SELECT_DRIVE_EXTEND_ASK     "Geni�letirken sor"
  IDS_SELECT_DRIVE_EXTEND_ACCESS  "Eri�ildi�inde geni�let"
  IDS_IDLE_METHOD                 "Bo�a vakit ge�irme metodu"
  IDS_SELECT_DRIVE_IDLE_TRAP_IDLE "Trap bo�a vakit ge�irme"
  IDS_SELECT_DRIVE_IDLE_SKIP_CYC  "Cyclelar� atla"
  IDS_TOGGLE_DRIVE_PARALLEL_CABLE "Paralel kablo"
  IDS_STANDARD                    "Standart"
  IDS_DRIVE_EXPANSION             "S�r�c� geni�lemesi"
  IDS_TOGGLE_DRIVE_EXPANSION_2000 "$2000-$3FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_4000 "$4000-$5FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_6000 "$6000-$7FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_8000 "$8000-$9FFF RAM"
  IDS_TOGGLE_DRIVE_EXPANSION_A000 "$A000-$BFFF RAM"
  IDS_PLUS4_VIC20_MEMORY          "Bellek"
  IDS_SID_GENGROUP1               "SID modeli"
  IDS_SID_FILTERS                 "SID filtreleri"
  IDS_MP_FILE                     "Dosya"
  IDS_MP_ATTACH_DISK_IMAGE        "Disk imaj�n� yerle�tir"
  IDS_MP_DETACH_DISK_IMAGE        "Disk imaj�n� ��kart"
  IDS_MP_FLIP_LIST                "S�ralama listesi"
  IDS_MP_DATASETTE_CONTROL        "Teyp kontrol�"
  IDS_MP_ATTACH_CARTRIDGE_IMAGE   "Kartu� imaj� yerle�tir..."
  IDS_MP_RESET                    "Reset"
  IDS_MP_DEBUG                    "Hata Ay�klama"
#ifdef DEBUG
  IDS_MP_MODE                     "Mod"
#endif
  IDS_MP_EDIT                     "D�zenle"
  IDS_MP_SNAPSHOT                 "Anl�k G�r�nt�"
  IDS_MP_RECORDING_START_MODE     "Kay�t ba�lang�� modu"
  IDS_MP_OPTIONS                  "Se�enekler"
  IDS_MP_REFRESH_RATE             "Yenileme h�z�"
  IDS_MP_MAXIMUM_SPEED            "Maksimum h�z"
  IDS_MP_VIDEO_STANDARD           "G�r�nt� standard�"
  IDS_MP_DRIVE_SYNC_FACTOR        "S�r�c� senkron fakt�r�"
  IDS_MP_SETTINGS                 "Ayarlar"
  IDS_MP_CARTRIDGE_IO_SETTINGS    "Kartu�/G� ayarlar�"
  IDS_MP_LANGUAGE                 "Dil"
  IDS_MP_HELP                     "Yard�m"
  IDS_MP_VIEW                     "G�r�n�m"
  IDS_MP_WINDOW                   "Pencere"
  IDS_MI_EXIT                     "��k��"
  IDS_MI_ABOUT                    "VICE Hakk�nda..."
  IDS_MI_PAUSE                    "Duraklat"
  IDS_MI_EDIT_COPY                "Kopyala"
  IDS_MI_EDIT_PASTE               "Yap��t�r"
  IDS_MI_AUTOSTART                "Disk/Teyp imaj�n� otomatik ba�lat..."
  IDS_MI_RESET_HARD               "Hard"
  IDS_MI_RESET_SOFT               "Soft"
  IDS_MI_DRIVE8                   "S�r�c� 8"
  IDS_MI_DRIVE9                   "S�r�c� 9"
  IDS_MI_DRIVE10                  "S�r�c� 10"
  IDS_MI_DRIVE11                  "S�r�c� 11"
  IDS_MI_ATTACH_TAPE              "Teyp imaj�n� yerle�tir..."
  IDS_MI_DETACH_TAPE              "Teyp imaj�n� ��kart"
  IDS_MI_DETACH_ALL               "T�m�"
  IDS_MI_TOGGLE_SOUND             "Ses"
  IDS_MI_TOGGLE_DOUBLESIZE        "�ift boyut"
  IDS_MI_TOGGLE_DOUBLESCAN        "�ift tarama"
  IDS_MI_TOGGLE_DOUBLEVERTICAL    "�ift dikey"
  IDS_MI_DRIVE_TRUE_EMULATION     "Ger�ek s�r�c� em�lasyonu"
  IDS_MI_DRIVE_SOUND_EMULATION    "S�r�c� ses em�lasyonu"
  IDS_MI_AUTOSTART_HANDLE_TDE     "Otomatik ba�latmada Ger�ek S�r�c� Em�lasyonu'nu denetle"
  IDS_MI_TOGGLE_VIDEOCACHE        "G�r�nt� �nbelle�i"
  IDS_MI_DRIVE_SETTINGS           "S�r�c� ayarlar�..."
  IDS_MI_CART_SMART_ATTACH        "Smart-attach imaj�..."
  IDS_MI_CART_ATTACH_CRT          "CRT imaj�..."
  IDS_MI_CART_ATTACH_8KB          "8KB Jenerik imaj..."
  IDS_MI_CART_ATTACH_16KB         "16KB Jenerik imaj..."
  IDS_MI_CART_ATTACH_AR           "Action Replay imaj�..."
  IDS_MI_CART_ATTACH_AR3          "Action Replay MK3 imaj�..."
  IDS_MI_CART_ATTACH_AR4          "Action Replay MK4 imaj�..."
  IDS_MI_CART_ATTACH_STARDOS      "Stardos imaj�..."
  IDS_MI_CART_ATTACH_AT           "Atomic Power imaj�..."
  IDS_MI_CART_ATTACH_EPYX         "Epyx FastLoad imaj�..."
  IDS_MI_CART_ATTACH_IEEE488      "IEEE 488 Arabirimi imaj�..."
  IDS_MI_CART_ATTACH_RR           "Retro Replay imaj�..."
  IDS_MI_CART_ATTACH_MMC_REPLAY   "MMC Replay imaj�..."
  IDS_MI_CART_ATTACH_IDE64        "IDE64 arabirim imaj�..."
  IDS_MI_CART_ATTACH_SS4          "Super Snapshot V4 imaj�..."
  IDS_MI_CART_ATTACH_SS5          "Super Snapshot V5 imaj�..."
  IDS_MI_CART_ATTACH_STB          "Structured BASIC imaj�..."
  IDS_MI_FLIP_ADD                 "Ge�erli imaj� ekle (Birim 8)"
  IDS_MI_FLIP_REMOVE              "Ge�erli imaj� kald�r (Birim 8)"
  IDS_MI_FLIP_NEXT                "Sonraki imaj� yerle�tir (Birim 8)"
  IDS_MI_FLIP_PREVIOUS            "�nceki imaj� yerle�tir (Birim 8)"
  IDS_MI_FLIP_LOAD                "S�ralama listesi dosyas�n� y�kle"
  IDS_MI_FLIP_SAVE                "S�ralama listesi dosyas�n� kaydet"
  IDS_MI_DATASETTE_STOP           "Dur"
  IDS_MI_DATASETTE_START          "Ba�lat"
  IDS_MI_DATASETTE_FORWARD        "�leri"
  IDS_MI_DATASETTE_REWIND         "Geri"
  IDS_MI_DATASETTE_RECORD         "Kay�t"
  IDS_MI_DATASETTE_RESET          "Reset"
  IDS_MI_DATASETTE_RESET_COUNTER  "Sayac� Resetle"
  IDS_MI_CART_SET_DEFAULT         "Kartu�u varsay�lan yap"
  IDS_MI_TOGGLE_CART_RESET        "Kartu� de�i�iminde resetle"
  IDS_MI_CART_DETACH              "Kartu� imaj(lar)�n� ��kart"
  IDS_MI_CART_FREEZE              "Kartu� freeze"
  IDS_MI_MONITOR                  "Monit�r"
#ifdef DEBUG
  IDS_MI_DEBUG_MODE_NORMAL        "Normal"
  IDS_MI_DEBUG_MODE_SMALL         "K���k"
  IDS_MI_DEBUG_MODE_HISTORY       "Tarih�e"
  IDS_MI_DEBUG_MODE_AUTOPLAY      "Tarih Otomatik Y�r�tme"
  IDS_MI_TOGGLE_MAINCPU_TRACE     "Ana CPU �zleme"
  IDS_MI_TOGGLE_DRIVE0CPU_TRACE   "S�r�c�0 CPU �zleme"
  IDS_MI_TOGGLE_DRIVE1CPU_TRACE   "S�r�c�1 CPU �zleme"
#endif
  IDS_MI_SNAPSHOT_LOAD            "Anl�k g�r�nt� imaj�n� y�kle..."
  IDS_MI_SNAPSHOT_SAVE            "Anl�k g�r�nt� imaj�n� kaydet..."
  IDS_MI_LOADQUICK                "H�zl� anl�k g�r�nt� imaj� y�kle"
  IDS_MI_SAVEQUICK                "H�zl� anl�k g�r�nt� imaj� kaydet"
  IDS_MI_EVENT_TOGGLE_RECORD      "Kay�t Tarih�esini Ba�lat/Durdur"
  IDS_MI_EVENT_TOGGLE_PLAYBACK    "Kay�ttan Y�r�tme Tarih�esini Ba�lat/Durdur"
  IDS_MI_EVENT_SETMILESTONE       "Kay�t kilometre ta�� koy"
  IDS_MI_EVENT_RESETMILESTONE     "Kilometre ta��na geri d�n"
  IDS_MI_EVENT_START_MODE_SAVE    "Yeni anl�k g�r�nt� kaydet"
  IDS_MI_EVENT_START_MODE_LOAD    "Varolan anl�k g�r�nt�y� y�kle"
  IDS_MI_EVENT_START_MODE_RESET   "Reset ile ba�lat"
  IDS_MI_EVENT_START_MODE_PLAYBCK "Kay�ttan Y�r�tmenin �zerine Yaz"
  IDS_MI_EVENT_DIRECTORY          "Tarih�e dosyalar�/dizin se�"
  IDS_MI_MEDIAFILE                "Ortam dosyas� kaydet/durdur..."
  IDS_MI_SOUND_RECORD_START       "Sesi dosyaya kaydet..."
  IDS_MI_SOUND_RECORD_STOP        "Ses kayd�n� durdur"
  IDS_MI_REFRESH_RATE_AUTO        "Otomatik"
  IDS_MI_MAXIMUM_SPEED_NO_LIMIT   "Limitsiz"
  IDS_MI_MAXIMUM_SPEED_CUSTOM     "�zel"
  IDS_MI_TOGGLE_WARP_MODE         "Warp modu"
  IDS_MI_TOGGLE_ALWAYSONTOP       "Her zaman �stte"
  IDS_MI_TOGGLE_DX9DISABLE        "DirectX9 video s�r�c�s�n� pasifle�tir"
  IDS_MI_SWAP_JOYSTICK            "Joystickleri de�i�tir"
  IDS_MI_SWAP_EXTRA_JOYSTICK      "Userport joysticklerini yer de�i�tir"
  IDS_MI_ALLOW_JOY_OPPOSITE       "Z�t y�nlere izin ver"
  IDS_MI_JOYKEYS_TOGGLE           "Joy Tu�lar�n� Aktif Et"
  IDS_MI_TOGGLE_VIRTUAL_DEVICES   "Sanal ayg�t trapleri"
  IDS_MI_MOUSE                    "Mouse olaylar�n� yakala"
  IDS_MI_C64MODEL_SETTINGS        "C64 model ayarlar�..."
  IDS_MI_AUTOSTART_SETTINGS       "Otomatik ba�latma ayarlar�..."
  IDS_MI_VIDEO_SETTINGS           "G�r�nt� ayarlar�..."
  IDS_MI_DEVICEMANAGER            "�evresel ayarlar..."
  IDS_MI_JOY_SETTINGS             "Joystick ayarlar�..."
  IDS_MI_USERPORT_JOY_SETTINGS    "Userport joystick ayarlar�..."
  IDS_MI_SIDCART_JOY_SETTINGS     "Sid kartu�u joystick ayarlar�..."
  IDS_MI_KEYBOARD_SETTINGS        "Klavye ayarlar�..."
  IDS_MI_SOUND_SETTINGS           "Ses ayarlar�..."
  IDS_MI_ROM_SETTINGS             "ROM ayarlar�..."
  IDS_MI_RAM_SETTINGS             "RAM ayarlar�..."
  IDS_MI_DATASETTE_SETTINGS       "Teyp Ayarlar�..."
  IDS_MI_VICII_SETTINGS           "VIC-II ayarlar�..."
  IDS_MI_MOUSE_SETTINGS           "Mouse Ayarlar�..."
  IDS_MI_SID_SETTINGS             "SID ayarlar�..."
  IDS_MI_RS232_SETTINGS           "RS232 ayarlar�..."
  IDS_MI_REU_SETTINGS             "REU Ayarlar�..."
  IDS_MI_GEORAM_SETTINGS          "GEO-RAM ayarlar�..."
  IDS_MI_RAMCART_SETTINGS         "RamCart ayarlar�..."
  IDS_MI_DQBB_SETTINGS            "Double Quick Brown Box ayarlar�..."
  IDS_MI_EXPERT_SETTINGS          "Expert Kartu�u ayarlar�..."
  IDS_MI_ISEPIC_SETTINGS          "ISEPIC ayarlar�..."
  IDS_MI_MMC64_SETTINGS           "MMC64 ayarlar�..."
  IDS_MI_MMCREPLAY_SETTINGS       "MMC Replay ayarlar�..."
  IDS_MI_RR_SETTINGS              "Retro Replay ayarlar�..."
  IDS_MI_MAGICVOICE_SETTINGS      "Magic Voice ayarlar�..."
  IDS_MI_MIDI_SETTINGS            "MIDI ayarlar�..."
  IDS_MI_DIGIMAX_SETTINGS         "DigiMAX ayarlar�..."
  IDS_MI_DS12C887RTC_SETTINGS     "DS12C887 RTC ayarlar�..."
  IDS_MI_LIGHTPEN_SETTINGS        "I��kl� Kalem ayarlar�..."
  IDS_MI_IDE64_SETTINGS           "IDE64 ayarlar�..."
#ifdef HAVE_TFE
  IDS_MI_TFE_SETTINGS             "Ethernet Ayarlar�..."
#endif
  IDS_MI_ACIA_SETTINGS            "ACIA Ayarlar�..."
  IDS_MI_RS232USER_SETTINGS       "RS232 userport ayarlar�..."
  IDS_MI_EASYFLASH_SETTINGS       "EasyFlash ayarlar�..."
  IDS_MI_SFX_SE_SETTINGS          "SFX Sound Expander Ayarlar�..."
  IDS_MI_TOGGLE_SFX_SS            "SFX Sound Sampler kartu�unu aktif et"
  IDS_MI_TOGGLE_USERPORT_RTC      "Userport RTC geni�lemesini aktif et"
  IDS_MI_SETTINGS_SAVE_FILE       "Belirtilen dosyaya ge�erli ayarlar� kaydet"
  IDS_MI_SETTINGS_LOAD_FILE       "Belirtilen dosyadan ayarlar� y�kle"
  IDS_MI_SETTINGS_SAVE            "Ge�erli ayarlar� kaydet"
  IDS_MI_SETTINGS_LOAD            "Kaydedilmi� ayarlar� y�kle"
  IDS_MI_SETTINGS_DEFAULT         "Mevcut ayarlar� varsay�lan olarak kaydet"
  IDS_MI_SAVE_SETTINGS_ON_EXIT    "��k��ta ayarlar� kaydet"
  IDS_MI_CONFIRM_ON_EXIT          "VICE'dan ��karken teyit et"
  IDS_MI_LANG_EN                  "�ngilizce"
  IDS_MI_LANG_DA                  "Danimarkaca"
  IDS_MI_LANG_DE                  "Almanca"
  IDS_MI_LANG_ES                  "�spanyolca"
  IDS_MI_LANG_FR                  "Frans�zca"
  IDS_MI_LANG_HU                  "Macarca"
  IDS_MI_LANG_IT                  "�talyanca"
  IDS_MI_LANG_KO                  "Korece"
  IDS_MI_LANG_NL                  "Hollandaca"
  IDS_MI_LANG_PL                  "Polonyaca"
  IDS_MI_LANG_RU                  "Rus�a"
  IDS_MI_LANG_SV                  "�sve��e"
  IDS_MI_LANG_TR                  "T�rk�e"
  IDS_MI_CMDLINE                  "Komut sat�r� se�enekleri"
  IDS_MI_CONTRIBUTORS             "Kat�l�mc�lar"
  IDS_MI_LICENSE                  "Lisans"
  IDS_MI_WARRANTY                 "Garanti verilmez!"
  IDS_MI_TOGGLE_FULLSCREEN        "Tam ekran"
  IDS_MI_SIDCART_SETTINGS         "SID kartu�u ayarlar�..."
  IDS_MI_MON_OPEN                 "A�"
  IDS_MI_MON_SAVE                 "Kaydet"
  IDS_MI_MON_PRINT                "Yazd�r"
  IDS_MI_MON_EXIT                 "��k��       Alt+F4"
  IDS_MI_MON_STOP_DEBUG           "Hata Ay�klamay� Durdur"
  IDS_MI_MON_STOP_EXEC            "�al��t�rmay� Durdur"
  IDS_MI_MON_STEP_INTO            "Ad�mla"
  IDS_MI_MON_STEP_OVER            "�zerinden ge�"
  IDS_MI_MON_SKIP_RETURN          "D�nene kadar ad�mla"
  IDS_MI_MON_GOTO_CURSOR          "�mlece git"
  IDS_MI_MON_EVAL                 "Hesapla"
  IDS_MI_MON_CURRENT              "Ge�erli komut"
  IDS_MI_MON_WND_EVAL             "Hesaplama penceresi"
  IDS_MI_MON_WND_REG              "Pencereyi kaydet"
  IDS_MI_MON_WND_MEM              "Bellek penceresi"
  IDS_MI_MON_WND_DIS              "Da��l�m penceresi"
  IDS_MI_MON_WND_CONSOLE          "Konsol penceresi"
  IDS_MI_MON_COMPUTER             "Bilgisayar"
  IDS_MI_MON_DRIVE8               "S�r�c� 8"
  IDS_MI_MON_DRIVE9               "S�r�c� 9"
  IDS_MI_MON_CASCADE              "Basamakla"
  IDS_MI_MON_TILE_VERT            "Dikey d��e"
  IDS_MI_MON_TILE_HORIZ           "Yatay d��e"
  IDS_MI_MON_ARRANGE_ICONS        "Simgeleri yerle�tir"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

