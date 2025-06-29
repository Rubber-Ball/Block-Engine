#ifndef RECTANGEL_H
#define RECTANGEL_H
#include <X11/Xlib.h>


extern Display *display;

int Draw_Filled_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width);

#endif
