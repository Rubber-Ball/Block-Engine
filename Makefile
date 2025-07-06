CC = gcc
CFLAGS = -Wall -Idebugger -Iinputs -Iview
SRC = \
	Block_Engine.c \
	debugger/detect-os.c \
	debugger/Error.c \
	inputs/key_inputs.c \
	view/Ark.c \
	view/Circle.c \
	view/Line.c \
	view/Rectangle.c \
	view/text.c \
	view/window.c

# Detect OS
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	CFLAGS += -D__linux__
	SDL_CFLAGS := $(shell sdl2-config --cflags)
	SDL_LIBS := $(shell sdl2-config --libs) -lGL -lX11 -lXext
	OUT = Block-Engine
else ifeq ($(UNAME_S),Darwin)
	CFLAGS += -D__APPLE__
	SDL_CFLAGS := $(shell sdl2-config --cflags)
	SDL_LIBS := $(shell sdl2-config --libs) -framework OpenGL
	OUT = Block-Engine
else ifeq ($(OS),Windows_NT)
	CC = x86_64-w64-mingw32-gcc
	CFLAGS += -D_WIN32
	SDL_CFLAGS =
	SDL_LIBS = -lSDL2main -lSDL2 -lopengl32
	OUT = Block-Engine.exe
else
	# Fallback (treat as Linux)
	CFLAGS += -D__linux__
	SDL_CFLAGS :=
	SDL_LIBS = -lGL -lX11 -lXext
	OUT = Block-Engine
endif

all:
	$(CC) $(CFLAGS) $(SDL_CFLAGS) $(SRC) -o $(OUT) $(SDL_LIBS)

clean:
	rm -f $(OUT)
