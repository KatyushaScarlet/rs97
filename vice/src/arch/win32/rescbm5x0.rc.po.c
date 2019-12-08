
#include "vice.h"

#include "debug.h"
#include "res.h"
#include "rescommon.h"
#include "videoarch.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

#define FILE_DESCRIPTION  "Vice CBM5x0 Emulator"



IDR_MENUCBM5X0 MENU DISCARDABLE
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
        POPUP N_("Attach cartridge image")
        BEGIN
            MENUITEM "", IDM_LOAD_CART_1000
            MENUITEM "", IDM_UNLOAD_CART_1000
            MENUITEM "", IDM_LOAD_CART_2000_3000
            MENUITEM "", IDM_UNLOAD_CART_2000_3000
            MENUITEM "", IDM_LOAD_CART_4000_5000
            MENUITEM "", IDM_UNLOAD_CART_4000_5000
            MENUITEM "", IDM_LOAD_CART_6000_7000
            MENUITEM "", IDM_UNLOAD_CART_6000_7000
            MENUITEM SEPARATOR
            MENUITEM "", IDM_TOGGLE_CART_RESET
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
        MENUITEM "", IDM_TOGGLE_VIDEOCACHE, CHECKED
        MENUITEM "", IDM_TOGGLE_DOUBLESIZE, CHECKED
        MENUITEM "", IDM_TOGGLE_DOUBLESCAN, CHECKED
        MENUITEM SEPARATOR
        MENUITEM "", IDM_SWAP_JOYSTICK
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
            MENUITEM "", IDM_SYNC_FACTOR_PAL
            MENUITEM "", IDM_SYNC_FACTOR_NTSC
        END
    END
    POPUP N_("Settings")
    BEGIN
        MENUITEM "", IDM_CBM2MODEL_SETTINGS
        MENUITEM "", IDM_AUTOSTART_SETTINGS
        MENUITEM "", IDM_VIDEO_SETTINGS
        MENUITEM "", IDM_CBM2_SETTINGS
        MENUITEM "", IDM_DEVICEMANAGER
        MENUITEM "", IDM_DRIVE_SETTINGS
        MENUITEM "", IDM_DATASETTE_SETTINGS
        MENUITEM "", IDM_JOY_SETTINGS
        MENUITEM "", IDM_KEYBOARD_SETTINGS
        MENUITEM "", IDM_SOUND_SETTINGS
        MENUITEM "", IDM_SID_SETTINGS
        MENUITEM "", IDM_CIA_SETTINGS
        MENUITEM "", IDM_ROM_SETTINGS
        MENUITEM "", IDM_RAM_SETTINGS
        MENUITEM "", IDM_RS232_SETTINGS
        POPUP N_("Cartridge/IO settings")
        BEGIN
            MENUITEM "", IDM_ACIA_SETTINGS
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



IDD_CBM5X0_SETTINGS_MODEL_DIALOG DIALOG DISCARDABLE 0, 0, 230, 145
BEGIN
    GROUPBOX        "", IDC_MODEL_LINE,
                    15, 15, 80, 60
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_HW0,
                    25, 30, 65, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_HW1,
                    25, 45, 65, 10, BS_AUTORADIOBUTTON
END



IDD_CBM5X0_SETTINGS_IO_DIALOG DIALOG DISCARDABLE 0, 0, 230, 145
BEGIN
    GROUPBOX        "", IDC_CBM2_MEMORY,
                    5, 15, 70, 90
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_MEM_64,
                    15, 30, 55, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_MEM_128,
                    15, 45, 55, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_MEM_256,
                    15, 60, 55, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_SELECT_CBMII_MEM_512,
                    15, 75, 55, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "",IDC_SELECT_CBMII_MEM_1024,
                    15, 90, 55, 10, BS_AUTORADIOBUTTON
    GROUPBOX        "", IDC_RAM_BANKS,
                    95, 15, 130, 105
    AUTOCHECKBOX    "", IDC_TOGGLE_CBMII_RAM08,
                    105, 30, 115, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_TOGGLE_CBMII_RAM1,
                    105, 45, 115, 10, BS_AUTOCHECKBOX
    AUTOCHECKBOX    "", IDC_TOGGLE_CBMII_RAM2,
                    105, 60, 115, 10, BS_AUTOCHECKBOX
    AUTOCHECKBOX    "", IDC_TOGGLE_CBMII_RAM4,
                    105, 75, 115, 10, BS_AUTOCHECKBOX
    AUTOCHECKBOX    "", IDC_TOGGLE_CBMII_RAM6,
                    105, 90, 115, 10, BS_AUTOCHECKBOX
    AUTOCHECKBOX    "",IDC_TOGGLE_CBMII_RAMC,
                    105, 105, 115, 10, BS_AUTOCHECKBOX
END



STRINGTABLE
BEGIN
  IDS_CBM5X0_SETTINGS           N_("CBM5x0 settings")
  IDS_SELECT_CBMII_MEM_64       N_("64 kByte")
  IDS_CBM5X0MODEL               N_("CBM5x0 model")
  IDS_MI_CBM5X0_SETTINGS        N_("CBM5x0 settings")
  IDS_MI_CBM5X0MODEL_SETTINGS   N_("CBM5x0 model settings")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0-indstillinger"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0-model"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0-indstillinger..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0-modelindstillinger..."
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0 Einstellungen"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0 Modell"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 Einstellungen..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 Modell Einstellungen..."
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "Ajustes CBM5x0"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "Modelo CBM5x0"
  IDS_MI_CBM5X0_SETTINGS        "Ajustes CBM5x0..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "Ajustes modelo CBM5x0..."
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "Param�tres CBM5x0"
  IDS_SELECT_CBMII_MEM_64       "64 ko"
  IDS_CBM5X0MODEL               "Mod�le CBM5x0"
  IDS_MI_CBM5X0_SETTINGS        "Param�tres CBM5x0..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "Param�tres du mod�le CBM5x0..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0 settings"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0 model"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 settings..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 model settings..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "Impostazioni CBM5x0"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "Modello CBM5x0"
  IDS_MI_CBM5X0_SETTINGS        "Impostazioni CBM5x0..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "Impostazioni modello CBM5x0..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0 settings"
  IDS_SELECT_CBMII_MEM_64       "64 kbyte"
  IDS_CBM5X0MODEL               "CBM5x0 model"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 settings..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 model settings..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0 instellingen"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0 model"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 instellingen..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 model instellingen..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "Ustawienia CBM5x0"
  IDS_SELECT_CBMII_MEM_64       "64 kBajty"
  IDS_CBM5X0MODEL               "Model CBM5x0"
  IDS_MI_CBM5X0_SETTINGS        "Ustawienia CBM5x0..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "Ustawienia modelu CBM5x0..."
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
  IDS_CBM5X0_SETTINGS           "CBM5x0 settings"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0 model"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 settings..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 model settings..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0-inst�llningar"
  IDS_SELECT_CBMII_MEM_64       "64 kbyte"
  IDS_CBM5X0MODEL               "CBM5x0-modell"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0-inst�llningar..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0-modellinst�llningar..."
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_CBM5X0_SETTINGS           "CBM5x0 ayarlar�"
  IDS_SELECT_CBMII_MEM_64       "64 kByte"
  IDS_CBM5X0MODEL               "CBM5x0 modeli"
  IDS_MI_CBM5X0_SETTINGS        "CBM5x0 ayarlar�..."
  IDS_MI_CBM5X0MODEL_SETTINGS   "CBM5x0 model ayarlar�..."
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


