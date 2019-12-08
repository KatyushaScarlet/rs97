CFLAGS += -DPC_VERSION -DRES320X240 `/opt/rs97/mipsel-rs97-linux-uclibc/sysroot/usr/bin/sdl-config --cflags`
all: pang
pang : main.o structures.o ball.o collisions.o plateforme.o player.o ladder.o bonus.o shoot.o objets.o levels.o PCGfxEngine.o PCSoundEngine.o
	mipsel-linux-gcc  -lSDL -lSDL_gfx -lSDL_mixer -lSDL_image -o pang main.o structures.o ball.o collisions.o plateforme.o player.o ladder.o bonus.o shoot.o objets.o levels.o PCGfxEngine.o PCSoundEngine.o
.c.o: 
	mipsel-linux-gcc $(CFLAGS) -c $*.c -o $*.o 

clean:
	rm -rf *.o
	rm -rf pang 
	rm -rf *~

.PHONY: clean pang
