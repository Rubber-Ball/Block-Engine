#include <X11/Xlib.h>

int Draw_Line(Display *display, Window window, GC gc, int width, int start_of_line_x, int start_of_line_y, int end_of_line_x, int end_of_line_y, long color){
    
    XSetForeground(display, gc, color);

    XSetLineAttributes(display, gc, width, LineSolid, CapButt, JoinMiter);

    XDrawLine(display,window,gc,start_of_line_x,start_of_line_y,end_of_line_x,end_of_line_y);
}

