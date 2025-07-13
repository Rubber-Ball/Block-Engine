/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 * Author: Daniel / Rubber-Ball
 * GitHub: https://github.com/Rubber-Ball/Block-Engine
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>
#include <time.h>
#include <X11/Xlib.h>

#include "Debugger/Error.h"
#include "View/Window/Window.h"
#include "Inputs/KeyBoard/Key_inputs.h"
#include "View/Text/Text.h"
#include "View/Ark/Ark.h"
#include "View/Circle/Circle.h"
#include "View/Rectangle/Rectangle.h"
#include "View/Line/Line.h"
#include "Debugger/Detect-OS.h"
#include "Inputs/Mouse/Mouse.h"
// Dependencies: libx11-dev (or libX11-devel / libx11) THIS CODE IS FOR LINUX ONLY



void render_ui(Display *display, Window win, GC gc, int screen) {

    Draw_Filled_Rectangle(display,win,gc,50,50,500,100,0x000099);

    Draw_Empty_Rectangle(display,win,gc,40,40,520,120,0x000099);

    draw_text(display, win, gc, 70, 80, "Welcome to Block Engine!", 0xFFFFFF,20);

    draw_text(display, win, gc, 70, 100, "Press E to exit, W to change background color", 0xFFFFFF,20);

    Draw_Filled_Circle(display, win, gc, 450, 80, 50, 50, 0xFFF300);

    Draw_Line(display, win, gc, 4, 450, 80, 505, 125, 0xFF0000);

    Draw_Line(display, win, gc, 4, 500, 80, 450, 125, 0xFF0000);

    XSetForeground(display,gc,0xFF0000);

    XDrawRectangle(display,win,gc,600,600,300,300);

    XSetForeground(display,gc,0xFF0000);

    XDrawPoint(display,win,gc,750,750);

    

}


int main() {
    printf("\033[1;33mLaunching Block_Engine.c🧱 \033[1;32m\ndone...✅\033[0m\n");

    detect_os();

    Display *display;
    Window win;
    GC gc;
    

    unsigned long background_color = 0xDCE3F1;
    
    srand(time(NULL));
    
    // Create the window and get display + window handles
    if (window(500, 500, 700, 400, 0, 0xFF0000, background_color, "Block Engine", &display, &win) != 0) {
        error("The Window Creation Failed!❌");
        return 1;
    }

    gc = XCreateGC(display, win, 0, NULL);

    XEvent event;

    int screen = DefaultScreen(display);
    
    int button_x, button_y, button_width, button_height;

    while (1) {
        
        
        XNextEvent(display, &event);

        if (event.type == Expose) {
            render_ui(display, win, gc, screen);
        }

        if (event.type == ButtonPress) {
            int button = event.xbutton.button;  // 1=left, 2=middle, 3=right
            int x = event.xbutton.x;
            int y = event.xbutton.y;

            if (button == 1 && is_mouse_inside_button(x,y,50,50,500,100)) {
                printf("Button clicked!\n");
            }
        }

        if (event.type == KeyPress) {
            if (Key_Inputs(&event.xkey, "e")) {
                printf("\033[1;35mDestroying:\033[0m \033[1;32mdisplay=%p win=%lu gc=%p\033[0m✅\n", display, win, gc);
                window_destroy(display, win, gc);
                break;
            }
            else if (Key_Inputs(&event.xkey, "B")) {
                background_color = rand() % 0xFFFFFF; // change to random color
                XSetWindowBackground(display, win, background_color);
                XClearWindow(display, win); // force redraw with new background
                render_ui(display, win, gc, screen);
            }
 
}
        



}




    return 0;
}




