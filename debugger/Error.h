/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/
 */

#ifndef ERROR_H
#define ERROR_H

void my_ERROR(const char* file, int line, const char* msg);


#define error(msg) my_ERROR(__FILE__, __LINE__, msg)

#endif