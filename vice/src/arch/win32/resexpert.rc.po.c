
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_EXPERT_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 122
BEGIN
    AUTOCHECKBOX    "", IDC_EXPERT_ENABLE,
                    7, 7, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_EXPERT_MODE_LABEL,
                    9, 24, 50, 8
    COMBOBOX        IDC_EXPERT_MODE,
                    65, 22, 50, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_EXPERT_WRITE_ENABLE,
                    7, 44, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_EXPERT_FILE_LABEL,
                    9, 66, 46, 8
    PUSHBUTTON      "", IDC_EXPERT_BROWSE,
                    55, 64, 50, 14, 0
    EDITTEXT        IDC_EXPERT_FILE,
                    9, 82, 160, 12, WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 102, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 102, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_SELECT_FILE_EXPERT  N_("Select file for Expert Cartridge")
  IDS_EXPERT_CAPTION      N_("Expert Cartridge settings")
  IDS_EXPERT_ENABLE       N_("Enable the Expert Cartridge")
  IDS_EXPERT_MODE_LABEL   N_("Mode")
  IDS_EXPERT_WRITE_ENABLE N_("Save Expert Cartridge image when changed")
  IDS_EXPERT_FILE_LABEL   N_("Expert Cartridge file")
  IDS_OFF                 N_("Off")
  IDS_PRG                 N_("Prg")
  IDS_ON                  N_("On")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "V�lg fil for Expert Cartridge"
  IDS_EXPERT_CAPTION      "Expert Cartridge-indstillinger"
  IDS_EXPERT_ENABLE       "Aktiv�r Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Tilstand"
  IDS_EXPERT_WRITE_ENABLE "Gem Expert Cartridge image ved �ndringer"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge-fil"
  IDS_OFF                 "Slukket"
  IDS_PRG                 "Prg"
  IDS_ON                  "T�ndt"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Export Cartridge Imagedatei ausw�hlen"
  IDS_EXPERT_CAPTION      "Expert Cartridge Einstellungen"
  IDS_EXPERT_ENABLE       "Expert Cartridge aktivieren"
  IDS_EXPERT_MODE_LABEL   "Modus"
  IDS_EXPERT_WRITE_ENABLE "Expert Cartridge Imagedatei bei �nderungen speichern"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge Imagedatei"
  IDS_OFF                 "Aus"
  IDS_PRG                 "Prg"
  IDS_ON                  "Ein"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Seleccionar fichero para Expert Cartrige"
  IDS_EXPERT_CAPTION      "Ajustes Expert Cartrige"
  IDS_EXPERT_ENABLE       "Permitir Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Modo"
  IDS_EXPERT_WRITE_ENABLE "Grabar imagen Expert Cartridge cuando cambie"
  IDS_EXPERT_FILE_LABEL   "Fichero Expert Cartrige"
  IDS_OFF                 "Apagado"
  IDS_PRG                 "Prg"
  IDS_ON                  "Encendido"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "S�lectionner fichier pour Cartouche Expert"
  IDS_EXPERT_CAPTION      "Param�tres Cartouche Expert"
  IDS_EXPERT_ENABLE       "Activer Cartouche Expert"
  IDS_EXPERT_MODE_LABEL   "Mode"
  IDS_EXPERT_WRITE_ENABLE "Sauvegarder l'image Cartouche Expert lorsque modifi�e"
  IDS_EXPERT_FILE_LABEL   "Fichier Cartouche Expert"
  IDS_OFF                 "Off"
  IDS_PRG                 "Prg"
  IDS_ON                  "On"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Select file for Expert Cartridge"
  IDS_EXPERT_CAPTION      "Expert Cartridge settings"
  IDS_EXPERT_ENABLE       "Enable the Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Mode"
  IDS_EXPERT_WRITE_ENABLE "Save Expert Cartridge image when changed"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge file"
  IDS_OFF                 "Ki"
  IDS_PRG                 "Prg"
  IDS_ON                  "Be"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Seleziona file per Expert Cartridge"
  IDS_EXPERT_CAPTION      "Impostazioni Expert Cartridge"
  IDS_EXPERT_ENABLE       "Attiva Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Modalit�"
  IDS_EXPERT_WRITE_ENABLE "Salva immagine Expert Cartridge al cambio"
  IDS_EXPERT_FILE_LABEL   "File Expert Cartridge"
  IDS_OFF                 "No"
  IDS_PRG                 "Prg"
  IDS_ON                  "S�"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Select file for Expert Cartridge"
  IDS_EXPERT_CAPTION      "Expert īƮ���� ����"
  IDS_EXPERT_ENABLE       "Enable the Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "���"
  IDS_EXPERT_WRITE_ENABLE "Save Expert Cartridge image when changed"
  IDS_EXPERT_FILE_LABEL   "Expert īƮ���� ����"
  IDS_OFF                 "����"
  IDS_PRG                 "Prg"
  IDS_ON                  "����"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Selecteer bestand voor Expert Cartridge"
  IDS_EXPERT_CAPTION      "Expert Cartridge instellingen"
  IDS_EXPERT_ENABLE       "Activeer Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Modus"
  IDS_EXPERT_WRITE_ENABLE "Expert Cartridge bestand opslaan indien gewijzigd"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge bestand"
  IDS_OFF                 "Uit"
  IDS_PRG                 "Prg"
  IDS_ON                  "Aan"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Wybierz plik Expert Cartridge"
  IDS_EXPERT_CAPTION      "Ustawienia Expert Cartridge"
  IDS_EXPERT_ENABLE       "W��cz Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Tryb"
  IDS_EXPERT_WRITE_ENABLE "Zapisuj obraz Expert Cartridge przy zmianie"
  IDS_EXPERT_FILE_LABEL   "Plik Expert Cartridge"
  IDS_OFF                 "Wy��cz"
  IDS_PRG                 "Prg"
  IDS_ON                  "W��cz"
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
  IDS_SELECT_FILE_EXPERT  "Select file for Expert Cartridge"
  IDS_EXPERT_CAPTION      "Expert Cartridge settings"
  IDS_EXPERT_ENABLE       "Enable the Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "Mode"
  IDS_EXPERT_WRITE_ENABLE "Save Expert Cartridge image when changed"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge file"
  IDS_OFF                 "Off"
  IDS_PRG                 "Prg"
  IDS_ON                  "On"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "V�lj fil f�r Expert Cartridge"
  IDS_EXPERT_CAPTION      "Inst�llningar f�r Expert Cartridge"
  IDS_EXPERT_ENABLE       "Aktivera Expert Cartridge"
  IDS_EXPERT_MODE_LABEL   "L�ge"
  IDS_EXPERT_WRITE_ENABLE "Spara Expert Cartrdige-avbildning vid �ndringar"
  IDS_EXPERT_FILE_LABEL   "Expert Cartridge-fil"
  IDS_OFF                 "Av"
  IDS_PRG                 "Prg"
  IDS_ON                  "P�"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SELECT_FILE_EXPERT  "Expert Kartu�u i�in dosya se�in"
  IDS_EXPERT_CAPTION      "Expert Kartu�u ayarlar�"
  IDS_EXPERT_ENABLE       "Expert Kartu�u'nu aktif et"
  IDS_EXPERT_MODE_LABEL   "Mod"
  IDS_EXPERT_WRITE_ENABLE "Expert Kartu� imaj�n� de�i�ti�inde kaydet"
  IDS_EXPERT_FILE_LABEL   "Expert Kartu�u dosyas�"
  IDS_OFF                 "Kapal�"
  IDS_PRG                 "Prg"
  IDS_ON                  "A��k"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


