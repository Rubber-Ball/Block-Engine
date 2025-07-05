# Block Engine

A simple, modular 2D graphics engine for Linux using X11! Draw rectangles, circles, lines, and text in a window, with keyboard controls and custom error handling.

## Features
- Modular codebase (separate files for shapes, window, text, error handling)
- X11-based window and graphics
- Keyboard controls (exit, change background color)
- OS detection
- Colorful terminal output

## Build & Run

### Dependencies
- Linux OS
- X11 development libraries (`libx11-dev`)

### Build
```sh
gcc Block_Engine.c view/*.c debugger/*.c inputs/*.c -o Block_Engine -lX11
```

### Run
```sh
./Block_Engine
```

## Keyboard Controls
- **E**: Exit the program
- **W**: Change background color randomly

## Project Structure
```
Block_Engine
│
├── Block_Engine.c
├── run.sh
├── structure.txt
├── Brick.png
├── How it works.odt
├── view/
│   ├── window.c/h
│   ├── Rectangle.c/h
│   ├── Arc.c/h
│   ├── Circle.c/h
│   ├── Line.c/h
│   ├── text.c/h
│
├── debugger/
│   ├── Error.c/h
│
├── inputs
```

## Credits
- Developed by le007 = LeCatMan = daniel
- Powered by X11 and C

---
Enjoy building with Block Engine! 🧱🐧
