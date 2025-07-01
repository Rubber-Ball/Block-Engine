#ifndef LINE_H
#define LINE_H
#include <X11/Xlib.h>

extern Display *display;

int Draw_Line(Display *display, Window *window, GC gc, int start_of_line_x, int start_of_line_y, int end_of_line_x, int end_of_line_y);

#endif