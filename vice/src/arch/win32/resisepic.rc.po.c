
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_ISEPIC_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 122
BEGIN
    AUTOCHECKBOX    "", IDC_ISEPIC_ENABLE,
                    7, 7, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_ISEPIC_SWITCH,
                    7, 24, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_ISEPIC_WRITE_ENABLE,
                    7, 44, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_ISEPIC_FILE_LABEL,
                    9, 66, 46, 8
    PUSHBUTTON      "", IDC_ISEPIC_BROWSE,
                    55, 64, 50, 14, 0
    EDITTEXT        IDC_ISEPIC_FILE,
                    9, 82, 160, 12, WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 102, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 102, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_SELECT_FILE_ISEPIC  N_("Select file for ISEPIC")
  IDS_ISEPIC_CAPTION      N_("ISEPIC settings")
  IDS_ISEPIC_ENABLE       N_("Enable the ISEPIC cartridge")
  IDS_ISEPIC_SWITCH       N_("ISEPIC switch")
  IDS_ISEPIC_WRITE_ENABLE N_("Save ISEPIC image when changed")
  IDS_ISEPIC_FILE_LABEL   N_("ISEPIC file")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "V�lg fil for ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC-indstillinger"
  IDS_ISEPIC_ENABLE       "Aktiv�r ISEPIC-cartridge"
  IDS_ISEPIC_SWITCH       "ISEPIC-kontakt"
  IDS_ISEPIC_WRITE_ENABLE "Gem ISEPIC image ved �ndringer"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC-fil"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Datei f�r ISEPIC ausw�hlen"
  IDS_ISEPIC_CAPTION      "ISEPIC Einstellungen"
  IDS_ISEPIC_ENABLE       "ISEPIC Modul aktivieren"
  IDS_ISEPIC_SWITCH       "ISEPIC Schalter"
  IDS_ISEPIC_WRITE_ENABLE "ISEPIC Imagedatei bei �nderung speichern"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC Imagedatei"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Seleccionar fichero para ISEPIC"
  IDS_ISEPIC_CAPTION      "Ajustes ISEPIC"
  IDS_ISEPIC_ENABLE       "Permitir cartucho ISEPIC"
  IDS_ISEPIC_SWITCH       "interruptor ISEPIC"
  IDS_ISEPIC_WRITE_ENABLE "Grabar imagen ISEPIC cuando cambie"
  IDS_ISEPIC_FILE_LABEL   "Fichero ISEPIC"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "S�lectionner fichier pour ISEPIC"
  IDS_ISEPIC_CAPTION      "Param�tres ISEPIC"
  IDS_ISEPIC_ENABLE       "Activer la cartouche ISEPIC"
  IDS_ISEPIC_SWITCH       "Param�tres d'interrupteur ISEPIC"
  IDS_ISEPIC_WRITE_ENABLE "Enregistrer l'image ISEPIC lorsque modifi�e"
  IDS_ISEPIC_FILE_LABEL   "Fichier ISEPIC"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Select file for ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC settings"
  IDS_ISEPIC_ENABLE       "Enable the ISEPIC cartridge"
  IDS_ISEPIC_SWITCH       "ISEPIC switch"
  IDS_ISEPIC_WRITE_ENABLE "Save ISEPIC image when changed"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Seleziona file per ISEPIC"
  IDS_ISEPIC_CAPTION      "Impostazioni ISEPIC"
  IDS_ISEPIC_ENABLE       "Attiva la cartuccia ISEPIC"
  IDS_ISEPIC_SWITCH       "Pulsante ISEPIC"
  IDS_ISEPIC_WRITE_ENABLE "Salva immagine ISEPIC al cambio"
  IDS_ISEPIC_FILE_LABEL   "File ISEPIC"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Select file for ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC ����"
  IDS_ISEPIC_ENABLE       "Enable the ISEPIC cartridge"
  IDS_ISEPIC_SWITCH       "ISEPIC switch"
  IDS_ISEPIC_WRITE_ENABLE "Save ISEPIC image when changed"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Selecteer bestand voor ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC instellingen"
  IDS_ISEPIC_ENABLE       "Activeer de ISEPIC cartridge"
  IDS_ISEPIC_SWITCH       "ISEPIC schakelaar"
  IDS_ISEPIC_WRITE_ENABLE "ISEPIC bestand opslaan indien gewijzigd"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC bestand"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "Wybierz plik ISEPIC"
  IDS_ISEPIC_CAPTION      "Ustawienia ISEPIC"
  IDS_ISEPIC_ENABLE       "W��cz kartrid� ISEPIC"
  IDS_ISEPIC_SWITCH       "Prze��cznik ISEPIC"
  IDS_ISEPIC_WRITE_ENABLE "Zapisuj obraz ISEPIC przy zmianie"
  IDS_ISEPIC_FILE_LABEL   "Plik ISEPIC"
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
  IDS_SELECT_FILE_ISEPIC  "Select file for ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC settings"
  IDS_ISEPIC_ENABLE       "Enable the ISEPIC cartridge"
  IDS_ISEPIC_SWITCH       "ISEPIC switch"
  IDS_ISEPIC_WRITE_ENABLE "Save ISEPIC image when changed"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "V�lj fil f�r ISEPIC"
  IDS_ISEPIC_CAPTION      "ISEPIC-inst�llningar"
  IDS_ISEPIC_ENABLE       "Aktivera ISEPIC-modul"
  IDS_ISEPIC_SWITCH       "ISEPIC-omkopplare"
  IDS_ISEPIC_WRITE_ENABLE "Spara ISEPIC-avbildning vid �ndringar"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC-fil"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_ISEPIC  "ISEPIC i�in dosya se�in"
  IDS_ISEPIC_CAPTION      "ISEPIC ayarlar�"
  IDS_ISEPIC_ENABLE       "ISEPIC kartu�unu aktif et"
  IDS_ISEPIC_SWITCH       "ISEPIC anahtar�"
  IDS_ISEPIC_WRITE_ENABLE "ISEPIC imaj� de�i�ti�inde kaydet"
  IDS_ISEPIC_FILE_LABEL   "ISEPIC dosyas�"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

