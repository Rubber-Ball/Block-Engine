/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include <X11/Xlib.h>

extern Display *display;

int Draw_Empty_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

int Draw_Filled_Circle(Display *display,Window window,GC gc,int x,int y , int width , int height, long color);

#endif
