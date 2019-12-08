CC = mipsel-linux-gcc
INSTALL = /usr/bin/install -c

prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
datadir = ${datarootdir}
datarootdir = ${prefix}/share

CFLAGS = -I/opt/rs97/mipsel-rs97-linux-uclibc/sysroot/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT -I/opt/rs97/bin/../mipsel-rs97-linux-uclibc/sysroot/usr/include/freetype2 -I/opt/rs97/bin/../mipsel-rs97-linux-uclibc/sysroot/usr/include  -DCHROMA_CURSES_HEADER=\<ncurses.h\> -DCHROMA_DATA_DIR=\"${datadir}/chroma/\"
INSTALL = /usr/bin/install -c
LDFLAGS =  -lintl -lSDL -lncurses
LIBS = -lSDL_image  -L/opt/rs97/bin/../mipsel-rs97-linux-uclibc/sysroot/usr/lib -lfreetype

all:  chroma-sdl chroma-curses

OBJECTS_COMMON = main.o level.o engine.o menu.o colours.o util.o enigma.o xor.o editor.o xmlparser.o names.o
OBJECTS_CURSES = cursesdisplay.o cursesmenudisplay.o
OBJECTS_SDL = sdldisplay.o sdlshadowdisplay.o sdlmenudisplay.o sdlfont.o sdlscreen.o graphics.o

chroma-curses: $(OBJECTS_COMMON) $(OBJECTS_CURSES)
	$(CC) -o chroma-curses $(OBJECTS_COMMON) $(OBJECTS_CURSES) $(LDFLAGS) $(LIBS)

chroma-sdl: $(OBJECTS_COMMON) $(OBJECTS_SDL)
	$(CC) -o chroma $(OBJECTS_COMMON) $(OBJECTS_SDL) $(LDFLAGS) $(LIBS)

clean:  clean-sdl clean-curses
	rm -rf $(OBJECTS_COMMON)

clean-curses:
	rm -rf $(OBJECTS_CURSES) chroma-curses

clean-sdl:
	rm -rf $(OBJECTS_SDL) chroma

install:  install-sdl install-curses
	for datafolder in colours help levels levels/* locale locale/* locale/*/*; do \
	if [ -d $$datafolder ]; then \
	${INSTALL} -d $(DESTDIR)$(datadir)/chroma/$$datafolder; \
	fi; \
	done
	for datafile in colours/* help/* levels/* levels/*/* locale/* locale/*/* locale/*/*/*; do \
	if [ -f $$datafile ]; then \
	${INSTALL} $$datafile $(DESTDIR)$(datadir)/chroma/$$datafile; \
	fi; \
	done

install-curses:
	${INSTALL} -d $(DESTDIR)$(bindir)
	${INSTALL} chroma-curses $(DESTDIR)$(bindir)/chroma-curses

install-sdl:
	${INSTALL} -d $(DESTDIR)$(bindir)
	${INSTALL} chroma $(DESTDIR)$(bindir)/chroma
	for datafile in graphics graphics/*; do \
        if [ -d $$datafile ]; then \
        ${INSTALL} -d $(DESTDIR)$(datadir)/chroma/$$datafile; \
        fi; \
	done
	for datafile in graphics/* graphics/*/*; do \
        if [ -f $$datafile ]; then \
        ${INSTALL} $$datafile $(DESTDIR)$(datadir)/chroma/$$datafile; \
        fi; \
        done
