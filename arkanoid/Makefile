# Mon Makefile
#PATH = /usr/include/SDL
TARGET = arkanoid.dge
OBJECTS = main.o anims.o sprites.o dust.o frame.o mst.o animspr.o fire.o menu.o preca.o breaker.o font.o monsters.o snd.o

CFLAGS = -O3 -Wall -g -I/opt/rs97/mipsel-rs97-linux-uclibc/sysroot/usr/include/SDL
LIBS = -lSDL
LIBS = -lSDL -lSDL_image -lSDL_mixer
CC = mipsel-linux-gcc

all: $(TARGET)

clean:
	rm -rf *.o

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS) 

