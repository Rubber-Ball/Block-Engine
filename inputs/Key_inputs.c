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


//#include <X11/X.h>  // For ControlMask, ShiftMask, etc.
#include <X11/Xlib.h>
#include <X11/keysym.h>



int Key_Inputs(XKeyEvent *xkey, const char *key_str) {
    KeySym key = XLookupKeysym(xkey, (xkey->state & ShiftMask) ? 1 : 0);
    if (key == XStringToKeysym(key_str)) {
        return 1;
    }
    return 0;
}



