# PCE emulator makefile
# Gilead Kutnick - Exophase

# Global definitions
AS        = mipsel-linux-as
CC        = mipsel-linux-gcc
STRIP     = mipsel-linux-strip --strip-all --remove-section=.comment  --remove-section=.note

OBJS      = main.o cpu.o memory.o irq.o io.o video.o timer.o psg.o disasm.o    \
            screen.o event.o audio.o menu.o debug.o cd.o adpcm.o netplay.o     \
            arcade_card.o bin_cue.o                                         \
            SDL_main.o SDL_screen.o SDL_event.o SDL_menu.o SDL_audio.o crc32.o \
			bitwise.o block.o codebook.o floor0.o floor1.o framing.o \
			info.o mapping0.o mdct.o registry.o res012.o sharedbook.o \
			synthesis.o vorbisfile.o window.o
BIN       ?= temper 

# Platform specific definitions

VPATH      += .. ../SDL ../linux ../tremor
#CFLAGS     += -DGCW_BUILD -Ofast -mips32r2 -mmxu -fdata-sections -ffunction-sections
CFLAGS     += -DGCW_BUILD -Ofast -fdata-sections -ffunction-sections
INCLUDES   = 
LIBS       = -lSDL -lz -lm -lbz2 -pthread -Wl,--as-needed -Wl,--gc-sections -flto -s

# Compilation:

.SUFFIXES: .c .S

%.o: %.c
	${CC} ${CFLAGS} ${INCLUDES} -c -o $@ $<

%.o: %.S
	${AS} -o $@ $<

all:	${OBJS}
	${CC} ${OBJS} ${LIBS} -o ${BIN}  
	${STRIP} ${BIN}
	mv temper ./opk/temper
	sh pack.sh

clean:
	rm -f *.o ${BIN} 
