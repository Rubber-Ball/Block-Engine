## 📜 License Summary (MPL 2.0)

Block Engine is licensed under the Mozilla Public License 2.0.

You are free to:
- Use it in games (free or commercial)
- Modify it for personal or private use
- Distribute games made with it **without open-sourcing your game code**

If you **modify the engine** and **shared are published the modified engine**, you must:
- Publish the modified source files you changed
- Keep the license and author notice at the top of those files

If you **don’t share it**, you don’t have to publish anything.


# Block Engine

A simple, modular 2D graphics engine for Linux using X11! Draw rectangles, circles, lines, and text in a window, with keyboard controls and custom error handling.

## Features
- Modular codebase (separate files for shapes, window, text, error handling)
- X11-based window and graphics
- Keyboard controls (exit, change background color)
- OS detection
- Colorful terminal output

### Dependencies
- Linux OS
- X11 development libraries (`libx11-dev`)

### Build
```sh
gcc Block_Engine.c debugger/detect-os.c debugger/Error.c inputs/key_inputs.c view/Line.c view/Circle.c view/window.c view/text.c view/Rectangle.c -o Block-Engine -lX11 -lGL -lGLU -lm && ./Block-Engine
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
Block_Engine/
├── Block_Engine.c
├── run.sh
├── about/
│   ├── How it works.odt
│   ├── README.md
│   └── structure.txt
├── debugger/
│   ├── detect-os.c
│   ├── detect-os.h
│   ├── Error.c
│   └── Error.h
├── images/
│   ├── Brick.png
│   └── Brick.svg
├── inputs/
│   ├── key_inputs.c
│   └── key_inputs.h
├── view/
│   ├── Ark.c
│   ├── Ark.h
│   ├── Circle.c
│   ├── Circle.h
│   ├── Line.c
│   ├── Line.h
│   ├── Rectangle.c
│   ├── Rectangle.h
│   ├── text.c
│   ├── text.h
│   ├── window.c
│   └── window.h
```

## Credits
- Developed by Rubber-Ball = LeCatMan = daniel
- Powered by X11 and C

---
Enjoy building with Block Engine! 🧱
