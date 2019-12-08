
#include "vice.h"

#include "debug.h"
#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

#define FILE_DESCRIPTION  "VSID - the VICE SID player"



IDR_MENUVSID MENU DISCARDABLE
BEGIN
    POPUP N_("File")
    BEGIN
        MENUITEM "", IDM_LOAD_PSID_FILE
        MENUITEM "", IDM_SELECT_TUNE
        MENUITEM "", IDM_NEXT_TUNE
        MENUITEM "", IDM_PREVIOUS_TUNE
        POPUP N_("Reset")
        BEGIN
            MENUITEM "", IDM_RESET_HARD
            MENUITEM "", IDM_RESET_SOFT
        END
        MENUITEM "", IDM_MONITOR
        MENUITEM "", IDM_EXIT
    END
    POPUP N_("Media")
    BEGIN
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
        MENUITEM "", IDM_TOGGLE_WARP_MODE,            CHECKED
        MENUITEM "", IDM_TOGGLE_ALWAYSONTOP
        MENUITEM "", IDM_TOGGLE_SOUND,                CHECKED
    END
    POPUP N_("Settings")
    BEGIN
        MENUITEM "", IDM_PSID_OVERRIDE,               CHECKED
        MENUITEM SEPARATOR
        MENUITEM "", IDM_SOUND_SETTINGS
        MENUITEM "", IDM_SID_SETTINGS
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



IDD_VSID_TUNE_DIALOG DIALOG DISCARDABLE  0, 0, 180, 75
BEGIN
    LTEXT           "", IDC_VSID_TUNE_LABEL,
                    9, 6, 53, 8
    COMBOBOX        IDC_VSID_TUNE,
                    70, 5, 80, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK, 30, 50, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL, 90, 50, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_PSID_FILE           N_("Select PSID file")
  IDS_TUNE_NR             N_("Tune number")
  IDS_MI_LOAD_PSID_FILE   N_("Load PSID file")
  IDS_MI_SELECT_TUNE      N_("Select tune")
  IDS_MI_NEXT_TUNE        N_("Next tune")
  IDS_MI_PREVIOUS_TUNE    N_("Previous tune")
  IDS_MI_PSID_OVERRIDE    N_("Override PSID settings")
  IDS_MP_MEDIA            N_("Media")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "V�lg PSID-fil"
  IDS_TUNE_NR             "sangnummer"
  IDS_MI_LOAD_PSID_FILE   "Indl�s PSID-fil"
  IDS_MI_SELECT_TUNE      "V�lg sang"
  IDS_MI_NEXT_TUNE        "N�ste sang"
  IDS_MI_PREVIOUS_TUNE    "Forrige sang"
  IDS_MI_PSID_OVERRIDE    "Overstyr PSID-indstillinger"
  IDS_MP_MEDIA            "Medie"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "PSID Datei w�hlen"
  IDS_TUNE_NR             "Titel Nummer"
  IDS_MI_LOAD_PSID_FILE   "PSID Datei laden"
  IDS_MI_SELECT_TUNE      "Titel ausw�hlen"
  IDS_MI_NEXT_TUNE        "N�chster Titel "
  IDS_MI_PREVIOUS_TUNE    "Vorheriger Titel "
  IDS_MI_PSID_OVERRIDE    "PSID Einstellungen ignorieren"
  IDS_MP_MEDIA            "Medien"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Seleccionar fichero PSID"
  IDS_TUNE_NR             "N�mero melodia"
  IDS_MI_LOAD_PSID_FILE   "Cargar fichero PSID"
  IDS_MI_SELECT_TUNE      "Seleccionar melodia"
  IDS_MI_NEXT_TUNE        "Siguiente melodia"
  IDS_MI_PREVIOUS_TUNE    "Melodia previa"
  IDS_MI_PSID_OVERRIDE    "No utilizar ajustes PSID"
  IDS_MP_MEDIA            "Medio"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "S�lectionner le fichier PSID"
  IDS_TUNE_NR             "Num�ro de clip"
  IDS_MI_LOAD_PSID_FILE   "Charger le fichier PSID"
  IDS_MI_SELECT_TUNE      "S�lectionner le clip"
  IDS_MI_NEXT_TUNE        "Clip suivant"
  IDS_MI_PREVIOUS_TUNE    "Clip pr�c�dent"
  IDS_MI_PSID_OVERRIDE    "�craser les param�tres PSID"
  IDS_MP_MEDIA            "M�dia"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Select PSID file"
  IDS_TUNE_NR             "Tune number"
  IDS_MI_LOAD_PSID_FILE   "PSID f�jl bet�lt�se"
  IDS_MI_SELECT_TUNE      "Select tune"
  IDS_MI_NEXT_TUNE        "Next tune"
  IDS_MI_PREVIOUS_TUNE    "Previous tune"
  IDS_MI_PSID_OVERRIDE    "Override PSID settings"
  IDS_MP_MEDIA            "Media"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Seleziona file PSID"
  IDS_TUNE_NR             "Numero melodia"
  IDS_MI_LOAD_PSID_FILE   "Carica file PSID"
  IDS_MI_SELECT_TUNE      "Seleziona melodia"
  IDS_MI_NEXT_TUNE        "Melodia successiva"
  IDS_MI_PREVIOUS_TUNE    "Melodia precedente"
  IDS_MI_PSID_OVERRIDE    "Sovrascrivi impostazioni PSID"
  IDS_MP_MEDIA            "Media"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Select PSID file"
  IDS_TUNE_NR             "Tune number"
  IDS_MI_LOAD_PSID_FILE   "PSID ���� �ҷ�����"
  IDS_MI_SELECT_TUNE      "Select tune"
  IDS_MI_NEXT_TUNE        "Next tune"
  IDS_MI_PREVIOUS_TUNE    "Previous tune"
  IDS_MI_PSID_OVERRIDE    "PSID ���� �������̵� �ϱ�"
  IDS_MP_MEDIA            "Media"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Selecteer PSID bestand"
  IDS_TUNE_NR             "Deuntje nummer"
  IDS_MI_LOAD_PSID_FILE   "Laad PSID bestand"
  IDS_MI_SELECT_TUNE      "Selecteer deuntje"
  IDS_MI_NEXT_TUNE        "Volgend deuntje"
  IDS_MI_PREVIOUS_TUNE    "Vorig deuntje"
  IDS_MI_PSID_OVERRIDE    "Overschrijf PSID instellingen"
  IDS_MP_MEDIA            "Media"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "Wybierz plik PSID"
  IDS_TUNE_NR             "Numer tonu"
  IDS_MI_LOAD_PSID_FILE   "Wczytaj plik PSID"
  IDS_MI_SELECT_TUNE      "Wyb�r tonu"
  IDS_MI_NEXT_TUNE        "Nast�pny ton"
  IDS_MI_PREVIOUS_TUNE    "Poprzedni ton"
  IDS_MI_PSID_OVERRIDE    "Nadpisz ustawienia PSID"
  IDS_MP_MEDIA            "Media"
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
  IDS_PSID_FILE           "Select PSID file"
  IDS_TUNE_NR             "Tune number"
  IDS_MI_LOAD_PSID_FILE   "Load PSID file"
  IDS_MI_SELECT_TUNE      "Select tune"
  IDS_MI_NEXT_TUNE        "Next tune"
  IDS_MI_PREVIOUS_TUNE    "Previous tune"
  IDS_MI_PSID_OVERRIDE    "Override PSID settings"
  IDS_MP_MEDIA            "Media"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "V�lj PSID-fil"
  IDS_TUNE_NR             "L�tnummer"
  IDS_MI_LOAD_PSID_FILE   "L�s PSID-fil"
  IDS_MI_SELECT_TUNE      "V�lj l�t"
  IDS_MI_NEXT_TUNE        "N�sta l�t"
  IDS_MI_PREVIOUS_TUNE    "F�reg�ende l�t"
  IDS_MI_PSID_OVERRIDE    "�verskugga PSID-inst�llningar"
  IDS_MP_MEDIA            "Media"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_PSID_FILE           "PSID dosyas� se�in"
  IDS_TUNE_NR             "�ark� numaras�"
  IDS_MI_LOAD_PSID_FILE   "PSID dosyas� y�kle"
  IDS_MI_SELECT_TUNE      "�ark� Se�"
  IDS_MI_NEXT_TUNE        "Sonraki �ark�"
  IDS_MI_PREVIOUS_TUNE    "�nceki �ark�"
  IDS_MI_PSID_OVERRIDE    "PSID ayarlar�n� ge�ersiz k�l"
  IDS_MP_MEDIA            "Ortam"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


