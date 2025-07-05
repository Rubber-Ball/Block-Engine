#ifndef ERROR_H
#define ERROR_H

void my_ERROR(const char* file, int line, const char* msg);


#define error(msg) my_ERROR(__FILE__, __LINE__, msg)

#endif