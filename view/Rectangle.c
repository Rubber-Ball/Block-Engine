#include <GL/gl.h>
#include <GL/glx.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <X11/Xlib.h>


int Draw_Filled_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){
    XFillRectangle(display,win,gc,x,y,hight,width);
    XSetForeground(display, gc, color);
}

