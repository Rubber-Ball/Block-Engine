#include <X11/Xlib.h>

/**
 * Draws an empty ark (arc) on the specified window using the given parameters.
 * @param display The display connection.
 * @param window The window to draw on.
 * @param gc The graphics context to use for drawing.
 * @param x The x-coordinate of the upper-left corner of the bounding rectangle.
 * @param y The y-coordinate of the upper-left corner of the bounding rectangle.
 * @param width The width of the bounding rectangle.
 * @param height The height of the bounding rectangle.
 * @param angle1 The starting angle of the arc in degrees.
 * @param angle2 The angular extent of the arc in degrees.
 * @param color The color to use for drawing the arc.
 */
int Draw_Empty_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color){
    XSetForeground(display, gc, color);

    XDrawArk(display , window, gc , x, y, width, height, angle1 , angle2);
}

int Draw_Filled_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color){
    XSetForeground(display, gc, color);

    XFillArk(display , window, gc , x, y, width, height, angle1 , angle2);
}
