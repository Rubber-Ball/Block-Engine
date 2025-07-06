/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */

#include <X11/Xlib.h>

int Draw_Filled_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){

    XSetForeground(display, gc, color);

    XFillRectangle(display,win,gc,x,y,hight,width);
}

int Draw_Empty_Rectangle(Display *display, Window win, GC gc, int x, int y, int hight, int width, long color){

    XSetForeground(display, gc, color);

    XDrawRectangle(display,win,gc,x,y,hight,width);
}
