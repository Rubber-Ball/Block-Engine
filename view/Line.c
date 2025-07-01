#include <X11/Xlib.h>

int Draw_Line(Display *display, Window *window, GC gc, int start_of_line_x, int start_of_line_y, int end_of_line_x, int end_of_line_y){
    
    XDrawLine(display,window,gc,start_of_line_x,start_of_line_y,end_of_line_x,end_of_line_y);
}

