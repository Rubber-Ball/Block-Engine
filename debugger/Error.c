#include <stdio.h>

void my_ERROR(const char* file, int line, const char* msg) {
    printf("\033[1;31mError in <%s> at line <%d>: <%s>\033[0m\n", file, line, msg);
}
