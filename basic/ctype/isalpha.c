//
// Created by 张荣响 on 2017/9/3.
//


#include <ctype.h>
#include <stdio.h>

/**
 *
 * C 库函数 void isalpha(int c) 检查所传的字符是否是字母。
 *
 * 如果 c 是一个字母，则该函数返回非零值，否则返回 0。
 *
 * @return
 */

int isalphademo()
{

    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

    if( isalpha(var1) )
    {
        printf("var1 = |%c| 是一个字母\n", var1 );
    }
    else
    {
        printf("var1 = |%c| 不是一个字母\n", var1 );
    }
    if( isalpha(var2) )
    {
        printf("var2 = |%c| 是一个字母\n", var2 );
    }
    else
    {
        printf("var2 = |%c| 不是一个字母\n", var2 );
    }
    if( isalpha(var3) )
    {
        printf("var3 = |%c| 是一个字母\n", var3 );
    }
    else
    {
        printf("var3 = |%c| 不是一个字母\n", var3 );
    }
    if( isalpha(var4) )
    {
        printf("var4 = |%c| 是一个字母\n", var4 );
    }
    else
    {
        printf("var4 = |%c| 不是一个字母\n", var4 );
    }

    return(0);

}