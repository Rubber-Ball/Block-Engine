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



// Checks if (mx,my) is inside the button rect
int is_mouse_inside_button(int mx, int my, int btn_x, int btn_y, int btn_w, int btn_h) {
    return mx >= btn_x && mx <= btn_x + btn_w &&
           my >= btn_y && my <= btn_y + btn_h;
}


