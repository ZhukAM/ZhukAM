#include "function.h"
#include <cinttypes>
#include <cstdlib>
#include <cstddef>
#include <cstdio>
#include <memory>
#include <iostream>

void strcat_(char *to, const char *from){
    while (*to)
        to++;
    while ((*to++ = *from++));
    *to = '\0';
}

void smtp(){
    int64_t* array = (int64_t*) malloc(1024);
    printf("%" PRIi64, *array);
    if (array) {
        printf("%" PRIi64, array[0]);
    }
}


