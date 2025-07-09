#!/bin/bash

gcc $(find . -name '*.c' ! -name 'Ark.c') -o Block-Engine -lX11 -lGL -lGLU -lm && ./Block-Engine
