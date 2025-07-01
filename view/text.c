#include <X11/Xlib.h>
#include <string.h>
#include <stdio.h>

void draw_text(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size) {
    // Set color
    XSetForeground(display, gc, color);

    // Draw string
    XDrawString(display, window, gc, x, y, text, (int)strlen(text));
}

int Draw_Text_With_Background_Color(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size, int screen, long background_color, long text_color){

    XSetForeground(display, gc, text_color);

    XSetBackground(display, gc, background_color);

    XDrawImageString(display, window, gc, x, y, text, size);

}
