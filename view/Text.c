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
#include <string.h>
#include <stdio.h>

void draw_text(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size) {
    // Set color
    XSetForeground(display, gc, color);

    // Draw string
    XDrawString(display, window, gc, x, y, text, (int)strlen(text));
}

int Draw_Text_With_Background_Color(Display *display, Window window, GC gc, int x, int y, char *text, long color, int size, int screen, long background_color, long text_color){

    XSetForeground(display, gc, text_color);

    XSetBackground(display, gc, background_color);

    XDrawImageString(display, window, gc, x, y, text, size);

}
