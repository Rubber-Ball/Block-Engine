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
#include <sys/utsname.h>
#include <string.h>


/**
 * @brief Detects and prints the current operating system.
 *
 * Prints a colored message indicating Linux, MacOS, or unknown OS.
 */
void detect_os() {
#include <stdio.h>

#if defined(_WIN32)
    printf("\033[1;36mDetected OS: 🪟 Windows\033[0m\n");
#elif defined(__APPLE__) && defined(__MACH__)
    printf("\033[1;36mDetected OS: 🍎 macOS\033[0m\n");
#elif defined(__linux__)
    printf("\033[1;36mDetected OS: 🐧 Linux\033[0m\n");
#else
    printf("\033[1;31mDetected OS: ❓ Unknown\033[0m\n");
#endif
}


