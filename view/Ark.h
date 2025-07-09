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


#ifndef ARK_H
#define ARK_H
#include <X11/Xlib.h>

extern Display *display;

int Draw_Empty_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

int Draw_Filled_Ark(Display *display,Window window,GC gc,int x,int y , int width , int height , int angle1 , int angle2 , long color);

#endif
