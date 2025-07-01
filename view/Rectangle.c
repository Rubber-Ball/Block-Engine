#include <X11/Xlib.h>

int Draw_Filled_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){

    XSetForeground(display, gc, color);

    XFillRectangle(display,win,gc,x,y,hight,width);
}

int Draw_Empty_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){

    XSetForeground(display, gc, color);

    XDrawRectangle(display,win,gc,x,y,hight,width);
}
