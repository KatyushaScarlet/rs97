CC = mipsel-linux-gcc
INCLUDE = -I./include -I./opl
CFLAGS  = -g $(INCLUDE) -D_DINGUX 
UNSQZ_TARG := unsqz
# LEVELVIEWER_TARG := levelviewer
OPENTITUS_TARG := opentitus.dge
UNSQZ_OBJS := \
	unsqz.o \
	src/sqz.o
# LEVELVIEWER_OBJS := \
#	levelviewer.o \
#	src/sqz.o \
#	src/settings.o \
#	src/sprites.o
OPENTITUS_OBJS := \
	opentitus.o \
	src/audio.o \
	src/common.o \
	src/draw.o \
	src/enemies.o \
	src/engine.o \
	src/elevators.o \
	src/fonts.o \
	src/gates.o \
	src/keyboard.o \
	src/level.o \
	src/menu.o \
	src/objects.o \
	src/original.o \
	src/player.o \
	src/reset.o \
	src/scroll.o \
	src/settings.o \
	src/sprites.o \
	src/sqz.o \
	src/tile_animation.o \
	src/viewimage.o \
  libopl.a
DIRS = \
	. \
	src \
	src/opl

# all : $(UNSQZ_TARG) $(LEVELVIEWER_TARG) $(OPENTITUS_TARG)
# all : $(UNSQZ_TARG) $(OPENTITUS_TARG)
all : $(OPENTITUS_TARG)

$(UNSQZ_TARG) : $(UNSQZ_OBJS)
	$(CC) $(CFLAGS) -o $(UNSQZ_TARG) $(UNSQZ_OBJS)

# $(LEVELVIEWER_TARG) : $(LEVELVIEWER_OBJS)
# 	$(CC) $(CFLAGS) -o $(LEVELVIEWER_TARG) $(LEVELVIEWER_OBJS) `sdl-config --cflags --libs`

$(OPENTITUS_TARG) : $(OPENTITUS_OBJS)
	$(CC) -D_GNU_SOURCE=1 -D_REENTRANT  -O2 -Wall -Wl,-rpath,/usr/lib -lSDL -lpthread -lSDL_gfx -lSDL_image $(CFLAGS) -o $(OPENTITUS_TARG) $(OPENTITUS_OBJS) -lm -lSDL_mixer

clean :
	rm -f $(foreach dir,$(DIRS),$(foreach suffix,/*.o, $(addsuffix $(suffix),$(dir))))
