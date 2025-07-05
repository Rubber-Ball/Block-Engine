#include <stdio.h>
#include <sys/utsname.h>
#include <string.h>


/// @brief 
/// @file detect-os.c
void detect_os() {

        struct utsname buffer;
    if (uname(&buffer) == 0){
        if (strcmp(buffer.sysname,"Linux") == 0){
            printf("\033[1;36mOS:<------🐧Linux!🐧----->\033[0m\n");
        }
        else if (strcmp(buffer.sysname,"Darwin") == 0){
            printf("\033[1;36mOS:<------🍎MacOS🍎👎----->\033[0m\n");
        }
        else{
            printf("\033[1;31mUnknown OS\033[0m");
        }
    }
}


