/* SPDX-License-Identifier: MIT */

/*
 * This file is part of Block Engine
 * Copyright (c) 2025 Daniel / Rubber-Ball
 * Author: Daniel / Rubber-Ball
 * GitHub: https://github.com/Rubber-Ball/Block-Engine
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
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


