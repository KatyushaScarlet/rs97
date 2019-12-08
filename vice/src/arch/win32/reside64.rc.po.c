
#include "vice.h"

#include "res.h"
#include "rescommon.h"

#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


IDD_IDE64_V4_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 80
BEGIN
    AUTOCHECKBOX    "", IDC_IDE64_V4,
                    10, 14, 90, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP

END



IDD_IDE64_SETTINGS_DIALOG DIALOG DISCARDABLE 0, 0, 180, 160
BEGIN
    LTEXT           "", IDC_IDE64_FILE_LABEL,
                    9, 14, 50, 8
    PUSHBUTTON      "", IDC_IDE64_HDIMAGE_BROWSE,
                    60, 12, 50, 14, 0
    EDITTEXT        IDC_IDE64_HDIMAGE_FILE,
                    9, 28, 160, 12, WS_TABSTOP

    GROUPBOX        "", IDC_IDE64_GEOMETRY,
                    5, 58, 120, 95
    AUTOCHECKBOX    "", IDC_TOGGLE_IDE64_SIZEAUTODETECT,
                    10, 70, 90, 10, BS_AUTOCHECKBOX | WS_GROUP | WS_TABSTOP
    LTEXT           "", IDC_IDE64_CYLINDERS_LABEL,
                    10, 85, 50, 8
    COMBOBOX        IDC_IDE64_CYLINDERS,
                    55, 83, 60, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_IDE64_HEADS_LABEL,
                    10, 105, 55, 8
    COMBOBOX        IDC_IDE64_HEADS,
                    55, 103, 60, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_IDE64_SECTORS_LABEL,
                    10, 125, 50, 8
    COMBOBOX        IDC_IDE64_SECTORS,
                    55, 123, 60, 50, CBS_DROPDOWNLIST | WS_GROUP | WS_TABSTOP | WS_VSCROLL
    LTEXT           "", IDC_IDE64_SIZE,
                    10, 140, 100, 8
END



STRINGTABLE
BEGIN
    IDS_IDE64_V4_SETTINGS           N_("IDE64 V4 settings")
    IDS_IDE64_HD_IMAGE_1_SETTINGS   N_("IDE64 primary master device settings")
    IDS_IDE64_HD_IMAGE_2_SETTINGS   N_("IDE64 primary slave device settings")
    IDS_IDE64_HD_IMAGE_3_SETTINGS   N_("IDE64 secondary master device settings")
    IDS_IDE64_HD_IMAGE_4_SETTINGS   N_("IDE64 secondary slave device settings")
    IDS_IDE64_SETTINGS              N_("IDE64 settings")
    IDS_IDE64_V4                    N_("Enable IDE64 V4")
    IDS_IDE64_IMAGE                 N_("ATA device image file")
    IDS_IDE64_GEOMETRY              N_("Geometry")
    IDS_IDE64_AUTODETECT            N_("Autodetect image size")
    IDS_IDE64_CYLINDERS             N_("Cylinders")
    IDS_IDE64_HEADS                 N_("Heads")
    IDS_IDE64_SECTORS               N_("Sectors")
    IDS_IDE64_TOTAL_SIZE            N_("Total size: %iKB")
    IDS_IDE64_SELECT_IMAGE          N_("Select ATA device image file")
END



STRINGTABLE
LANGUAGE LANG_DANISH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 indstillinger"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 prim�r master enhedsindstillinger"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 prim�r slave enhedsindstillinger"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 sekund�r master enhedsindstillinger"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 sekund�r slave enhedsindstillinger"
    IDS_IDE64_SETTINGS              "IDE64-indstillinger"
    IDS_IDE64_V4                    "Aktiv�r IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA-enhed imagefil"
    IDS_IDE64_GEOMETRY              "Geometri"
    IDS_IDE64_AUTODETECT            "Autodetekt�r st�rrelse p� image"
    IDS_IDE64_CYLINDERS             "Cylindrer"
    IDS_IDE64_HEADS                 "Hoveder"
    IDS_IDE64_SECTORS               "Sektorer"
    IDS_IDE64_TOTAL_SIZE            "Total st�rrelse: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Angiv ATA-enhedsimagefil"
END



STRINGTABLE
LANGUAGE LANG_GERMAN, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 Einstellungen"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 Prim�r Master Ger�te Einstellungen"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 Prim�r Slave Ger�te Einstellungen"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 Sekund�r Master Ger�te Einstellungen"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 Sekund�r Slave Ger�te Einstellungen"
    IDS_IDE64_SETTINGS              "IDE64 Einstellungen"
    IDS_IDE64_V4                    "IDE64 V4 aktivieren"
    IDS_IDE64_IMAGE                 "ATA Ger�t Image Datei"
    IDS_IDE64_GEOMETRY              "Geometrie"
    IDS_IDE64_AUTODETECT            "Image Gr��e automatisch erkennen"
    IDS_IDE64_CYLINDERS             "Zylinder"
    IDS_IDE64_HEADS                 "K�pfe"
    IDS_IDE64_SECTORS               "Sektoren"
    IDS_IDE64_TOTAL_SIZE            "Gesamtgr��e: %iKB"
    IDS_IDE64_SELECT_IMAGE          "ATA Ger�t Image Datei ausw�hlen"
END



STRINGTABLE
LANGUAGE LANG_SPANISH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "Ajustes IDE64 V4"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "Ajustes perif�rico maestro primario IDE64"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "Ajustes perif�rico esclavo primario IDE64"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "Ajustes perif�rico maestro secundario IDE64"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "Ajustes perif�rico esclavo secundario IDE64"
    IDS_IDE64_SETTINGS              "Ajustes IDE64"
    IDS_IDE64_V4                    "Permitir IDE64 V4"
    IDS_IDE64_IMAGE                 "Fichero imagen perif�rico ATA"
    IDS_IDE64_GEOMETRY              "Geometria"
    IDS_IDE64_AUTODETECT            "Autodetecci�n del tama�o de la imagen"
    IDS_IDE64_CYLINDERS             "Cilindros"
    IDS_IDE64_HEADS                 "Cabezas"
    IDS_IDE64_SECTORS               "Sectores"
    IDS_IDE64_TOTAL_SIZE            "Tama�o total: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Selecionar fichero imagen perif�rico ATA"
END



STRINGTABLE
LANGUAGE LANG_FRENCH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "Param�tres IDE64 V4"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "Param�tres p�riph�rique ma�tre primaire IDE64"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "Param�tres p�riph�rique esclave primaire IDE64"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "Param�tres p�riph�rique ma�tre secondaire IDE64"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "Param�tres esclave secondaire IDE64"
    IDS_IDE64_SETTINGS              "Param�tres IDE64"
    IDS_IDE64_V4                    "Activer IDE64 V4"
    IDS_IDE64_IMAGE                 "Fichier image p�riph�rique ATA"
    IDS_IDE64_GEOMETRY              "G�om�trie"
    IDS_IDE64_AUTODETECT            "Autod�tection de la taille de l'image"
    IDS_IDE64_CYLINDERS             "Cylindres"
    IDS_IDE64_HEADS                 "T�tes"
    IDS_IDE64_SECTORS               "Secteurs"
    IDS_IDE64_TOTAL_SIZE            "Taille totale: %iKo"
    IDS_IDE64_SELECT_IMAGE          "S�lectionnez le fichier image du p�riph�rique ATA"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_HUNGARIAN, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 settings"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 primary master device settings"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 primary slave device settings"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 secondary master device settings"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 secondary slave device settings"
    IDS_IDE64_SETTINGS              "IDE64 be�ll�t�sai"
    IDS_IDE64_V4                    "Enable IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA device image file"
    IDS_IDE64_GEOMETRY              "Geometry"
    IDS_IDE64_AUTODETECT            "Autodetect image size"
    IDS_IDE64_CYLINDERS             "S�vok"
    IDS_IDE64_HEADS                 "Fejek"
    IDS_IDE64_SECTORS               "Szektorok"
    IDS_IDE64_TOTAL_SIZE            "Teljes m�ret: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Select ATA device image file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_ITALIAN, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "Impostazioni IDE64 C4"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "Impostazioni dispositivo IDE64 master sul canale primario"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "Impostazioni dispositivo IDE64 slave sul canale primario"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "Impostazioni dispositivo IDE64 slave sul canale secondario"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "Impostazioni dispositivo IDE64 master sul canale secondario"
    IDS_IDE64_SETTINGS              "Impostazioni IDE64"
    IDS_IDE64_V4                    "Attiva IDE64 V4"
    IDS_IDE64_IMAGE                 "File immagine dispositivo ATA"
    IDS_IDE64_GEOMETRY              "Geometria"
    IDS_IDE64_AUTODETECT            "Rileva automaticamente immagine"
    IDS_IDE64_CYLINDERS             "Cilindri"
    IDS_IDE64_HEADS                 "Testine"
    IDS_IDE64_SECTORS               "Settori"
    IDS_IDE64_TOTAL_SIZE            "Dimensione totale: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Seleziona file immagine dispositivo ATA"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(949)
#endif
STRINGTABLE
LANGUAGE LANG_KOREAN, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 settings"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 primary master device settings"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 primary slave device settings"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 secondary master device settings"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 secondary slave device settings"
    IDS_IDE64_SETTINGS              "IDE64 ����"
    IDS_IDE64_V4                    "Enable IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA device image file"
    IDS_IDE64_GEOMETRY              "������Ʈ��"
    IDS_IDE64_AUTODETECT            "�̹��� ũ�� �ڵ����� ã��"
    IDS_IDE64_CYLINDERS             "�Ǹ���"
    IDS_IDE64_HEADS                 "���"
    IDS_IDE64_SECTORS               "����"
    IDS_IDE64_TOTAL_SIZE            "Total size"
    IDS_IDE64_SELECT_IMAGE          "Select ATA device image file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_DUTCH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 instellingen"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 primair hoofd apparaat instellingen"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 HD primair slaaf apparaat instellingen"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 secondair hoofd apparaat instellingen"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 secondair slaaf apparaat instellingen"
    IDS_IDE64_SETTINGS              "IDE64 instellingen"
    IDS_IDE64_V4                    "Activeer IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA apparaat bestand"
    IDS_IDE64_GEOMETRY              "Geometrie"
    IDS_IDE64_AUTODETECT            "Automatisch detecteren bestandsgrootte"
    IDS_IDE64_CYLINDERS             "Cylinders"
    IDS_IDE64_HEADS                 "Koppen"
    IDS_IDE64_SECTORS               "Sectors"
    IDS_IDE64_TOTAL_SIZE            "Totale grootte: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Selecteer ATA apparaat bestand"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28592)
#endif
STRINGTABLE
LANGUAGE LANG_POLISH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "Ustawienia IDE64 V4"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "Ustawienia pierwszego urz�dzenia master IDE64"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "Ustawienia pierwszego urz�dzenia slave IDE64"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "Ustawienia drugiego urz�dzenia master IDE64"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "Ustawienia drugiego urz�dzenia slave IDE64"
    IDS_IDE64_SETTINGS              "Ustawienia IDE64"
    IDS_IDE64_V4                    "W��cz IDE64 V4"
    IDS_IDE64_IMAGE                 "Plik obrazu urz�dzenia ATA"
    IDS_IDE64_GEOMETRY              "Geometria"
    IDS_IDE64_AUTODETECT            "Automatycznie wykrywaj rozmiar obrazu"
    IDS_IDE64_CYLINDERS             "Cylindry"
    IDS_IDE64_HEADS                 "G�owice"
    IDS_IDE64_SECTORS               "Sektory"
    IDS_IDE64_TOTAL_SIZE            "Ca�kowity rozmiar: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Wybierz plik obrazu urz�dzenia ATA"
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
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 settings"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 primary master device settings"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 primary slave device settings"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 secondary master device settings"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 secondary slave device settings"
    IDS_IDE64_SETTINGS              "IDE64 settings"
    IDS_IDE64_V4                    "Enable IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA device image file"
    IDS_IDE64_GEOMETRY              "Geometry"
    IDS_IDE64_AUTODETECT            "�������������� ����������� ������� �����������"
    IDS_IDE64_CYLINDERS             "Cylinders"
    IDS_IDE64_HEADS                 "Heads"
    IDS_IDE64_SECTORS               "Sectors"
    IDS_IDE64_TOTAL_SIZE            "����� ������: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Select ATA device image file"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif



STRINGTABLE
LANGUAGE LANG_SWEDISH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4-inst�llningar"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "Inst�llningar f�r prim�r IDE64-masterenhet"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "Inst�llningar f�r prim�r IDE64-slavenhet"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "Inst�llningar f�r sekund�r IDE64-masterenhet"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "Inst�llningar f�r sekund�r IDE64-slavenhet"
    IDS_IDE64_SETTINGS              "IDE64-inst�llningar"
    IDS_IDE64_V4                    "Aktivera IDE64 V4"
    IDS_IDE64_IMAGE                 "ATA-enhetsavbildning"
    IDS_IDE64_GEOMETRY              "Geometri"
    IDS_IDE64_AUTODETECT            "Autodetektera storlek p� avbildning"
    IDS_IDE64_CYLINDERS             "Cylindrar"
    IDS_IDE64_HEADS                 "Huvuden"
    IDS_IDE64_SECTORS               "Sektorer"
    IDS_IDE64_TOTAL_SIZE            "Total storlek: %iKB"
    IDS_IDE64_SELECT_IMAGE          "Ange ATA-enhetsavbildning"
END



#ifndef WINDRES_CP_IGNORE
#pragma code_page(28599)
#endif
STRINGTABLE
LANGUAGE LANG_TURKISH, SUBLANG_NEUTRAL
BEGIN
    IDS_IDE64_V4_SETTINGS           "IDE64 V4 ayarlar�"
    IDS_IDE64_HD_IMAGE_1_SETTINGS   "IDE64 birincil ana s�r�c� ayarlar�"
    IDS_IDE64_HD_IMAGE_2_SETTINGS   "IDE64 birincil ba��ml� s�r�c� ayarlar�"
    IDS_IDE64_HD_IMAGE_3_SETTINGS   "IDE64 ikincil ana s�r�c� ayarlar�"
    IDS_IDE64_HD_IMAGE_4_SETTINGS   "IDE64 ikincil ba��ml� s�r�c� ayarlar�"
    IDS_IDE64_SETTINGS              "IDE64 ayarlar�"
    IDS_IDE64_V4                    "IDE64 V4'� aktif et"
    IDS_IDE64_IMAGE                 "ATA s�r�c� imaj dosyas�"
    IDS_IDE64_GEOMETRY              "Geometri"
    IDS_IDE64_AUTODETECT            "Imaj boyutunu otomatik alg�la"
    IDS_IDE64_CYLINDERS             "Silindirler"
    IDS_IDE64_HEADS                 "Kafalar"
    IDS_IDE64_SECTORS               "Sekt�rler"
    IDS_IDE64_TOTAL_SIZE            "Toplam boyut: %iKB"
    IDS_IDE64_SELECT_IMAGE          "ATA s�r�c� imaj dosyas� se�"
END
#ifndef WINDRES_CP_IGNORE
#pragma code_page(28591)
#endif


