/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */

#include <X11/Xlib.h>
//#include <X11/keysym.h>
//#include <stdlib.h>
//#include <stdio.h>


int Key_Inputs(XKeyEvent *xkey, const char *key_str) {
    
    KeySym key = XLookupKeysym(xkey, 0);
    if (key == XStringToKeysym(key_str)) {
        //printf("\033[1;34m%s\n\033[0m", key_str);
        return 1;
    }
    return 0;
}

