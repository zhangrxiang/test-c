//
// Created by 张荣响 on 2017/9/3.
//

#include <stdio.h>
#include <ctype.h>

int isalnumdemo()
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';


    /**
     *
     * C 库函数 void isalnum(int c) 检查所传的字符是否是字母和数字。
     *
     * 如果 c 是一个数字或一个字母，则该函数返回非零值，否则返回 0。
     *
     */

    if (isalnum(var1)) {
        printf("var1 = |%c| 是字母数字\n", var1);
    }
    else {
        printf("var1 = |%c| 不是字母数字\n", var1);
    }
    if (isalnum(var2)) {
        printf("var2 = |%c| 是字母数字\n", var2);
    }
    else {
        printf("var2 = |%c| 不是字母数字\n", var2);
    }
    if (isalnum(var3)) {
        printf("var3 = |%c| 是字母数字\n", var3);
    }
    else {
        printf("var3 = |%c| 不是字母数字\n", var3);
    }
    if (isalnum(var4)) {
        printf("var4 = |%c| 是字母数字\n", var4);
    }
    else {
        printf("var4 = |%c| 不是字母数字\n", var4);
    }

    return (0);
}
