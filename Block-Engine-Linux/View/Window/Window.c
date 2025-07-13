/* SPDX-License-Identifier: MIT */

/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 * Author: Daniel / Rubber-Ball
 * GitHub: https://github.com/Rubber-Ball/Block-Engine
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */



#include <X11/Xlib.h>
//#include <X11/keysym.h>
//#include <stdlib.h>
#include <stdio.h>
#include "../../Debugger/Error.h"





int window(int x, int y, int width, int height, int border_width, long border_color, long background_color, char *title, Display **out_display, Window *out_window){
    printf("\033[1;33mLaunching window.c📺 \033[1;32\nmdone...✅\033[0m\n");

    
//type-like (int,char,etc...) window is a variable
//     |           |----------------------/
    XFontStruct *font;

//type-like (int,char,etc...) window is a variable
//     |      |----------------------/
    Display *display;
    printf("\033[1;33mcreating display variable💾 \n\033[1;32mdone...✅\033[0m\n");
 
   
//type-like (int,char,etc...) window is a variable
//     |     |----------------------/
    Window window; //the window
    printf("\033[1;33mcreating window variable💾 \n\033[1;32mdone...✅\033[0m\n");


    int screen; //which screen to draw on.
    printf("\033[1;33mcreating screen variable💾 \n\033[1;32mdone...✅\033[0m\n");

    
//type-like (int,char,etc...) window is a variable
//     |     |----------------------/
    XEvent event;
    printf("\033[1;33mcreating event variable💾  \n\033[1;32mdone...✅\033[0m\n");


//type-like (int,char,etc...) window is a variable
//   | |----------------------/
    GC gc; //required.
    printf("\033[1;33mcreating gc variable💾  \n\033[1;32mdone...✅\033[0m\n");

    

    display = XOpenDisplay(NULL);//connect to x server.
    printf("\033[1;33mEstablishing a connection to X11 server🔌 \n\033[1;32mdone...✅\033[0m\n");


    if (display == NULL) {
        error("Cannot open display❌");
        return 1;
    }


    screen = DefaultScreen(display); //get screen number for number usualy 0.
    printf("\033[1;33mEstablishing a connection to screen🔌 \n\033[1;32mdone...✅\033[0m\n");
\

    window = XCreateSimpleWindow(display, RootWindow(display, screen), x, y, width, height, border_width, border_color, background_color);//creat the window with the window Properties with what we gave.                             
    printf("\033[1;33mCreating window📺 \n\033[1;32mdone...✅\033[0m\n");


    XStoreName(display, window, title);
    printf("\033[1;33mAdding title \n\033[1;32mdone...✅\033[0m\n");


    XSelectInput(display, window, ExposureMask | KeyPressMask | ButtonPressMask); // select inputs we want from the screen.
    printf("\033[1;33mSelecting inputs to find \n\033[1;32mdone...✅\033[0m\n");


    XMapWindow(display, window);  // Show the window
    printf("\033[1;33mShowing window \n\033[1;32mdone...✅\033[0m\n");


    gc = XCreateGC(display, window, 0, NULL); //creat a graphics context (used for drawing lines shapes etc) !!!!required!!!!
    printf("\033[1;33mCreating a graphics context📃 \n\033[1;32mdone...✅\033[0m\n");

    *out_display = display;
    *out_window = window;

    return 0;


}


void window_destroy(Display *display, Window win, GC gc) {
    
    if (display && gc) {
        XFreeGC(display, gc);
        printf("\033[1;35mGraphics context freed.📃✅\033[0m\n");
    }

    if (display && win) {
        XDestroyWindow(display, win);
        printf("\033[1;35mWindow destroyed.📺✅\033[0m\n");
    }

    if (display) {
        XCloseDisplay(display);
        printf("\033[1;35mDisplay connection closed.🔌🌐✅\033[0m\n");
    }
}






