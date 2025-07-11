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


#ifndef WINDOW_H
#define WINDOW_H
#include <X11/Xlib.h>

extern Display *display;

void window_destroy(Display *display, Window win, GC gc);

int window(int x, int y, int width, int height, int border_width, long border_color, long background_color, char *title, Display **out_display, Window *out_window);

#endif