
#include "vice.h"

#include "debug.h"
#include "res.h"
#include "rescommon.h"
#include "videoarch.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

#define FILE_DESCRIPTION  "Vice PET Emulator"



IDR_MENUPET MENU DISCARDABLE
BEGIN
    POPUP N_("File")
    BEGIN
        MENUITEM "", IDM_AUTOSTART
        MENUITEM SEPARATOR
        POPUP N_("Attach disk image")
        BEGIN
            MENUITEM "", IDM_ATTACH_8
            MENUITEM "", IDM_ATTACH_9
            MENUITEM "", IDM_ATTACH_10
            MENUITEM "", IDM_ATTACH_11
        END
        POPUP N_("Detach disk image")
        BEGIN
            MENUITEM "", IDM_DETACH_8
            MENUITEM "", IDM_DETACH_9
            MENUITEM "", IDM_DETACH_10
            MENUITEM "", IDM_DETACH_11
            MENUITEM SEPARATOR
            MENUITEM "", IDM_DETACH_ALL
        END
        POPUP N_("Flip list")
        BEGIN
            MENUITEM "", IDM_FLIP_ADD
            MENUITEM "", IDM_FLIP_REMOVE
            MENUITEM "", IDM_FLIP_NEXT
            MENUITEM "", IDM_FLIP_PREVIOUS
            MENUITEM SEPARATOR
            MENUITEM "", IDM_FLIP_LOAD
            MENUITEM "", IDM_FLIP_SAVE
        END
        MENUITEM SEPARATOR
        MENUITEM "", IDM_ATTACH_TAPE
        MENUITEM "", IDM_DETACH_TAPE
        POPUP N_("Datassette control")
        BEGIN
            MENUITEM "", IDM_DATASETTE_CONTROL_STOP
            MENUITEM "", IDM_DATASETTE_CONTROL_START
            MENUITEM "", IDM_DATASETTE_CONTROL_FORWARD
            MENUITEM "", IDM_DATASETTE_CONTROL_REWIND
            MENUITEM "", IDM_DATASETTE_CONTROL_RECORD
            MENUITEM "", IDM_DATASETTE_CONTROL_RESET
            MENUITEM "", IDM_DATASETTE_RESET_COUNTER
        END
        MENUITEM SEPARATOR
        MENUITEM "", IDM_PAUSE, CHECKED
        MENUITEM "", IDM_MONITOR
        POPUP N_("Reset")
        BEGIN
            MENUITEM "", IDM_RESET_HARD
            MENUITEM "", IDM_RESET_SOFT
            MENUITEM SEPARATOR
            MENUITEM "", IDM_RESET_DRIVE8
            MENUITEM "", IDM_RESET_DRIVE9
            MENUITEM "", IDM_RESET_DRIVE10
            MENUITEM "", IDM_RESET_DRIVE11
        END
#ifdef DEBUG
                POPUP N_("Debug")
        BEGIN
            POPUP N_("Mode")
            BEGIN
                MENUITEM "", IDM_DEBUG_MODE_NORMAL
                MENUITEM "", IDM_DEBUG_MODE_SMALL
                MENUITEM "", IDM_DEBUG_MODE_HISTORY
                MENUITEM "", IDM_DEBUG_MODE_AUTOPLAY
            END
            MENUITEM "", IDM_TOGGLE_MAINCPU_TRACE, CHECKED
            MENUITEM "", IDM_TOGGLE_DRIVE0CPU_TRACE, CHECKED
            MENUITEM "", IDM_TOGGLE_DRIVE1CPU_TRACE, CHECKED
        END
#endif
       MENUITEM SEPARATOR
       MENUITEM "", IDM_EXIT
    END
    POPUP N_("Edit")
    BEGIN
        MENUITEM "", IDM_EDIT_COPY
        MENUITEM "", IDM_EDIT_PASTE
    END
    POPUP N_("Snapshot")
    BEGIN
        MENUITEM "", IDM_SNAPSHOT_LOAD
        MENUITEM "", IDM_SNAPSHOT_SAVE
        MENUITEM "", IDM_LOADQUICK
        MENUITEM "", IDM_SAVEQUICK
        MENUITEM SEPARATOR
        MENUITEM "", IDM_EVENT_TOGGLE_RECORD
        MENUITEM "", IDM_EVENT_TOGGLE_PLAYBACK
        MENUITEM "", IDM_EVENT_SETMILESTONE
        MENUITEM "", IDM_EVENT_RESETMILESTONE
        POPUP N_("Recording start mode")
        BEGIN
            MENUITEM "", IDM_EVENT_START_MODE_SAVE
            MENUITEM "", IDM_EVENT_START_MODE_LOAD
            MENUITEM "", IDM_EVENT_START_MODE_RESET
            MENUITEM "", IDM_EVENT_START_MODE_PLAYBACK
        END
        MENUITEM "", IDM_EVENT_DIRECTORY
        MENUITEM SEPARATOR
        MENUITEM "", IDM_MEDIAFILE
        MENUITEM SEPARATOR
        MENUITEM "", IDM_SOUND_RECORD_START
        MENUITEM "", IDM_SOUND_RECORD_STOP
    END
    POPUP N_("Options")
    BEGIN
        POPUP N_("Refresh rate")
        BEGIN
            MENUITEM "", IDM_REFRESH_RATE_AUTO
            MENUITEM "", IDM_REFRESH_RATE_1
            MENUITEM "", IDM_REFRESH_RATE_2
            MENUITEM "", IDM_REFRESH_RATE_3
            MENUITEM "", IDM_REFRESH_RATE_4
            MENUITEM "", IDM_REFRESH_RATE_5
            MENUITEM "", IDM_REFRESH_RATE_6
            MENUITEM "", IDM_REFRESH_RATE_7
            MENUITEM "", IDM_REFRESH_RATE_8
            MENUITEM "", IDM_REFRESH_RATE_9
            MENUITEM "", IDM_REFRESH_RATE_10
        END
        POPUP N_("Maximum speed")
        BEGIN
            MENUITEM "", IDM_MAXIMUM_SPEED_200
            MENUITEM "", IDM_MAXIMUM_SPEED_100
            MENUITEM "", IDM_MAXIMUM_SPEED_50
            MENUITEM "", IDM_MAXIMUM_SPEED_20
            MENUITEM "", IDM_MAXIMUM_SPEED_10
            MENUITEM "", IDM_MAXIMUM_SPEED_NO_LIMIT
            MENUITEM SEPARATOR
            MENUITEM "", IDM_MAXIMUM_SPEED_CUSTOM
        END
        MENUITEM "", IDM_TOGGLE_WARP_MODE, CHECKED
        MENUITEM SEPARATOR
        MENUITEM "", IDM_TOGGLE_FULLSCREEN
        MENUITEM "", IDM_TOGGLE_ALWAYSONTOP
#ifdef HAVE_D3D9_H
        MENUITEM "", IDM_TOGGLE_DX9DISABLE
#endif
        MENUITEM SEPARATOR
        MENUITEM "", IDM_TOGGLE_CRTCVIDEOCACHE, CHECKED
        MENUITEM "", IDM_TOGGLE_CRTCDOUBLESIZE, CHECKED
        MENUITEM "", IDM_TOGGLE_CRTCDOUBLESCAN, CHECKED
        MENUITEM "", IDM_TOGGLE_CRTCDOUBLEVERTICAL, CHECKED
        MENUITEM SEPARATOR
        MENUITEM "", IDM_SWAP_EXTRA_JOYSTICK
        MENUITEM "", IDM_ALLOW_JOY_OPPOSITE_TOGGLE
        MENUITEM "", IDM_JOYKEYS_TOGGLE
        MENUITEM SEPARATOR
        MENUITEM "", IDM_TOGGLE_SOUND, CHECKED
        MENUITEM SEPARATOR
        MENUITEM "", IDM_TOGGLE_DRIVE_TRUE_EMULATION, CHECKED
        MENUITEM "", IDM_TOGGLE_DRIVE_SOUND_EMULATION, CHECKED
        MENUITEM "", IDM_TOGGLE_AUTOSTART_HANDLE_TDE
        MENUITEM "", IDM_TOGGLE_VIRTUAL_DEVICES
        POPUP N_("Drive sync factor")
        BEGIN
            MENUITEM "",  IDM_SYNC_FACTOR_PAL
            MENUITEM "", IDM_SYNC_FACTOR_NTSC
        END
    END
    POPUP N_("Settings")
    BEGIN
        MENUITEM "", IDM_PETMODEL_SETTINGS
        MENUITEM "", IDM_AUTOSTART_SETTINGS
        MENUITEM "", IDM_VIDEO_SETTINGS
        MENUITEM "", IDM_PET_SETTINGS
        MENUITEM "", IDM_DEVICEMANAGER
        MENUITEM "", IDM_DRIVE_SETTINGS
        MENUITEM "", IDM_DATASETTE_SETTINGS
        MENUITEM "", IDM_EXTRA_JOY_SETTINGS
        MENUITEM "", IDM_KEYBOARD_SETTINGS
        MENUITEM "", IDM_SOUND_SETTINGS
        MENUITEM "", IDM_ROM_SETTINGS
        MENUITEM "", IDM_RAM_SETTINGS
        MENUITEM "", IDM_RS232_SETTINGS
        POPUP N_("Cartridge/IO settings")
        BEGIN
            MENUITEM "", IDM_ACIA_SETTINGS
            MENUITEM "", IDM_PETCOLOUR_SETTINGS
            MENUITEM "", IDM_PETDWW_SETTINGS
            MENUITEM "", IDM_PETREU_SETTINGS
            MENUITEM "", IDM_SIDCART_SETTINGS
            MENUITEM "", IDM_TOGGLE_PETHRE
            MENUITEM "", IDM_TOGGLE_PET_USERPORT_DAC
        END
        MENUITEM SEPARATOR
        MENUITEM "", IDM_SETTINGS_SAVE_FILE
        MENUITEM "", IDM_SETTINGS_LOAD_FILE
        MENUITEM "", IDM_SETTINGS_SAVE
        MENUITEM "", IDM_SETTINGS_LOAD
        MENUITEM "", IDM_SETTINGS_DEFAULT
        MENUITEM SEPARATOR
        MENUITEM "", IDM_TOGGLE_SAVE_SETTINGS_ON_EXIT
        MENUITEM "", IDM_TOGGLE_CONFIRM_ON_EXIT
    END
    POPUP N_("Language")
    BEGIN
        MENUITEM "", IDM_LANG_EN
        MENUITEM "", IDM_LANG_DA
        MENUITEM "", IDM_LANG_DE
        MENUITEM "", IDM_LANG_ES
        MENUITEM "", IDM_LANG_FR
        MENUITEM "", IDM_LANG_HU
        MENUITEM "", IDM_LANG_IT
        MENUITEM "", IDM_LANG_KO
        MENUITEM "", IDM_LANG_NL
        MENUITEM "", IDM_LANG_PL
        MENUITEM "", IDM_LANG_RU
        MENUITEM "", IDM_LANG_SV
        MENUITEM "", IDM_LANG_TR
    END
    POPUP N_("Help")
    BEGIN
        MENUITEM "", IDM_HELP
        MENUITEM SEPARATOR
        MENUITEM "", IDM_ABOUT
        MENUITEM SEPARATOR
        MENUITEM "", IDM_CMDLINE
        MENUITEM SEPARATOR
        MENUITEM "", IDM_CONTRIBUTORS
        MENUITEM "", IDM_LICENSE
        MENUITEM "", IDM_WARRANTY
    END
END



IDD_PETROM_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 240, 150
BEGIN
    LTEXT       "", IDC_KERNAL,
                9, 8, 40, 8
    EDITTEXT    IDC_PETROM_KERNAL_FILE,
                55, 7, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_KERNAL_BROWSE,
                185, 7, 50, 14, 0

    LTEXT       "", IDC_BASIC,
                9, 28, 40, 8
    EDITTEXT    IDC_PETROM_BASIC_FILE,
                55, 27, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_BASIC_BROWSE,
                185, 27, 50, 14, 0

    LTEXT       "", IDC_CHARACTER,
                9, 48, 40, 8
    EDITTEXT    IDC_PETROM_CHARGEN_FILE,
                55, 47, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_CHARGEN_BROWSE,
                185, 47, 50, 14, 0

    LTEXT       "", IDC_EDITOR,
                9, 68, 40, 8
    EDITTEXT    IDC_PETROM_EDITOR_FILE,
                55, 67, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_EDITOR_BROWSE,
                185, 67, 50, 14, 0

    LTEXT       "", IDC_ROM_9,
                9, 88, 40, 8
    EDITTEXT    IDC_PETROM_ROM9_FILE,
                55, 87, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_ROM9_BROWSE,
                185, 87, 50, 14, 0

    LTEXT       "", IDC_ROM_A,
                9, 108, 40, 8
    EDITTEXT    IDC_PETROM_ROMA_FILE,
                55, 107, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_ROMA_BROWSE,
                185, 107, 50, 14, 0

    LTEXT       "", IDC_ROM_B,
                9, 128, 40, 8
    EDITTEXT    IDC_PETROM_ROMB_FILE,
                55, 127, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_PETROM_ROMB_BROWSE,
                185, 127, 50, 14, 0
END



IDD_PETDRIVEROM_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 240, 110
BEGIN
    LTEXT       "", IDC_2031,
                9, 8, 40, 8
    EDITTEXT    IDC_DRIVEROM_2031_FILE,
                55, 7, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_DRIVEROM_2031_BROWSE,
                185, 7, 50, 14, 0

    LTEXT       "", IDC_2040,
                9, 28, 40, 8
    EDITTEXT    IDC_DRIVEROM_2040_FILE,
                55, 27, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_DRIVEROM_2040_BROWSE,
                185, 27, 50, 14, 0

    LTEXT       "", IDC_3040,
                9, 48, 40, 8
    EDITTEXT    IDC_DRIVEROM_3040_FILE,
                55, 47, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_DRIVEROM_3040_BROWSE,
                185, 47, 50, 14, 0

    LTEXT       "", IDC_4040,
                9, 68, 40, 8
    EDITTEXT    IDC_DRIVEROM_4040_FILE,
                55, 67, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_DRIVEROM_4040_BROWSE,
                185, 67, 50, 14, 0

    LTEXT       "", IDC_1001,
                9, 88, 40, 8
    EDITTEXT    IDC_DRIVEROM_1001_FILE,
                55, 87, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_DRIVEROM_1001_BROWSE,
                185, 87, 50, 14, 0
END



IDD_PETROM_RESOURCE_DIALOG DIALOG DISCARDABLE 0, 0, 160, 145
BEGIN
    GROUPBOX        "", IDC_COMPUTER_RESOURCES,
                    4, 3, 151, 115
    AUTOCHECKBOX    "", IDC_PETROM_KERNAL_RESOURCE,
                    11, 13, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_BASIC_RESOURCE,
                    11, 28, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_CHARGEN_RESOURCE,
                    11, 43, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_EDITOR_RESOURCE,
                    11, 58, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_ROM9_RESOURCE,
                    11, 73, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_ROMA_RESOURCE,
                    11, 88, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_PETROM_ROMB_RESOURCE,
                    11, 103, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    20, 125, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 125, 50, 14, WS_TABSTOP
END



IDD_PETROMDRIVE_RESOURCE_DIALOG DIALOG DISCARDABLE  0, 0, 160, 115
BEGIN
    GROUPBOX        "", IDC_DRIVE_RESOURCES,
                    4, 3, 151, 85
    AUTOCHECKBOX    "", IDC_DRIVEROM_2031_RESOURCE,
                    11, 13, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DRIVEROM_2040_RESOURCE,
                    11, 28, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DRIVEROM_3040_RESOURCE,
                    11, 43, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DRIVEROM_4040_RESOURCE,
                    11, 58, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DRIVEROM_1001_RESOURCE,
                    11, 73, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    20, 95, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 95, 50, 14, WS_TABSTOP
END



IDD_PETMODEL_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 150, 80
CAPTION ""
BEGIN
    LTEXT         "", IDC_PETMODEL_LABEL,
                  4, 12, 60, 8
    COMBOBOX      IDC_PETMODEL_LIST,
                  45, 11, 90, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP


    DEFPUSHBUTTON   "", IDOK,
                    20, 60, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 60, 50, 14, WS_TABSTOP
END



IDD_PET_SETTINGS_MEMORY_DIALOG DIALOG DISCARDABLE 0, 0, 240, 225
BEGIN
    GROUPBOX        "", IDC_PET_MEMORY,
                    5, 15, 65, 105
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM4K,
                    15, 30, 45, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM8K,
                    15, 45, 45, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM16K,
                    15, 60, 45, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM32K,
                    15, 75, 45, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM96K,
                    15, 90, 45, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_PET_MEM128K,
                    15, 105, 45, 10, BS_AUTORADIOBUTTON
END



IDD_PET_SETTINGS_IO_DIALOG DIALOG DISCARDABLE 0, 0, 240, 225
BEGIN
    GROUPBOX        "", IDC_PET_VIDEO,
                    5, 15, 80, 60
    AUTORADIOBUTTON "", IDC_SELECT_PET_VIDEO_AUTO,
                    15, 30, 65, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_PET_VIDEO_40, 
                    15, 45, 55, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_PET_VIDEO_80,
                    15, 60, 55, 10, BS_AUTORADIOBUTTON

    GROUPBOX        "", IDC_PET_IO_SIZE,
                    5, 85, 80, 60
    AUTORADIOBUTTON "", IDC_SELECT_PET_IO256,
                    15, 100, 45, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_PET_IO2K ,
                    15, 115, 45, 10, BS_AUTORADIOBUTTON

    GROUPBOX        "", IDC_PET_CRTC,
                    105, 15, 90, 60
    AUTOCHECKBOX    "", IDC_TOGGLE_PET_CRTC,
                    115, 30, 75, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP

    GROUPBOX        "", IDC_PET_KEYBOARD,
                    105, 85, 90, 60
    AUTORADIOBUTTON "", IDC_SELECT_PET_KEYB_GRAPHICS,
                    115, 100, 75, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_PET_KEYB_BUSINESS,
                    115, 115, 75, 10, BS_AUTORADIOBUTTON
END



IDD_PET_SETTINGS_SUPER_DIALOG DIALOG DISCARDABLE 0, 0, 240, 225
BEGIN
    GROUPBOX     "", IDC_PET_IO_SETTINGS,
                 5, 15, 160, 30
    AUTOCHECKBOX "", IDC_TOGGLE_PET_SUPER_IO_ENABLE,
                 15, 30, 145, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
END



IDD_PET_SETTINGS_8296_DIALOG DIALOG DISCARDABLE 0, 0, 240, 225
BEGIN
    GROUPBOX     "", IDC_PET_RAM_SETTINGS,
                 5, 15, 90, 45
    AUTOCHECKBOX "", IDC_TOGGLE_PET_8296_RAM9,
                 15, 30, 75, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX "", IDC_TOGGLE_PET_8296_RAMA,
                 15, 45, 75, 10, BS_AUTOCHECKBOX
END



IDD_PETKBD_MAPPING_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 240, 180
BEGIN
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_GRSYM,
                    10, 10, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_GRPOS,
                    10, 30, 54, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_UKSYM,
                    10, 50, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_UKPOS,
                    10, 70, 54, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_DESYM,
                    10, 90, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_PETKBD_MAPPING_SELECT_DEPOS,
                    10, 110, 54, 10, BS_AUTORADIOBUTTON

    EDITTEXT        IDC_PETKBD_MAPPING_GRSYM,
                    65, 9, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_GRSYM_BROWSE,
                    185, 9, 50, 14, 0
    EDITTEXT        IDC_PETKBD_MAPPING_GRPOS,
                    65, 29, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_GRPOS_BROWSE,
                    185, 29, 50, 14, 0
    EDITTEXT        IDC_PETKBD_MAPPING_UKSYM,
                    65, 49, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_UKSYM_BROWSE,
                    185, 49, 50, 14, 0
    EDITTEXT        IDC_PETKBD_MAPPING_UKPOS,
                    65, 69, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_UKPOS_BROWSE,
                    185, 69, 50, 14, 0
    EDITTEXT        IDC_PETKBD_MAPPING_DESYM,
                    65, 89, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_DESYM_BROWSE,
                    185, 89, 50, 14, 0
    EDITTEXT        IDC_PETKBD_MAPPING_DEPOS,
                    65, 109, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_PETKBD_MAPPING_DEPOS_BROWSE,
                    185, 109, 50, 14, 0

    PUSHBUTTON      "", IDC_PETKBD_MAPPING_DUMP,
                    10, 134, 60, 14, 0
    PUSHBUTTON      "", IDC_KBD_SHORTCUT_DUMP,
                    80, 134, 60, 14, 0

    DEFPUSHBUTTON   "", IDOK,
                    20, 160, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 160, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_INPUT_OUTPUT               N_("Input/Output")
  IDS_PET_SETTINGS               N_("PET settings")
  IDS_EDITOR                     N_("Editor")
  IDS_ROM_9                      N_("ROM 9")
  IDS_ROM_A                      N_("ROM A")
  IDS_ROM_B                      N_("ROM B")
  IDS_PET_VIDEO                  N_("Video")
  IDS_SELECT_PET_VIDEO_AUTO      N_("Auto (from ROM)")
  IDS_SELECT_PET_VIDEO_40        N_("40 Columns")
  IDS_SELECT_PET_VIDEO_80        N_("80 Columns")
  IDS_PET_IO_SIZE                N_("IO Size")
  IDS_SELECT_PET_IO256           N_("256 Byte")
  IDS_SELECT_PET_IO2K            N_("2 kByte")
  IDS_TOGGLE_PET_CRTC            N_("CRTC chip enable")
  IDS_PET_KEYBOARD               N_("Keyboard")
  IDS_SELECT_PET_KEYB_GRAPHICS   N_("Graphics")
  IDS_SELECT_PET_KEYB_BUSINESS   N_("Business (UK)")
  IDS_PET_IO_SETTINGS            N_("IO Settings")
  IDS_TOGGLE_PET_SUPER_IO_ENABLE N_("SuperPET I/O enable (disables 8x96)")
  IDS_PET_RAM_SETTINGS           N_("RAM settings")
  IDS_TOGGLE_PET_8296_RAM9       N_("$9*** as RAM")
  IDS_TOGGLE_PET_8296_RAMA       N_("$A*** as RAM")
  IDS_PETMODEL                   N_("PET model")
  IDS_MI_PET_SETTINGS            N_("PET settings")
  IDS_MI_PETCOLOUR_SETTINGS      N_("PET Colour board settings")
  IDS_MI_PETDWW_SETTINGS         N_("PET DWW settings")
  IDS_MI_PETREU_SETTINGS         N_("PET REU settings")
  IDS_MI_TOGGLE_PETHRE           N_("Enable PET High Res Emulation board")
  IDS_MI_TOGGLE_PET_USERPORT_DAC N_("Enable Userport DAC for sound output")
  IDS_MI_PETMODEL_SETTINGS       N_("PET model settings")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Inddata/uddata"
  IDS_PET_SETTINGS               "PET-indstillinger"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Grafik"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatisk (fra ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 kolonner"
  IDS_SELECT_PET_VIDEO_80        "80 kolonner"
  IDS_PET_IO_SIZE                "I/O-st�rrelse"
  IDS_SELECT_PET_IO256           "256 byte"
  IDS_SELECT_PET_IO2K            "2 kbyte"
  IDS_TOGGLE_PET_CRTC            "CRTC-styresignal"
  IDS_PET_KEYBOARD               "Tastatur"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafisk"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (Storbritannien)"
  IDS_PET_IO_SETTINGS            "I/O-indstillinger"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "Aktiv�r SuperPET-I/O (deaktiverer 8x96)"
  IDS_PET_RAM_SETTINGS           "RAM-indstillinger"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** som RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** som RAM"
  IDS_PETMODEL                   "PET-model"
  IDS_MI_PET_SETTINGS            "PET-indstillinger..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW-indstillinger..."
  IDS_MI_PETREU_SETTINGS         "PET REU-indstillinger..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Aktiv�r brugerport DAC for lydoutput"
  IDS_MI_PETMODEL_SETTINGS       "PET-model indstillinger..."
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Ein/Ausgabe"
  IDS_PET_SETTINGS               "PET Einstellungen"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatisch (von ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 Spalten"
  IDS_SELECT_PET_VIDEO_80        "80 Spalten"
  IDS_PET_IO_SIZE                "IO Gr��e"
  IDS_SELECT_PET_IO256           "256 Byte"
  IDS_SELECT_PET_IO2K            "2 kByte"
  IDS_TOGGLE_PET_CRTC            "CRTC Chip aktivieren"
  IDS_PET_KEYBOARD               "Tastatur"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafik"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (UK)"
  IDS_PET_IO_SETTINGS            "IO Einstellungen"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET I/O aktivieren (deaktiviert 8x96)"
  IDS_PET_RAM_SETTINGS           "RAM Einstellungen"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** als RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** als RAM"
  IDS_PETMODEL                   "PET Modell"
  IDS_MI_PET_SETTINGS            "PET Einstellungen..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Farbkarte Einstellungen..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW Einstellungen..."
  IDS_MI_PETREU_SETTINGS         "PET REU Einstellungen..."
  IDS_MI_TOGGLE_PETHRE           "PET Hi-Res Emulation Board aktivieren"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Userport DAC Sound aktivieren"
  IDS_MI_PETMODEL_SETTINGS       "PET Modell Einstellungen..."
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Entrada/Salida"
  IDS_PET_SETTINGS               "Ajustes PET"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Auto (desde ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 columnas"
  IDS_SELECT_PET_VIDEO_80        "80 columnas"
  IDS_PET_IO_SIZE                "Tama�o entrada/salida"
  IDS_SELECT_PET_IO256           "256 Bytes"
  IDS_SELECT_PET_IO2K            "2 kBytes"
  IDS_TOGGLE_PET_CRTC            "Permitir chip CRTC"
  IDS_PET_KEYBOARD               "Teclado"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Gr�ficos"
  IDS_SELECT_PET_KEYB_BUSINESS   "Negocios (UK)"
  IDS_PET_IO_SETTINGS            "Ajustes Entrada/Salida"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET entradas/salidas habilitadas (deshabilitado 8x96)"
  IDS_PET_RAM_SETTINGS           "Ajustes RAM"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** como RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** como RAM"
  IDS_PETMODEL                   "Modelo PET"
  IDS_MI_PET_SETTINGS            "Ajustes PET..."
  IDS_MI_PETCOLOUR_SETTINGS      "Ajustes color PET..."
  IDS_MI_PETDWW_SETTINGS         "Ajustes PET DWW..."
  IDS_MI_PETREU_SETTINGS         "Ajustes PET REU..."
  IDS_MI_TOGGLE_PETHRE           "Permitir emulaci�n Tableta gr�fica PET alta resoluci�n"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Permitir puerto DAC para salida de sonido"
  IDS_MI_PETMODEL_SETTINGS       "Ajustes modelo PET..."
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Entr�e/Sortie"
  IDS_PET_SETTINGS               "Param�tres PET"
  IDS_EDITOR                     "�diteur"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Vid�o"
  IDS_SELECT_PET_VIDEO_AUTO      "Auto (depuis ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 Colonnes"
  IDS_SELECT_PET_VIDEO_80        "80 Colonnes"
  IDS_PET_IO_SIZE                "Taille d'E/S"
  IDS_SELECT_PET_IO256           "256 Octets"
  IDS_SELECT_PET_IO2K            "2 ko"
  IDS_TOGGLE_PET_CRTC            "Activer puce CRTC"
  IDS_PET_KEYBOARD               "Clavier"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Graphiques"
  IDS_SELECT_PET_KEYB_BUSINESS   "Bureautique (UK)"
  IDS_PET_IO_SETTINGS            "Param�tres E/S"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "E/S SuperPET activ� (d�sactive 8x96)"
  IDS_PET_RAM_SETTINGS           "Param�tres de la RAM"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** comme RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** comme RAM (8296 seulement)"
  IDS_PETMODEL                   "Mod�le PET"
  IDS_MI_PET_SETTINGS            "Param�tres PET..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "Param�tres PET DWW..."
  IDS_MI_PETREU_SETTINGS         "Param�tres PET REU..."
  IDS_MI_TOGGLE_PETHRE           "Activer la carte d'�mulation PET Haute R�solution"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Activer DAC port utilisateur comme sortie de son"
  IDS_MI_PETMODEL_SETTINGS       "Param�tres du mod�le PET..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Bemenet/Kimenet"
  IDS_PET_SETTINGS               "PET be�ll�t�sai"
  IDS_EDITOR                     "Szerkeszt�"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatikus (ROM-b�l)"
  IDS_SELECT_PET_VIDEO_40        "40 Oszlop"
  IDS_SELECT_PET_VIDEO_80        "80 Oszlop"
  IDS_PET_IO_SIZE                "IO Size"
  IDS_SELECT_PET_IO256           "256 B�jt"
  IDS_SELECT_PET_IO2K            "2 kB�jt"
  IDS_TOGGLE_PET_CRTC            "CRTC chip enable"
  IDS_PET_KEYBOARD               "Billenty�zet"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafikus"
  IDS_SELECT_PET_KEYB_BUSINESS   "Hivatalos (UK)"
  IDS_PET_IO_SETTINGS            "IO Settings"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET I/O enged�lyez�se (8x96-ot tiltja)"
  IDS_PET_RAM_SETTINGS           "RAM be�ll�t�sai"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** RAM-k�nt"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** RAM-k�nt"
  IDS_PETMODEL                   "PET model"
  IDS_MI_PET_SETTINGS            "PET be�ll�t�sai..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW settings..."
  IDS_MI_PETREU_SETTINGS         "PET REU settings..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Enable Userport DAC for sound output"
  IDS_MI_PETMODEL_SETTINGS       "PET modell be�ll�t�sai..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Input/Output"
  IDS_PET_SETTINGS               "Impostazioni PET"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Auto (dalla ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 Colonne"
  IDS_SELECT_PET_VIDEO_80        "80 Colonne"
  IDS_PET_IO_SIZE                "Dimensione I/O"
  IDS_SELECT_PET_IO256           "256 Byte"
  IDS_SELECT_PET_IO2K            "2 kByte"
  IDS_TOGGLE_PET_CRTC            "Attiva chip CRTC"
  IDS_PET_KEYBOARD               "Tastiera"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafica"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (UK)"
  IDS_PET_IO_SETTINGS            "Impostazioni IO"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "Attiva I/O SuperPET (disattiva 8x96)"
  IDS_PET_RAM_SETTINGS           "Impostazioni RAM"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** come RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** come RAM"
  IDS_PETMODEL                   "Modello PET"
  IDS_MI_PET_SETTINGS            "Impostazioni PET..."
  IDS_MI_PETCOLOUR_SETTINGS      "Impostazioni scheda PET Colour..."
  IDS_MI_PETDWW_SETTINGS         "Impostazioni PET DWW..."
  IDS_MI_PETREU_SETTINGS         "Impostazioni PET REU..."
  IDS_MI_TOGGLE_PETHRE           "Attiva scheda alta risoluzione del PET"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Attiva DAC su userport per la riproduzione audio"
  IDS_MI_PETMODEL_SETTINGS       "Impostazioni modello PET..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "�Է�/���"
  IDS_PET_SETTINGS               "PET settings"
  IDS_EDITOR                     "������"
  IDS_ROM_9                      "��9"
  IDS_ROM_A                      "��A"
  IDS_ROM_B                      "��B"
  IDS_PET_VIDEO                  "����"
  IDS_SELECT_PET_VIDEO_AUTO      "�ڵ� (ROM ����)"
  IDS_SELECT_PET_VIDEO_40        "40ĭ"
  IDS_SELECT_PET_VIDEO_80        "80ĭ"
  IDS_PET_IO_SIZE                "IO Size"
  IDS_SELECT_PET_IO256           "256 byte"
  IDS_SELECT_PET_IO2K            "2 kbyte"
  IDS_TOGGLE_PET_CRTC            "CRTC Ĩ ����"
  IDS_PET_KEYBOARD               "Ű����"
  IDS_SELECT_PET_KEYB_GRAPHICS   "�׷���"
  IDS_SELECT_PET_KEYB_BUSINESS   "�����Ͻ�(UK)"
  IDS_PET_IO_SETTINGS            "IO Settings"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET I/O ����ϱ� (��������ʱ� 8x96)"
  IDS_PET_RAM_SETTINGS           "RAM ����"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** as RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** as RAM"
  IDS_PETMODEL                   "PET model"
  IDS_MI_PET_SETTINGS            "PET settings..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW settings..."
  IDS_MI_PETREU_SETTINGS         "PET REU settings..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Enable Userport DAC for sound output"
  IDS_MI_PETMODEL_SETTINGS       "PET �� ����..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Invoer/Uitvoer"
  IDS_PET_SETTINGS               "PET instellingen"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatisch (van ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 Kolommen"
  IDS_SELECT_PET_VIDEO_80        "80 Kolommen"
  IDS_PET_IO_SIZE                "IO grootte"
  IDS_SELECT_PET_IO256           "256 Byte"
  IDS_SELECT_PET_IO2K            "2 kByte"
  IDS_TOGGLE_PET_CRTC            "CRTC chip aan"
  IDS_PET_KEYBOARD               "Toetsenbord"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafiek"
  IDS_SELECT_PET_KEYB_BUSINESS   "Zakelijk (UK)"
  IDS_PET_IO_SETTINGS            "IO instellingen"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET I/O activeren (zet 8x96 uit)"
  IDS_PET_RAM_SETTINGS           "RAM instellingen"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** als RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** als RAM"
  IDS_PETMODEL                   "PET model"
  IDS_MI_PET_SETTINGS            "PET instellingen..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour bord instellingen..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW instellingen..."
  IDS_MI_PETREU_SETTINGS         "PET REU instellingen..."
  IDS_MI_TOGGLE_PETHRE           "Activeer PET High Res Emulation bord"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Activeer userport DAC voor geluidsuitvoer"
  IDS_MI_PETMODEL_SETTINGS       "PET model instellingen..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "wej�cie/wyj�cie"
  IDS_PET_SETTINGS               "Ustawienia PET"
  IDS_EDITOR                     "Edytor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Wideo"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatycznie (z ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 kolumn"
  IDS_SELECT_PET_VIDEO_80        "80 kolumn"
  IDS_PET_IO_SIZE                "Rozmiar we/wy"
  IDS_SELECT_PET_IO256           "256 bajt�w"
  IDS_SELECT_PET_IO2K            "2 kBajty "
  IDS_TOGGLE_PET_CRTC            "W��cz uk�ad CRTC"
  IDS_PET_KEYBOARD               "Klawiatura"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafika"
  IDS_SELECT_PET_KEYB_BUSINESS   "Biznesowa (UK)"
  IDS_PET_IO_SETTINGS            "Ustawienia we/wy"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "W��cz SuperPET I/O (wy��cza 8x96)"
  IDS_PET_RAM_SETTINGS           "Ustawienia RAM"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** jako RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** jako RAM"
  IDS_PETMODEL                   "Model PET"
  IDS_MI_PET_SETTINGS            "Ustawienia PET..."
  IDS_MI_PETCOLOUR_SETTINGS      "Ustawienia koloru karty PET..."
  IDS_MI_PETDWW_SETTINGS         "Ustawienia PET DWW..."
  IDS_MI_PETREU_SETTINGS         "Ustawienia PET REU..."
  IDS_MI_TOGGLE_PETHRE           "W��cz uk�ad emulatora PET hi-res"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "W��cz userport DAC jako wyj�cie d�wi�ku"
  IDS_MI_PETMODEL_SETTINGS       "Ustawienia modelu PET..."
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
  IDS_INPUT_OUTPUT               "����/�����"
  IDS_PET_SETTINGS               "PET settings"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Video"
  IDS_SELECT_PET_VIDEO_AUTO      "Auto (from ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 �������"
  IDS_SELECT_PET_VIDEO_80        "80 �������"
  IDS_PET_IO_SIZE                "IO Size"
  IDS_SELECT_PET_IO256           "256 Byte"
  IDS_SELECT_PET_IO2K            "2 kByte"
  IDS_TOGGLE_PET_CRTC            "CRTC chip enable"
  IDS_PET_KEYBOARD               "����������"
  IDS_SELECT_PET_KEYB_GRAPHICS   "�������"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (UK)"
  IDS_PET_IO_SETTINGS            "IO Settings"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET I/O enable (disables 8x96)"
  IDS_PET_RAM_SETTINGS           "��������� RAM"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** as RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** as RAM"
  IDS_PETMODEL                   "PET model"
  IDS_MI_PET_SETTINGS            "PET settings..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW settings..."
  IDS_MI_PETREU_SETTINGS         "PET REU settings..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Enable Userport DAC for sound output"
  IDS_MI_PETMODEL_SETTINGS       "��������� ������ PET..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Indata/utdata"
  IDS_PET_SETTINGS               "PET-inst�llningar"
  IDS_EDITOR                     "Editor"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "Grafik"
  IDS_SELECT_PET_VIDEO_AUTO      "Automatisk (fr�n ROM)"
  IDS_SELECT_PET_VIDEO_40        "40 kolumner"
  IDS_SELECT_PET_VIDEO_80        "80 kolumner"
  IDS_PET_IO_SIZE                "I/O-utrymme"
  IDS_SELECT_PET_IO256           "256 byte"
  IDS_SELECT_PET_IO2K            "2 kbyte"
  IDS_TOGGLE_PET_CRTC            "Aktivera CRTC-krets"
  IDS_PET_KEYBOARD               "Tangentbord"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafisk"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (Storbritannien)"
  IDS_PET_IO_SETTINGS            "I/O-Inst�llningar"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "Aktivera SuperPET-I/O (inaktiverar 8x96)"
  IDS_PET_RAM_SETTINGS           "RAM-inst�llningar"
  IDS_TOGGLE_PET_8296_RAM9       "$9*** som RAM"
  IDS_TOGGLE_PET_8296_RAMA       "$A*** som RAM"
  IDS_PETMODEL                   "PET-modell"
  IDS_MI_PET_SETTINGS            "PET-inst�llningar..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW-Inst�llningar..."
  IDS_MI_PETREU_SETTINGS         "PET REU-Inst�llningar..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Aktivera D/A-omvandlare p� anv�ndarporten f�r ljudutdata"
  IDS_MI_PETMODEL_SETTINGS       "Inst�llningar f�r PET-modell..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_INPUT_OUTPUT               "Giri�/��k��"
  IDS_PET_SETTINGS               "PET ayarlar�"
  IDS_EDITOR                     "Edit�r"
  IDS_ROM_9                      "ROM 9"
  IDS_ROM_A                      "ROM A"
  IDS_ROM_B                      "ROM B"
  IDS_PET_VIDEO                  "G�r�nt�"
  IDS_SELECT_PET_VIDEO_AUTO      "Otomatik (ROM'dan)"
  IDS_SELECT_PET_VIDEO_40        "40 S�tun"
  IDS_SELECT_PET_VIDEO_80        "80 S�tun"
  IDS_PET_IO_SIZE                "G� Boyutu"
  IDS_SELECT_PET_IO256           "256 Byte"
  IDS_SELECT_PET_IO2K            "2 kByte"
  IDS_TOGGLE_PET_CRTC            "*CRTC �ipini aktif et"
  IDS_PET_KEYBOARD               "Klavye"
  IDS_SELECT_PET_KEYB_GRAPHICS   "Grafikler"
  IDS_SELECT_PET_KEYB_BUSINESS   "Business (UK)"
  IDS_PET_IO_SETTINGS            "G� Ayarlar�"
  IDS_TOGGLE_PET_SUPER_IO_ENABLE "SuperPET G/� aktif et (8x96'y� pasifle�tir)"
  IDS_PET_RAM_SETTINGS           "RAM ayarlar�"
  IDS_TOGGLE_PET_8296_RAM9       "RAM olarak $9***"
  IDS_TOGGLE_PET_8296_RAMA       "RAM olarak $A***"
  IDS_PETMODEL                   "PET modeli"
  IDS_MI_PET_SETTINGS            "PET ayarlar�..."
  IDS_MI_PETCOLOUR_SETTINGS      "PET Colour board settings..."
  IDS_MI_PETDWW_SETTINGS         "PET DWW Ayarlar�..."
  IDS_MI_PETREU_SETTINGS         "PET REU Ayarlar�..."
  IDS_MI_TOGGLE_PETHRE           "Enable PET High Res Emulation board"
  IDS_MI_TOGGLE_PET_USERPORT_DAC "Ses ��k��� i�in Userport DAC'� aktif et"
  IDS_MI_PETMODEL_SETTINGS       "PET model ayarlar�..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


