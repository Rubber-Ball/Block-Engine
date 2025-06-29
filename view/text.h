#ifndef TEXT_H
#define TEXT_H
#include <X11/Xlib.h>


void draw_text(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size);

#endif
