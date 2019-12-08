
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_REU_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 122
BEGIN
    AUTOCHECKBOX  "", IDC_REU_ENABLE,
                  7, 7, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT         "", IDC_REU_SIZE_LABEL,
                  9, 24, 30, 8
    COMBOBOX      IDC_REU_SIZE,
                  45, 22, 50, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX  "", IDC_REU_WRITE_ENABLE,
                  7, 36, 99, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT         "", IDC_REU_FILE_LABEL,
                  9, 56, 30, 8
    PUSHBUTTON    "", IDC_REU_BROWSE,
                  45, 54, 50, 14, 0
    EDITTEXT      IDC_REU_FILE,
                  9, 70, 160, 12, WS_TABSTOP

    DEFPUSHBUTTON "", IDOK,
                  30, 102, 50, 14, WS_TABSTOP
    PUSHBUTTON    "", IDCANCEL,
                  90, 102, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_REU_CAPTION      N_("REU Settings")
  IDS_REU_ENABLE       N_("Enable the RAM Expansion Unit")
  IDS_REU_SIZE         N_("REU size")
  IDS_REU_WRITE_ENABLE N_("Save REU image when changed")
  IDS_REU_FILE         N_("REU file")
  IDS_REU_SELECT_FILE  N_("Select file for REU")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU-indstillinger"
  IDS_REU_ENABLE       "Aktiv�r RAM-udviddelsesenheden"
  IDS_REU_SIZE         "REU st�rrelse"
  IDS_REU_WRITE_ENABLE "Gem REU image ved �ndringer"
  IDS_REU_FILE         "REU-fil"
  IDS_REU_SELECT_FILE  "V�lg fil for REU"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU Einstellungen"
  IDS_REU_ENABLE       "RAM Speichererweiterung aktivieren"
  IDS_REU_SIZE         "REU Gr��e"
  IDS_REU_WRITE_ENABLE "REU Imagedatei bei �nderung speichern"
  IDS_REU_FILE         "REU Datei"
  IDS_REU_SELECT_FILE  "Datei f�r REU ausw�hlen"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "Ajustes REU"
  IDS_REU_ENABLE       "Permitir unidad RAM expansion"
  IDS_REU_SIZE         "Tama�o REU"
  IDS_REU_WRITE_ENABLE "Grabar imagen REU cuando cambie"
  IDS_REU_FILE         "Fichero REU"
  IDS_REU_SELECT_FILE  "Seleccionar fichero para REU"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "Param�tres REU"
  IDS_REU_ENABLE       "Activer l'unit� d'expansion RAM"
  IDS_REU_SIZE         "Taille du REU"
  IDS_REU_WRITE_ENABLE "Enregistrer l'image REU lorsque modifi�e"
  IDS_REU_FILE         "Fichier REU"
  IDS_REU_SELECT_FILE  "S�lectionner fichier pour REU"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU be�ll�t�sai"
  IDS_REU_ENABLE       "Enable the RAM Expansion Unit"
  IDS_REU_SIZE         "REU m�rete"
  IDS_REU_WRITE_ENABLE "Save REU image when changed"
  IDS_REU_FILE         "REU f�jl"
  IDS_REU_SELECT_FILE  "V�lasszon f�jlt a REU-hoz"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "Impostazioni REU"
  IDS_REU_ENABLE       "Attiva l'espansione di RAM"
  IDS_REU_SIZE         "Dimensione REU"
  IDS_REU_WRITE_ENABLE "Salva immagine REU al cambio"
  IDS_REU_FILE         "File del REU"
  IDS_REU_SELECT_FILE  "Seleziona il file per il REU"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU Settings"
  IDS_REU_ENABLE       "Enable the RAM Expansion Unit"
  IDS_REU_SIZE         "REU size"
  IDS_REU_WRITE_ENABLE "Save REU image when changed"
  IDS_REU_FILE         "REU ����"
  IDS_REU_SELECT_FILE  "Select file for REU"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU instellingen"
  IDS_REU_ENABLE       "Activeer de RAM uitbreidingseenheid (REU)"
  IDS_REU_SIZE         "REU grootte"
  IDS_REU_WRITE_ENABLE "REU bestand opslaan indien gewijzigd"
  IDS_REU_FILE         "REU bestand"
  IDS_REU_SELECT_FILE  "Selecteer bestand voor REU"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "Ustawienia REU"
  IDS_REU_ENABLE       "W��cz RAM Expansion Unit"
  IDS_REU_SIZE         "Rozmiar REU"
  IDS_REU_WRITE_ENABLE "Zapisuj obraz REU przy zmianie"
  IDS_REU_FILE         "Plik REU"
  IDS_REU_SELECT_FILE  "Wybierz plik REU"
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
  IDS_REU_CAPTION      "REU Settings"
  IDS_REU_ENABLE       "Enable the RAM Expansion Unit"
  IDS_REU_SIZE         "REU size"
  IDS_REU_WRITE_ENABLE "Save REU image when changed"
  IDS_REU_FILE         "REU file"
  IDS_REU_SELECT_FILE  "Select file for REU"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU-Inst�llningar"
  IDS_REU_ENABLE       "Aktivera RAM-expansionsenhet"
  IDS_REU_SIZE         "Storlek p� minnesexpansion"
  IDS_REU_WRITE_ENABLE "Spara REU-avbildning vid �ndringar"
  IDS_REU_FILE         "REU-fil"
  IDS_REU_SELECT_FILE  "V�lj fil f�r REU"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_REU_CAPTION      "REU Ayarlar�"
  IDS_REU_ENABLE       "RAM Geni�letme Birimi'ni aktif et"
  IDS_REU_SIZE         "REU boyutu"
  IDS_REU_WRITE_ENABLE "REU imaj� de�i�ti�inde kaydet"
  IDS_REU_FILE         "REU dosyas�"
  IDS_REU_SELECT_FILE  "REU i�in dosya se�in"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


