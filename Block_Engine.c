#include "view/window.h"
#include "inputs/key_inputs.h"
#include "view/text.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// Dependencies: libx11-dev (or libX11-devel / libx11) THIS CODE IS FOR LINUX ONLY


void render_ui(Display *display, Window win, GC gc) {

    draw_text(display, win, gc, 25, 15, "Welcome to Block Engine!", 0xFFFFFF,10);

    draw_text(display, win, gc, 25, 45, "Press E to exit, W to change color", 0x000099,20);
}



int main() {
    printf("\033[1;33mLaunching 🧱Block_Engine.c🧱 \033[1;32m\ndone...✅\033[0m\n");



    Display *display;
    Window win;
    GC gc;


    unsigned long background_color = 0x99999;

    srand(time(NULL));

    // Create the window and get display + window handles
    if (window(500, 500, 700, 400, 0, 0xFF0000, background_color, "Block Engine", &display, &win) != 0) {
        return 1;
    }

    gc = XCreateGC(display, win, 0, NULL);

    XEvent event;

    



    while (1) {
        
        
        XNextEvent(display, &event);

        if (event.type == Expose) {
            render_ui(display, win, gc);
        }

        

        if (event.type == KeyPress) {
            if (Key_Inputs(&event.xkey, "e")) {
                printf("\033[1;35mDestroying:\033[0m \033[1;32mdisplay=%p win=%lu gc=%p\033[0m✅\n", display, win, gc);
                window_destroy(display, win, gc);
                break;
            }
            else if (Key_Inputs(&event.xkey, "w")) {
                background_color = rand() % 0xFFFFFF; // change to random color
                XSetWindowBackground(display, win, background_color);
                XClearWindow(display, win); // force redraw with new background
                render_ui(display, win, gc);
            }

        }
        



}




    return 0;
}




