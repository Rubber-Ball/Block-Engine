/* SPDX-License-Identifier: MIT */

/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 * Author: Daniel / Rubber-Ball
 * GitHub: https://github.com/Rubber-Ball/Block-Engine
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */



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
