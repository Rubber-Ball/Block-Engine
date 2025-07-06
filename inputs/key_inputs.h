/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */

#ifndef KEY_INPUTS_H
#define KEY_INPUTS_H
#include <X11/Xlib.h>


int Key_Inputs(XKeyEvent *xkey, const char *key_str);

#endif