
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_SIDCART_HARDSID_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 175
BEGIN
    AUTOCHECKBOX    "", IDC_SIDCART_ENABLE,
                    7, 7, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ENGINE_MODEL_LABEL,
                    9, 24, 53, 8
    COMBOBOX        IDC_SIDCART_ENGINE_MODEL,
                    70, 22, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_SIDCART_FILTERS,
                    7, 55, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ADDRESS_LABEL,
                    9, 70, 53, 8
    COMBOBOX        IDC_SIDCART_ADDRESS,
                    70, 68, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_CLOCK_LABEL,
                    9, 86, 53, 8
    COMBOBOX        IDC_SIDCART_CLOCK,
                    70, 84, 150, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_HARDSID_DEVICE_SELECTION_LABEL,
                    9, 110, 90, 8
    LTEXT           "", IDC_SIDCART_HARDSID_MAIN_DEVICE_LABEL,
                    9, 122, 58, 8
    COMBOBOX        IDC_SIDCART_HARDSID_MAIN_DEVICE,
                    70, 120, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 150, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 150, 50, 14, WS_TABSTOP
END



IDD_SIDCART_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 175
BEGIN
    AUTOCHECKBOX    "", IDC_SIDCART_ENABLE,
                    7, 7, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ENGINE_MODEL_LABEL,
                    9, 24, 53, 8
    COMBOBOX        IDC_SIDCART_ENGINE_MODEL,
                    70, 22, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_SIDCART_FILTERS,
                    7, 55, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ADDRESS_LABEL,
                    9, 70, 53, 8
    COMBOBOX        IDC_SIDCART_ADDRESS,
                    70, 68, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_CLOCK_LABEL,
                    9, 86, 53, 8
    COMBOBOX        IDC_SIDCART_CLOCK,
                    70, 84, 150, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 150, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 150, 50, 14, WS_TABSTOP
END



IDD_SIDCARTPLUS4_HARDSID_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 199
BEGIN
    AUTOCHECKBOX    "", IDC_SIDCART_ENABLE,
                    7, 7, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ENGINE_MODEL_LABEL,
                    9, 24, 53, 8
    COMBOBOX        IDC_SIDCART_ENGINE_MODEL,
                    70, 22, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_SIDCART_FILTERS,
                    7, 55, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ADDRESS_LABEL,
                    9, 70, 53, 8
    COMBOBOX        IDC_SIDCART_ADDRESS,
                    70, 68, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_CLOCK_LABEL,
                    9, 86, 53, 8
    COMBOBOX        IDC_SIDCART_CLOCK,
                    70, 84, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_HARDSID_DEVICE_SELECTION_LABEL,
                    9, 110, 90, 8
    LTEXT           "", IDC_SIDCART_HARDSID_MAIN_DEVICE_LABEL,
                    9, 122, 58, 8
    COMBOBOX        IDC_SIDCART_HARDSID_MAIN_DEVICE,
                    70, 120, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DIGIBLASTER,
                    7, 137, 105, 10, BS_AUTOCHECKBOX | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 174, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 174, 50, 14, WS_TABSTOP
END



IDD_SIDCARTPLUS4_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 199
BEGIN
    AUTOCHECKBOX    "", IDC_SIDCART_ENABLE,
                    7, 7, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ENGINE_MODEL_LABEL,
                    9, 24, 53, 8
    COMBOBOX        IDC_SIDCART_ENGINE_MODEL,
                    70, 22, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_SIDCART_FILTERS,
                    7, 55, 75, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_ADDRESS_LABEL,
                    9, 70, 53, 8
    COMBOBOX        IDC_SIDCART_ADDRESS,
                    70, 68, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "", IDC_SIDCART_CLOCK_LABEL,
                    9, 86, 53, 8
    COMBOBOX        IDC_SIDCART_CLOCK,
                    70, 84, 100, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_DIGIBLASTER,
                    7, 137, 105, 10, BS_AUTOCHECKBOX | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    30, 174, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 174, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_SIDCART_ENABLE                         N_("Enable the SID cartridge")
  IDS_SIDCART_ADDRESS_LABEL                  N_("SID address")
  IDS_SIDCART_CLOCK_LABEL                    N_("SID clock")
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL N_("HardSID device selection")
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      N_("Main device")
  IDS_DIGIBLASTER                            N_("Enable the digiblaster add-on")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Aktiv�r SID-cartridget"
  IDS_SIDCART_ADDRESS_LABEL                  "SID-adresse"
  IDS_SIDCART_CLOCK_LABEL                    "SID-klok"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID-enhedsvalg"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Hovedenhed"
  IDS_DIGIBLASTER                            "Aktiv�r digiblaster-tilf�jelse"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "SID Modul aktivieren"
  IDS_SIDCART_ADDRESS_LABEL                  "SID Adresse"
  IDS_SIDCART_CLOCK_LABEL                    "SID Takt"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID Ger�te Auswahl"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Haupt Ger�t"
  IDS_DIGIBLASTER                            "Digiblaster add-on aktivieren"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Permitir cartucho SID"
  IDS_SIDCART_ADDRESS_LABEL                  "Direcci�n SID"
  IDS_SIDCART_CLOCK_LABEL                    "Reloj SID"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "Selecci�n perif�rico HardSID"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Perif�rico principal"
  IDS_DIGIBLASTER                            "Permitir complementos digiblaster"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Activer la cartouche SID"
  IDS_SIDCART_ADDRESS_LABEL                  "Adresse SID"
  IDS_SIDCART_CLOCK_LABEL                    "Horloge SID"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "S�lection des p�riph�riques HardSID"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "P�riph�rique principal"
  IDS_DIGIBLASTER                            "Activer le add-on digiblaster"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Enable the SID cartridge"
  IDS_SIDCART_ADDRESS_LABEL                  "SID c�m"
  IDS_SIDCART_CLOCK_LABEL                    "SID �rajel"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID eszk�z kiv�laszt�sa"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "F� eszk�z"
  IDS_DIGIBLASTER                            "Digiblaster enged�lyez�se"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Attiva cartuccia SID"
  IDS_SIDCART_ADDRESS_LABEL                  "Indirizzo SID"
  IDS_SIDCART_CLOCK_LABEL                    "Clock SID"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "Selezione dispositivo HardSID"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Dispositivo principale"
  IDS_DIGIBLASTER                            "Attiva l'estensione digiblaster"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Enable the SID cartridge"
  IDS_SIDCART_ADDRESS_LABEL                  "SID �ּ�"
  IDS_SIDCART_CLOCK_LABEL                    "SID Ŭ��"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID device selection"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Main device"
  IDS_DIGIBLASTER                            "Enable the digiblaster add-on"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Activeer de SID cartridge"
  IDS_SIDCART_ADDRESS_LABEL                  "SID adres"
  IDS_SIDCART_CLOCK_LABEL                    "SID klok"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID apparaatselectie"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Hoofdapparaat"
  IDS_DIGIBLASTER                            "Activeer de digiblaster add-on"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "W��cz kartrid� SID"
  IDS_SIDCART_ADDRESS_LABEL                  "Adres SID"
  IDS_SIDCART_CLOCK_LABEL                    "Zegar SID"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "Wyb�r urz�dzenia HardSID"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "G��wne urz�dzenie"
  IDS_DIGIBLASTER                            "W��cz dodatek digiblaster"
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
  IDS_SIDCART_ENABLE                         "Enable the SID cartridge"
  IDS_SIDCART_ADDRESS_LABEL                  "����� SID"
  IDS_SIDCART_CLOCK_LABEL                    "SID �����"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID device selection"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Main device"
  IDS_DIGIBLASTER                            "Enable the digiblaster add-on"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "Aktivera SID-insticksmodul"
  IDS_SIDCART_ADDRESS_LABEL                  "SID-adress"
  IDS_SIDCART_CLOCK_LABEL                    "SID-klocka"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID-enhetsval"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Huvudenhet"
  IDS_DIGIBLASTER                            "Aktivera digiblaster-till�gg"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_SIDCART_ENABLE                         "SID kartu�unu aktif et"
  IDS_SIDCART_ADDRESS_LABEL                  "SID adresi"
  IDS_SIDCART_CLOCK_LABEL                    "SID saati"
  IDS_SIDCART_HARDSID_DEVICE_SELECTION_LABEL "HardSID ayg�t se�imi"
  IDS_SIDCART_HARDSID_MAIN_DEVICE_LABEL      "Ana ayg�t"
  IDS_DIGIBLASTER                            "Digiblaster eklentisini aktif et"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


