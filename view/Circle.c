#include <X11/Xlib.h>

int Draw_Empty_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color){
    XSetForeground(display, gc, color);
    XDrawArc(display , window, gc , x, y, width, height, 0 , 360 * 64);

}


int Draw_Filled_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height, long color){
    XSetForeground(display, gc, color);
    XFillArc(display , window, gc , x, y, width, height, 0 , 360 * 64);

}

