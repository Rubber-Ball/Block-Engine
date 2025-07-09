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


#include <stdio.h>

void my_ERROR(const char* file, int line, const char* msg) {
    printf("\033[1;31mError in <%s> at line <%d>: <%s>\033[0m\n", file, line, msg);
}
