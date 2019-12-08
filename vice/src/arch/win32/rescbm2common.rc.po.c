
#include "vice.h"

#include "debug.h"
#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



IDD_CBM2ROM_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 240, 150
BEGIN
    LTEXT       "", IDC_KERNAL,
                9, 8, 40, 8
    EDITTEXT    IDC_CBM2ROM_KERNAL_FILE,
                55, 7, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_CBM2ROM_KERNAL_BROWSE,
                185, 7, 50, 14, 0

    LTEXT       "", IDC_BASIC,
                9, 28, 40, 8
    EDITTEXT    IDC_CBM2ROM_BASIC_FILE,
                55, 27, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_CBM2ROM_BASIC_BROWSE,
                185, 27, 50, 14, 0

    LTEXT       "", IDC_CHARACTER,
                9, 48, 40, 8
    EDITTEXT    IDC_CBM2ROM_CHARGEN_FILE,
                55, 47, 125, 12, WS_TABSTOP | ES_AUTOHSCROLL
    PUSHBUTTON  "", IDC_CBM2ROM_CHARGEN_BROWSE,
                185, 47, 50, 14, 0
END



IDD_CBM2DRIVEROM_SETTINGS_DIALOG DIALOG DISCARDABLE  0, 0, 240, 110
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



IDD_CBM2ROM_RESOURCE_DIALOG DIALOG DISCARDABLE 0, 0, 160, 145
BEGIN
    GROUPBOX        "", IDC_COMPUTER_RESOURCES,
                    4, 3, 151, 115
    AUTOCHECKBOX    "", IDC_CBM2ROM_KERNAL_RESOURCE,
                    11, 13, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_CBM2ROM_BASIC_RESOURCE,
                    11, 28, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_CBM2ROM_CHARGEN_RESOURCE,
                    11, 43, 95, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP

    DEFPUSHBUTTON   "", IDOK,
                    20, 125, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 125, 50, 14, WS_TABSTOP
END



IDD_CBM2ROMDRIVE_RESOURCE_DIALOG DIALOG DISCARDABLE 0, 0, 160, 115
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



IDD_CBM2KBD_MAPPING_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 240, 180
BEGIN
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_GRSYM,
                    10, 10, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_GRPOS,
                    10, 30, 54, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_UKSYM,
                    10, 50, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_UKPOS,
                    10, 70, 54, 10, BS_AUTORADIOBUTTON
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_DESYM,
                    10, 90, 54, 10, BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP
    AUTORADIOBUTTON "", IDC_CBM2KBD_MAPPING_SELECT_DEPOS,
                    10, 110, 54, 10, BS_AUTORADIOBUTTON

    EDITTEXT        IDC_CBM2KBD_MAPPING_GRSYM,
                    65, 9, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_GRSYM_BROWSE,
                    185, 9, 50, 14, 0
    EDITTEXT        IDC_CBM2KBD_MAPPING_GRPOS,
                    65, 29, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_GRPOS_BROWSE,
                    185, 29, 50, 14, 0
    EDITTEXT        IDC_CBM2KBD_MAPPING_UKSYM,
                    65, 49, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_UKSYM_BROWSE,
                    185, 49, 50, 14, 0
    EDITTEXT        IDC_CBM2KBD_MAPPING_UKPOS,
                    65, 69, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_UKPOS_BROWSE,
                    185, 69, 50, 14, 0
    EDITTEXT        IDC_CBM2KBD_MAPPING_DESYM,
                    65, 89, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_DESYM_BROWSE,
                    185, 89, 50, 14, 0
    EDITTEXT        IDC_CBM2KBD_MAPPING_DEPOS,
                    65, 109, 110, 12, WS_TABSTOP
    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_DEPOS_BROWSE,
                    185, 109, 50, 14, 0

    PUSHBUTTON      "", IDC_CBM2KBD_MAPPING_DUMP,
                    10, 134, 60, 14, 0
    PUSHBUTTON      "", IDC_KBD_SHORTCUT_DUMP,
                    80, 134, 60, 14, 0

    DEFPUSHBUTTON   "", IDOK,
                    20, 160, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 160, 50, 14, WS_TABSTOP
END



IDD_CBM2MODEL_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 150, 80
CAPTION ""
BEGIN
    LTEXT         "", IDC_CBM2MODEL_LABEL,
                  4, 12, 60, 8
    COMBOBOX      IDC_CBM2MODEL_LIST,
                  45, 11, 90, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP


    DEFPUSHBUTTON   "", IDOK,
                    20, 60, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    80, 60, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_MODEL_LINE                   N_("Model line")
  IDS_SELECT_CBMII_MEM_128         N_("128 kByte")
  IDS_SELECT_CBMII_MEM_256         N_("256 kByte")
  IDS_SELECT_CBMII_MEM_512         N_("512 kByte")
  IDS_SELECT_CBMII_MEM_1024        N_("1024 kByte")
  IDS_CBM2_RAM_BANKS               N_("RAM banks")
  IDS_TOGGLE_CBMII_RAM08           N_("Bank 15 $0800-$0FFF RAM")
  IDS_TOGGLE_CBMII_RAM1            N_("Bank 15 $1000-$1FFF RAM")
  IDS_TOGGLE_CBMII_RAM2            N_("Bank 15 $2000-$3FFF RAM")
  IDS_TOGGLE_CBMII_RAM4            N_("Bank 15 $4000-$5FFF RAM")
  IDS_TOGGLE_CBMII_RAM6            N_("Bank 15 $6000-$7FFF RAM")
  IDS_TOGGLE_CBMII_RAMC            N_("Bank 15 $C000-$CFFF RAM")
  IDS_ATTACH_CBM2_CART_1000        N_("Attach cartridge image at $1000")
  IDS_ATTACH_CBM2_CART_2000_3000   N_("Attach cartridge image at $2000/$3000")
  IDS_ATTACH_CBM2_CART_4000_5000   N_("Attach cartridge image at $4000/$5000")
  IDS_ATTACH_CBM2_CART_6000_7000   N_("Attach cartridge image at $6000/$7000")
  IDS_MI_LOAD_CART_1000            N_("Load new Cart $1***")
  IDS_MI_UNLOAD_CART_1000          N_("Unload Cart $1***")
  IDS_MI_LOAD_CART_2000_3000       N_("Load new Cart $2-3***")
  IDS_MI_UNLOAD_CART_2000_3000     N_("Unload Cart $2-3***")
  IDS_MI_LOAD_CART_4000_5000       N_("Load new Cart $4-5***")
  IDS_MI_UNLOAD_CART_4000_5000     N_("Unload Cart $4-5***")
  IDS_MI_LOAD_CART_6000_7000       N_("Load new Cart $6-7***")
  IDS_MI_UNLOAD_CART_6000_7000     N_("Unload Cart $6-7***")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Modelltyp"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 byte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM-banke"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Tilslut cartridge image p� $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Tilslut cartridge image p� $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Tilslut cartridge image p� $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Tilslut cartridge image p� $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Indl�s nyt cartridge $1***"
  IDS_MI_UNLOAD_CART_1000          "Afbryd cartridge $1***"
  IDS_MI_LOAD_CART_2000_3000       "Indl�s nyt cartridge $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Afbryd cartridge $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Indl�s nyt cartridge $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Afbryd cartridge $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Indl�s nyt cartridge $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Afbryd cartridge $6-7***"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Modell Linie"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM B�nke"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Modul Image bei $1000 einlegen"
  IDS_ATTACH_CBM2_CART_2000_3000   "Modul Image bei $2000/$3000 einlegen"
  IDS_ATTACH_CBM2_CART_4000_5000   "Modul Image bei $4000/$5000 einlegen"
  IDS_ATTACH_CBM2_CART_6000_7000   "Modul Image bei $6000/$7000 einlegen"
  IDS_MI_LOAD_CART_1000            "Modul bei $1*** laden"
  IDS_MI_UNLOAD_CART_1000          "Modul bei $1*** entfernen"
  IDS_MI_LOAD_CART_2000_3000       "Modul bei $2-3*** laden"
  IDS_MI_UNLOAD_CART_2000_3000     "Modul bei $2-3*** entfernen"
  IDS_MI_LOAD_CART_4000_5000       "Modul bei $4-5*** laden"
  IDS_MI_UNLOAD_CART_4000_5000     "Modul bei $4-5*** entfernen"
  IDS_MI_LOAD_CART_6000_7000       "Modul bei $6-7*** laden"
  IDS_MI_UNLOAD_CART_6000_7000     "Modul bei $6-7*** entfernen"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Linea modelo"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "Bancos de RAM"
  IDS_TOGGLE_CBMII_RAM08           "Banco 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Banco 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Banco 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Banco 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Banco 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Banco 15 $6000-$7FFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Insertar imagen cartucho en $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Insertar imagen cartucho en $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Insertar imagen cartucho en $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Insertar imagen cartucho en $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Cargar nuevo Cart $1***"
  IDS_MI_UNLOAD_CART_1000          "Extraer Cart $1***"
  IDS_MI_LOAD_CART_2000_3000       "Cargar nuevo Cart $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Extraer Cart $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Cargar nuevo Cart $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Extraer Cart $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Cargar nuevo Cart $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Extraer Cart $6-7***"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Ligne du mod�le"
  IDS_SELECT_CBMII_MEM_128         "128 ko"
  IDS_SELECT_CBMII_MEM_256         "256 ko"
  IDS_SELECT_CBMII_MEM_512         "512 ko"
  IDS_SELECT_CBMII_MEM_1024        "1024 ko"
  IDS_CBM2_RAM_BANKS               "Banques de RAM"
  IDS_TOGGLE_CBMII_RAM08           "Banque RAM 15 $0800-$0FFF"
  IDS_TOGGLE_CBMII_RAM1            "Banque RAM 15 $1000-$1FFF"
  IDS_TOGGLE_CBMII_RAM2            "Banque RAM 15 $2000-$3FFF"
  IDS_TOGGLE_CBMII_RAM4            "Banque RAM 15 $4000-$5FFF"
  IDS_TOGGLE_CBMII_RAM6            "Banque RAM 15 $6000-$7FFF"
  IDS_TOGGLE_CBMII_RAMC            "Banque RAM 15 $C000-$CFFF"
  IDS_ATTACH_CBM2_CART_1000        "Attacher une image de cartouche � $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Attacher une image de cartouche � $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Attacher une image de cartouche � $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Attacher une image de cartouche � $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Charger la cartouche $1***"
  IDS_MI_UNLOAD_CART_1000          "D�charger la cassette $1***"
  IDS_MI_LOAD_CART_2000_3000       "Charger la cartouche $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "D�charger la cassette $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Charger la cartouche $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "D�charger la cassette $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Charger la cartouche $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "D�charger la cassette $6-7***"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Model line"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM bankok"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Attach cartridge image at $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Attach cartridge image at $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Attach cartridge image at $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Attach cartridge image at $6000/$7000"
  IDS_MI_LOAD_CART_1000            "�j Cart. bet�lt�se a $1*** c�mre"
  IDS_MI_UNLOAD_CART_1000          "Cart. lev�laszt�sa a $1*** c�mr�l"
  IDS_MI_LOAD_CART_2000_3000       "�j Cart. bet�lt�se a $2-$3*** c�mre"
  IDS_MI_UNLOAD_CART_2000_3000     "Cart. lev�laszt�sa a $2-3*** c�mr�l"
  IDS_MI_LOAD_CART_4000_5000       "�j Cart. bet�lt�se a $4-$5*** c�mre"
  IDS_MI_UNLOAD_CART_4000_5000     "Cart. lev�laszt�sa a $4-5*** c�mr�l"
  IDS_MI_LOAD_CART_6000_7000       "�j Cart. bet�lt�se a $6-$7*** c�mre"
  IDS_MI_UNLOAD_CART_6000_7000     "Cart. lev�laszt�sa a $6-7*** c�mr�l"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Linea"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "Banchi di Ram"
  IDS_TOGGLE_CBMII_RAM08           "RAM banco 15 a $0800-$0FFF"
  IDS_TOGGLE_CBMII_RAM1            "RAM banco 15 a $1000-$1FFF"
  IDS_TOGGLE_CBMII_RAM2            "RAM banco 15 a $2000-$3FFF"
  IDS_TOGGLE_CBMII_RAM4            "RAM banco 15 a $4000-$5FFF"
  IDS_TOGGLE_CBMII_RAM6            "RAM banco 15 a $6000-$7FFF"
  IDS_TOGGLE_CBMII_RAMC            "RAM banco 15 a $C000-$CFFF"
  IDS_ATTACH_CBM2_CART_1000        "Seleziona immagine cartuccia a $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Seleziona immagine cartuccia a $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Seleziona immagine cartuccia a $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Seleziona immagine cartuccia a $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Carica nuova cartuccia $1***"
  IDS_MI_UNLOAD_CART_1000          "Scarica cartuccia $1***"
  IDS_MI_LOAD_CART_2000_3000       "Carica nuova cartuccia $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Scarica cartuccia $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Carica nuova cartuccia $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Scarica cartuccia $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Carica nuova cartuccia $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Scarica cartuccia $6-7***"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Model line"
  IDS_SELECT_CBMII_MEM_128         "128 kbyte"
  IDS_SELECT_CBMII_MEM_256         "256 kbyte"
  IDS_SELECT_CBMII_MEM_512         "512 kbyte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kbyte"
  IDS_CBM2_RAM_BANKS               "RAM banks"
  IDS_TOGGLE_CBMII_RAM08           "��ũ 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "��ũ 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "��ũ 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "��ũ 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "��ũ 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "��ũ 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Attach cartridge image at $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Attach cartridge image at $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Attach cartridge image at $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Attach cartridge image at $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Load new Cart $1***"
  IDS_MI_UNLOAD_CART_1000          "Unload Cart $1***"
  IDS_MI_LOAD_CART_2000_3000       "Load new Cart $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Unload Cart $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Load new Cart $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Unload Cart $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Load new Cart $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Unload Cart $6-7***"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Model lijn"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "Ram banken"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Koppel cartridge bestand op $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Koppel cartridge bestand op $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Koppel cartridge bestand op $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Koppel cartridge bestand op $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Laad nieuw Cart $1***"
  IDS_MI_UNLOAD_CART_1000          "Verwijder Cart $1***"
  IDS_MI_LOAD_CART_2000_3000       "Laad nieuw Cart $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Verwijder Cart $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Laad nieuw Cart $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Verwijder Cart $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Laad nieuw Cart $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Verwijder Cart $6-7***"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Linia modelu"
  IDS_SELECT_CBMII_MEM_128         "128 kBajt�w"
  IDS_SELECT_CBMII_MEM_256         "256 kBajt�w"
  IDS_SELECT_CBMII_MEM_512         "512 kBajt�w"
  IDS_SELECT_CBMII_MEM_1024        "1024 kBajty"
  IDS_CBM2_RAM_BANKS               "Banki RAM"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Wsu� obraz kartrid�a w $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Wsu� obraz kartrid�a w $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Wsu� obraz kartrid�a w $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Wsu� obraz kartrid�a w $6000/$7000"
  IDS_MI_LOAD_CART_1000            "Wczytaj nowy kartrid� $1***"
  IDS_MI_UNLOAD_CART_1000          "Usu� kartrid� $1***"
  IDS_MI_LOAD_CART_2000_3000       "Wczytaj nowy kartrid� $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "Usu� kartrid� $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "Wczytaj nowy kartrid� $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "Usu� kartrid� $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "Wczytaj nowy kartrid� $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "Usu� kartrid� $6-7***"
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
  IDS_MODEL_LINE                   "Model line"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM banks"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Attach cartridge image at $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Attach cartridge image at $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Attach cartridge image at $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Attach cartridge image at $6000/$7000"
  IDS_MI_LOAD_CART_1000            "��������� ����� �������� $1***"
  IDS_MI_UNLOAD_CART_1000          "������� �������� $1***"
  IDS_MI_LOAD_CART_2000_3000       "��������� ����� �������� $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "������� �������� $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "��������� ����� �������� $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "������� �������� $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "��������� ����� �������� $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "������� �������� $6-7***"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Modelltyp"
  IDS_SELECT_CBMII_MEM_128         "128 kbyte"
  IDS_SELECT_CBMII_MEM_256         "256 byte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM-bankar"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "Anslut modulfil vid $1000"
  IDS_ATTACH_CBM2_CART_2000_3000   "Anslut modulfil vid $2000/$3000"
  IDS_ATTACH_CBM2_CART_4000_5000   "Anslut modulfil vid $4000/$5000"
  IDS_ATTACH_CBM2_CART_6000_7000   "Anslut modulfil vid $6000/$7000"
  IDS_MI_LOAD_CART_1000            "L�s ny insticksmodul $1***"
  IDS_MI_UNLOAD_CART_1000          "L�s ur insticksmodul $1***"
  IDS_MI_LOAD_CART_2000_3000       "L�s ny insticksmodul $2-3***"
  IDS_MI_UNLOAD_CART_2000_3000     "L�s ur insticksmodul $2-3***"
  IDS_MI_LOAD_CART_4000_5000       "L�s ny insticksmodul $4-5***"
  IDS_MI_UNLOAD_CART_4000_5000     "L�s ur insticksmodul $4-5***"
  IDS_MI_LOAD_CART_6000_7000       "L�s ny insticksmodul $6-7***"
  IDS_MI_UNLOAD_CART_6000_7000     "L�s ur insticksmodul $6-7***"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MODEL_LINE                   "Model hatt�"
  IDS_SELECT_CBMII_MEM_128         "128 kByte"
  IDS_SELECT_CBMII_MEM_256         "256 kByte"
  IDS_SELECT_CBMII_MEM_512         "512 kByte"
  IDS_SELECT_CBMII_MEM_1024        "1024 kByte"
  IDS_CBM2_RAM_BANKS               "RAM banklar�"
  IDS_TOGGLE_CBMII_RAM08           "Bank 15 $0800-$0FFF RAM"
  IDS_TOGGLE_CBMII_RAM1            "Bank 15 $1000-$1FFF RAM"
  IDS_TOGGLE_CBMII_RAM2            "Bank 15 $2000-$3FFF RAM"
  IDS_TOGGLE_CBMII_RAM4            "Bank 15 $4000-$5FFF RAM"
  IDS_TOGGLE_CBMII_RAM6            "Bank 15 $6000-$7FFF RAM"
  IDS_TOGGLE_CBMII_RAMC            "Bank 15 $C000-$CFFF RAM"
  IDS_ATTACH_CBM2_CART_1000        "$1000 adresine kartu� imaj� yerle�tir"
  IDS_ATTACH_CBM2_CART_2000_3000   "$2000/$3000 adresine kartu� imaj� yerle�tir"
  IDS_ATTACH_CBM2_CART_4000_5000   "$4000/$5000 adresine kartu� imaj� yerle�tir"
  IDS_ATTACH_CBM2_CART_6000_7000   "$6000/$7000 adresine kartu� imaj� yerle�tir"
  IDS_MI_LOAD_CART_1000            "Yeni Kartu� $1*** y�kle"
  IDS_MI_UNLOAD_CART_1000          "Kartu� $1*** kald�r"
  IDS_MI_LOAD_CART_2000_3000       "Yeni Kartu� $2-3*** y�kle"
  IDS_MI_UNLOAD_CART_2000_3000     "Kartu� $2-3*** kald�r"
  IDS_MI_LOAD_CART_4000_5000       "Yeni Kartu� $4-5*** y�kle"
  IDS_MI_UNLOAD_CART_4000_5000     "Kartu� $4-5*** kald�r"
  IDS_MI_LOAD_CART_6000_7000       "Yeni Kartu� $6-7*** y�kle"
  IDS_MI_UNLOAD_CART_6000_7000     "Kartu� $6-7*** kald�r"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

