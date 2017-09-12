//
// Created by 张荣响 on 2017/9/12.
//

/**
 * C 库函数 void isdigit(int c) 检查所传的字符是否是十进制数字字符。
 * 十进制数字是：0 1 2 3 4 5 6 7 8 9
 */

#include <stdio.h>
#include <ctype.h>
#include "main.h"

int isdigitdemo()
{
    int var1 = 'h';
    int var2 = '2';

    if (isdigit(var1)) {
        printf("var1 = |%c| 是一个数字\n", var1);
    }
    else {
        printf("var1 = |%c| 不是一个数字\n", var1);
    }
    if (isdigit(var2)) {
        printf("var2 = |%c| 是一个数字\n", var2);
    }
    else {
        printf("var2 = |%c| 不是一个数字\n", var2);
    }

    return (0);
}