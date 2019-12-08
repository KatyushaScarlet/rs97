
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_RR_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 100
BEGIN
    AUTOCHECKBOX    "", IDC_RR_FLASH_JUMPER,
                    7, 7, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_RR_BANK_JUMPER,
                    7, 22, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_RR_REVISION_LABEL,
                    9, 39, 53, 8
    COMBOBOX        IDC_RR_REVISION,
                    66, 37, 50, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_RR_SAVE_WHEN_CHANGED,
                    7, 50, 107, 10, BS_AUTOCHECKBOX | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 85, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 85, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_RR_FLASH_JUMPER   N_("Enable RR flash jumper")
  IDS_RR_BANK_JUMPER    N_("Enable RR bank jumper")
  IDS_RR_REVISION_LABEL N_("Revision")
  IDS_RR_BIOS_SAVE      N_("Save RR flash when changed")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Aktiv�r RR flashjumper"
  IDS_RR_BANK_JUMPER    "Aktiv�r RR bankjumper"
  IDS_RR_REVISION_LABEL "Udgave"
  IDS_RR_BIOS_SAVE      "Gem RR flash ved �ndringer"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "RR Flashjumper aktivieren"
  IDS_RR_BANK_JUMPER    "RR Bankjumper aktivieren"
  IDS_RR_REVISION_LABEL "Revision"
  IDS_RR_BIOS_SAVE      "RR Imagedatei bei �nderung speichern"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Permitir RR flahsjumper"
  IDS_RR_BANK_JUMPER    "Permitir commutaci�n de bancos RR"
  IDS_RR_REVISION_LABEL "Revisi�n"
  IDS_RR_BIOS_SAVE      "Grabar Flash RR cuando cambie"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Activer le RR flash jumper"
  IDS_RR_BANK_JUMPER    "Activer le RR bank jumper"
  IDS_RR_REVISION_LABEL "R�vision"
  IDS_RR_BIOS_SAVE      "Enregistrer le RR flash lorsque modifi�"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Enable RR flash jumper"
  IDS_RR_BANK_JUMPER    "Enable RR bank jumper"
  IDS_RR_REVISION_LABEL "V�ltozatsz�m"
  IDS_RR_BIOS_SAVE      "Save RR flash when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Attiva ponticello flash della RR"
  IDS_RR_BANK_JUMPER    "Attiva ponticello bank della RR"
  IDS_RR_REVISION_LABEL "Revisione"
  IDS_RR_BIOS_SAVE      "Salva la flash della RR al cambio"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Enable RR flash jumper"
  IDS_RR_BANK_JUMPER    "Enable RR bank jumper"
  IDS_RR_REVISION_LABEL "����"
  IDS_RR_BIOS_SAVE      "Save RR flash when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Activeer RR flash jumper"
  IDS_RR_BANK_JUMPER    "Activeer RR bank jumper"
  IDS_RR_REVISION_LABEL "Revisie"
  IDS_RR_BIOS_SAVE      "RR flasg bestand opslaan indien gewijzigd"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "W��cz prze��cznik RR flash"
  IDS_RR_BANK_JUMPER    "W��cz prze��cznik RR bank"
  IDS_RR_REVISION_LABEL "Poprawka"
  IDS_RR_BIOS_SAVE      "Zapisuj RR flash przy zmianie"
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
  IDS_RR_FLASH_JUMPER   "Enable RR flash jumper"
  IDS_RR_BANK_JUMPER    "Enable RR bank jumper"
  IDS_RR_REVISION_LABEL "Revision"
  IDS_RR_BIOS_SAVE      "Save RR flash when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "Aktivera RR-flashbygel"
  IDS_RR_BANK_JUMPER    "Aktivera RR-bankbygel"
  IDS_RR_REVISION_LABEL "Utg�va"
  IDS_RR_BIOS_SAVE      "Spara RR-flash n�r �ndrad"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_RR_FLASH_JUMPER   "RR flash jumper� aktif et"
  IDS_RR_BANK_JUMPER    "RR bank jumper� aktif et"
  IDS_RR_REVISION_LABEL "Revizyon"
  IDS_RR_BIOS_SAVE      "RR flashini de�i�ti�inde kaydet"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


