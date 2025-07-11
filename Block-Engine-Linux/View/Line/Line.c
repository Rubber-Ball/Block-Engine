/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 * Made by Author: Daniel / Rubber-Ball
 * github:  https://github.com/Rubber-Ball/Block-Engine
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */



#include <X11/Xlib.h>

int Draw_Line(Display *display, Window window, GC gc, int width, int start_of_line_x, int start_of_line_y, int end_of_line_x, int end_of_line_y, long color){
    
    XSetForeground(display, gc, color);

    XSetLineAttributes(display, gc, width, LineSolid, CapButt, JoinMiter);

    XDrawLine(display,window,gc,start_of_line_x,start_of_line_y,end_of_line_x,end_of_line_y);
}

