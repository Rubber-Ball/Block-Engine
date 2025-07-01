#ifndef ARK_H
#define ARK_H
#include <X11/Xlib.h>

extern Display *display;

int Draw_Empty_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

int Draw_Filled_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

#endif
