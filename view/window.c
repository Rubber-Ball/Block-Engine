#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <stdlib.h>
#include <stdio.h>



int window(int x, int y, int width, int height, int border_width, long border_color, long background_color, char *title, Display **out_display, Window *out_window){
    printf("\033[1;33mLaunching window.c \033[1;32mdone...\033[0m\n");

    
//type-like (int,char,etc...) window is a variable
//     |           |----------------------/
    XFontStruct *font;

//type-like (int,char,etc...) window is a variable
//     |      |----------------------/
    Display *display;
    printf("\033[1;33mcreating variable display \033[1;32mdone...\033[0m\n");


//type-like (int,char,etc...) window is a variable
//     |     |----------------------/
    Window window; //the window
    printf("\033[1;33mcreating variable window \033[1;32mdone...\033[0m\n");


    int screen; //which screen to draw on.
    printf("\033[1;33mcreating variable screen \033[1;32mdone...\033[0m\n");


//type-like (int,char,etc...) window is a variable
//     |     |----------------------/
    XEvent event;
    printf("\033[1;33mcreating variable event \033[1;32mdone...\033[0m\n");


//type-like (int,char,etc...) window is a variable
//   | |----------------------/
    GC gc; //required.
    printf("\033[1;33mcreating variable gc \033[1;32mdone...\033[0m\n");


    display = XOpenDisplay(NULL);//connect to x server.
    printf("\033[1;33mEstablishing a connection to X11 server \033[1;32mdone...\033[0m\n");


    if (display == NULL) {
        fprintf(stderr, "\033[1;31mCannot open \033[1;32mdisplay\033[0m\n");
        return 1;
    }


    screen = DefaultScreen(display); //get screen number for number usualy 0.
    printf("\033[1;33mEstablishing a connection to screen \033[1;32mdone...\033[0m\n");
    

    window = XCreateSimpleWindow(display, RootWindow(display, screen), x, y, width, height, border_width, border_color, background_color);//creat the window with the window Properties with what we gave.                             
    printf("\033[1;33mCreating window \033[1;32mdone...\033[0m\n");


    XStoreName(display, window, title);
    printf("\033[1;33mAdding title \033[1;32mdone...\033[0m\n");


    XSelectInput(display, window, ExposureMask | KeyPressMask | ButtonPressMask); // select inputs we want from the screen.
    printf("\033[1;33mSelecting inputs to find \033[1;32mdone...\033[0m\n");


    XMapWindow(display, window);  // Show the window
    printf("\033[1;33mShowing window \033[1;32mdone...\033[0m\n");


    gc = XCreateGC(display, window, 0, NULL); //creat a graphics context (used for drawing lines shapes etc) !!!!required!!!!
    printf("\033[1;33mCreating a graphics context \033[1;32mdone...\033[0m\n");

    *out_display = display;
    *out_window = window;

    return 0;


}


void window_destroy(Display *display, Window win, GC gc) {
    if (display && gc) {
        XFreeGC(display, gc);
        printf("\033[1;35mGraphics context freed.\033[0m\n");
    }

    if (display && win) {
        XDestroyWindow(display, win);
        printf("\033[1;35mWindow destroyed.\033[0m\n");
    }

    if (display) {
        XCloseDisplay(display);
        printf("\033[1;35mDisplay connection closed.\033[0m\n");
    }
}






