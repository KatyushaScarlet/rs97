VARIANT = $(EPOCROOT)/epoc32/include/variant
OS_HRH = symbian_os.hrh

SYMBIAN_MACRO = -D__SYMBIAN32__ -D__EPOC32__ -D_SYMBIAN -DUSE_UI -DUSE_CONFIG -DUSE_ZIP -I$(SRC_PATH)/3rdparty/zlib -I$(SRC_PATH)/3rdparty/minizip -I$(SRC_PATH)/3rdparty/tinyxml2
S60_MACRO = -D__SERIES60_30__ -D__SERIES60_3X__
GCCE_MACRO = -D__GCCE__ -D__MARM__ -D__MARM_ARMV5__ -D__EABI__
CPP_MACRO = -D__SUPPORT_CPP_EXCEPTIONS__
EXE_MACRO = -D__EXE__
REL_MACRO = -DNDEBUG
UNICODE_MACRO = -D_UNICODE

GCCE_WARNING_FLAGS = -Wall -Wno-unknown-pragmas

