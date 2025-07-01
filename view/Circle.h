#ifndef CIRCLE_H
#define CIRCLE_H
#include <X11/Xlib.h>

extern Display *display;

int Draw_Empty_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

int Draw_Filled_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height, long color);

#endif
