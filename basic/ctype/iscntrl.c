//
// Created by zhangrongxiang on 2017/9/12.
//



/*
 * C 库函数 void iscntrl(int c) 检查所传的字符是否是控制字符。
 * 根据标准 ASCII 字符集，控制字符的 ASCII 编码介于 0x00 (NUL) 和 0x1f (US) 之间，以及 0x7f (DEL)，
 * 某些平台的特定编译器实现还可以在扩展字符集（0x7f 以上）中定义额外的控制字符。
 */

#include <stdio.h>
#include <ctype.h>
#include "main.h"

int iscntrldemo() {
    int i = 0, j = 0;
    char str1[] = "all \a about \t programming";
    char str2[] = "w3cschool \n tutorials";

    /* 输出字符串直到控制字符 \a */
    while (!iscntrl(str1[i])) {
        putchar(str1[i]);
        i++;
    }

    /* 输出字符串直到控制字符 \n */
    while (!iscntrl(str2[j])) {
        putchar(str2[j]);
        j++;
    }

    return (0);
}