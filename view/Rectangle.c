#include <X11/Xlib.h>


int Draw_Filled_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){
    XSetForeground(display, gc, color);

    XFillRectangle(display,win,gc,x,y,hight,width);
}


int Draw_empty_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){
    XSetForeground(display, gc, color);
    XDrawRectangle(display,win,gc,x,y,hight,width);
}


int Draw_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color){
    XSetForeground(display, gc, color);
    XDrawArc(display , window, gc , x, y, width, height, angle1 , angle2);
}

