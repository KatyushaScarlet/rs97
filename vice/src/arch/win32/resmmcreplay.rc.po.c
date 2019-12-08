
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif

IDD_MMCREPLAY_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 140
BEGIN
    LTEXT           "", IDC_MMCREPLAY_CARDIMAGE_LABEL,
                    9, 9, 50, 8
    PUSHBUTTON      "", IDC_MMCREPLAY_CARDIMAGE_BROWSE,
                    66, 7, 50, 14, 0
    AUTOCHECKBOX    "", IDC_MMCREPLAY_CARDRW,
                    120, 9, 60, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    EDITTEXT        IDC_MMCREPLAY_CARDIMAGE,
                    9, 23, 160, 12, WS_TABSTOP
    LTEXT           "", IDC_MMCREPLAY_EEPROMIMAGE_LABEL,
                    9, 41, 50, 8
    PUSHBUTTON      "", IDC_MMCREPLAY_EEPROMIMAGE_BROWSE,
                    66, 39, 50, 14, 0
    AUTOCHECKBOX    "", IDC_MMCREPLAY_EEPROMRW,
                    120, 41, 60, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    EDITTEXT        IDC_MMCREPLAY_EEPROMIMAGE,
                    9, 55, 160, 12, WS_TABSTOP
    AUTOCHECKBOX    "", IDC_MMCREPLAY_WRITE_ENABLE,
                    9, 75, 160, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    AUTOCHECKBOX    "", IDC_MMCREPLAY_RESCUEMODE,
                    9, 95, 60, 10, BS_AUTOCHECKBOX | WS_TABSTOP
    LTEXT           "", IDC_MMCREPLAY_SDTYPE_LABEL,
                    80, 95, 30, 8
    COMBOBOX        IDC_MMCREPLAY_SDTYPE,
                    115, 93, 50, 80, CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    DEFPUSHBUTTON   "", IDOK,
                    30, 108, 50, 14, WS_TABSTOP
    PUSHBUTTON      "", IDCANCEL,
                    90, 108, 50, 14, WS_TABSTOP
END



STRINGTABLE
BEGIN
  IDS_MMCREPLAY_CAPTION             N_("MMC Replay settings")
  IDS_MMCREPLAY_CARDIMAGE_LABEL     N_("Card image file")
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   N_("EEPROM image file")
  IDS_MMCREPLAY_RESCUEMODE          N_("Rescue mode")
  IDS_MMCREPLAY_SDTYPE_LABEL        N_("Card type")
  IDS_MMCREPLAY_READ_WRITE          N_("read/write")
  IDS_MMCREPLAY_WRITE_ENABLE        N_("Save MMC Replay EEPROM when changed")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay-indstillinger"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Kortimagefil"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM image-fil"
  IDS_MMCREPLAY_RESCUEMODE          "Fejlsikret tilstand"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Korttype"
  IDS_MMCREPLAY_READ_WRITE          "skrivbar"
  IDS_MMCREPLAY_WRITE_ENABLE        "Gem MMC Replay EEPROM ved �ndringer"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay Einstellungen"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Card Image Datei"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM Image Datei"
  IDS_MMCREPLAY_RESCUEMODE          "Rescue Modus"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Card Typ"
  IDS_MMCREPLAY_READ_WRITE          "lese/schreibe"
  IDS_MMCREPLAY_WRITE_ENABLE        "MMC Replay EEPROM bei �nderung speichern"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "Ajustes MMC Replay"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Fichero imagen tarjeta"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "Fichero imagen EEPROM"
  IDS_MMCREPLAY_RESCUEMODE          "Modo rescate"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Tipo de tarjeta"
  IDS_MMCREPLAY_READ_WRITE          "Leer/Grabar"
  IDS_MMCREPLAY_WRITE_ENABLE        "Grabar MMC Replay EEPROM si cambia"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "Param�tres MMC Replay"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Fichier image de carte"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "Nom d'image EEPROM"
  IDS_MMCREPLAY_RESCUEMODE          "Mode de secours"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Type de carte"
  IDS_MMCREPLAY_READ_WRITE          "lecture/�criture"
  IDS_MMCREPLAY_WRITE_ENABLE        "Sauvegarder l'EEPROM MMC Replay lorsque modifi�"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay settings"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Card image file"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM image file"
  IDS_MMCREPLAY_RESCUEMODE          "Rescue mode"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Card type"
  IDS_MMCREPLAY_READ_WRITE          "�rhat�/olvashat�"
  IDS_MMCREPLAY_WRITE_ENABLE        "Save MMC Replay EEPROM when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "Impostazioni MMC Replay"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "File immagine Card"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "File immagine EEPROM"
  IDS_MMCREPLAY_RESCUEMODE          "Modalit� ripristino"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Tipo card"
  IDS_MMCREPLAY_READ_WRITE          "lettura/scrittura"
  IDS_MMCREPLAY_WRITE_ENABLE        "Salva immagine EEPROM MMC Replay al cambio"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay ����"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "ī�� �̹��� ����"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM �̹��� ����"
  IDS_MMCREPLAY_RESCUEMODE          "Rescue mode"
  IDS_MMCREPLAY_SDTYPE_LABEL        "ī�� ����"
  IDS_MMCREPLAY_READ_WRITE          "�б�/����"
  IDS_MMCREPLAY_WRITE_ENABLE        "Save MMC Replay EEPROM when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay instellingen"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Card bestand"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM bestand"
  IDS_MMCREPLAY_RESCUEMODE          "Reddingsmodus"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Card soort"
  IDS_MMCREPLAY_READ_WRITE          "lees/schrijf"
  IDS_MMCREPLAY_WRITE_ENABLE        "MMC Replay EEPROM opslaan indien gewijzigd"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "Ustawienia MMC Replay"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Plik obrazu karty"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "Plik obrazu EEPROM"
  IDS_MMCREPLAY_RESCUEMODE          "Tryb ratunkowy"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Typ karty"
  IDS_MMCREPLAY_READ_WRITE          "oczyt/zapis"
  IDS_MMCREPLAY_WRITE_ENABLE        "Zapisuj EEPROM MMC Replay przy zmianie"
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
  IDS_MMCREPLAY_CAPTION             "MMC Replay settings"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Card image file"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM image file"
  IDS_MMCREPLAY_RESCUEMODE          "Rescue mode"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Card type"
  IDS_MMCREPLAY_READ_WRITE          "read/write"
  IDS_MMCREPLAY_WRITE_ENABLE        "Save MMC Replay EEPROM when changed"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay-inst�llningar"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Kortavbildningsfil"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM-avbildningsfil"
  IDS_MMCREPLAY_RESCUEMODE          "R�ddningsl�ge"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Korttyp"
  IDS_MMCREPLAY_READ_WRITE          "skrivbar"
  IDS_MMCREPLAY_WRITE_ENABLE        "Spara MMC Replay EEPROM vid �ndringar"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
  IDS_MMCREPLAY_CAPTION             "MMC Replay ayarlar�"
  IDS_MMCREPLAY_CARDIMAGE_LABEL     "Kart imaj dosyas�"
  IDS_MMCREPLAY_EEPROMIMAGE_LABEL   "EEPROM imaj dosyas�"
  IDS_MMCREPLAY_RESCUEMODE          "Kurtarma modu"
  IDS_MMCREPLAY_SDTYPE_LABEL        "Kart tipi"
  IDS_MMCREPLAY_READ_WRITE          "oku/yaz"
  IDS_MMCREPLAY_WRITE_ENABLE        "MMC Replay EEPROM'u de�i�ti�inde kaydet"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


