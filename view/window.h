#ifndef WINDOW_H
#define WINDOW_H
#include <X11/Xlib.h>

extern Display *display;

void window_destroy(Display *display, Window win, GC gc);

int window(int x, int y, int width, int height, int border_width, long border_color, long background_color, char *title, Display **out_display, Window *out_window);

#endif