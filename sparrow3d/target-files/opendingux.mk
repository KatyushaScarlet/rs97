# === Target file for the Dingoo with Opendingux. Use it with "make TARGET=opendingux" ===

CC = mipsel-linux-gcc
FLAGS = -DMOBILE_DEVICE -DDINGUX -DBLACK_MAGIC $(GENERAL_TWEAKS) $(SMALL_RESOLUTION_DEVICES)
SDL = -I/opt/rs97/mipsel-rs97-linux-uclibc/sysroot/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT
INCLUDE = -I/opt/rs97/mipsel-rs97-linux-uclibc/sysroot/usr/include
LIB = 
AR = mipsel-linux-ar
RANLIB = mipsel-linux-ranlib
