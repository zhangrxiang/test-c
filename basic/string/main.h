//
// Created by lenovo on 2017/8/11.
//

#ifndef CMAKE_DEMO_MAIN_H
#define CMAKE_DEMO_MAIN_H

#include <string.h>
#include <stdio.h>
char mymemcmp(char *str,char *str2)
{
    int mMemcmp = memcmp(str, str2, strlen(str));
    char result;
    if (mMemcmp < 0){
        result = '<';
    }
    else if(mMemcmp>0){
        result = '>';
    }
    else{
        result = '=';
    }
    return result;
}
#endif //CMAKE_DEMO_MAIN_H
