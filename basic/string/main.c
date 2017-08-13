//
// Created by zhangrxiang on 2017/8/11.
//

#include <string.h>
#include <stdio.h>
#include "main.h"

void one()
{
    /**
        * memchr()
        *
        * C 库函数 void *memchr(const void *str, int c, size_t n)
        * 在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置。
        * str -- 指向要执行搜索的内存块。
        * c -- 以 int 形式传递的值，但是函数在每次字节搜索时是使用该值的无符号字符形式。
        * n -- 要被分析的字节数。
        */

    char *string = "abcdefg";
    size_t length = strlen(string);
    printf("strlen --> %d\n", (int) length);
    char *m = memchr(string, 'b', strlen(string));
    printf("memchr -->  %s\n", m);

    for (int i = 0; i < strlen(string); ++i) {
        char *c = (string + sizeof(char) * i);
        printf("%c  after is ------> %s\n", *c, (char *) memchr(string, *c, (size_t) strlen(string)));
    }

    printf("size_t is %d size\n", (int) sizeof(size_t));

    /**
     * C 库函数 int memcmp(const void *str1, const void *str2, size_t n))
     * 把存储区 str1 和存储区 str2 的前 n 个字节进行比较。
     * int memcmp(const void *str1, const void *str2, size_t n)
     * 如果返回值 < 0，则表示 str1 小于 str2。
     * 如果返回值 > 0，则表示 str2 小于 str1。
     * 如果返回值 = 0，则表示 str1 等于 str2。
     */
    char *string2 = "abcdefg";
    char *string3 = "Abcdefg";
    char *string4 = "accdefg";
    printf("string %c string2\n", mymemcmp(string, string2));
    printf("string %c string3\n", mymemcmp(string, string3));
    printf("string %c string4\n", mymemcmp(string, string4));
//    system("pause");


    /**
     * C 库函数 void *memcpy(void *str1, const void *str2, size_t n)
     * 从存储区 str2 复制 n 个字符到存储区 str1。
     * void *memcpy(void *str1, const void *str2, size_t n)
     * 该函数返回一个指向目标存储区 str1 的指针。
     */
    char *cpy;
    char *cpy2 = memcpy(cpy, string, strlen(string) + 1);
    printf("%s\n", cpy2);
    printf("%s\n", cpy);


    /**
     * C 库函数 void *memmove(void *str1, const void *str2, size_t n)
     * 从 str2 复制 n 个字符到 str1，但是在重叠内存块这方面，memmove() 是比 memcpy() 更安全的方法。
     * 如果目标区域和源区域有重叠的话，memmove() 能够保证源串在被覆盖之前将重叠区域的字节拷贝到目标区域中，
     * 复制后源区域的内容会被更改。如果目标区域与源区域没有重叠，则和 memcpy() 函数功能相同。
     * void *memmove(void *str1, const void *str2, size_t n)
     * 该函数返回一个指向目标存储区 str1 的指针。
     */
    char dest[20] = "123";
    char *src = "asdfghj";
    printf("Before memmove dest = %s, src = %s\n", dest, src);
    char *p = memmove(dest, src, strlen(src));
    printf("After memmove dest = %s, src = %s\n", dest, src);
    printf("After memmove dest = %s, src = %s\n", p, src);

    for (int j = 0; j < strlen(p); ++j) {
        printf("%c\n", p[j]);
    }

//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    printf("%c\n",*p++);
//    if(*p == '\0'){
//        printf("fuck");
//    }
//    char *p2 = "1234567";
//    if(*p2 == '\0'){
//        printf("wocao");
//    }
//    while (*p2 == '\0'){
//        printf("%c\n",*p2++);
//    }
}
void two()
{
    printf("two------------------------------------------\n");

    /**
     * C 库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
     *
     * void *memset(void *str, int c, size_t n)
     *
     * 该值返回一个指向存储区 str 的指针。
     */

    char str[50];
    strcpy(str,"This is string.h library function");
    puts(str);

    memset(str,'$',7);
    puts(str);
    printf("%s\n",str);

    const char *str2 ="hello world";
    puts(str2);
    memset(str,'!',2);
    puts(str2);


    /**
     * C 库函数 char *strcat(char *dest, const char *src) 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。
     * char *strcat(char *dest, const char *src)
     * 该函数返回一个指向最终的目标字符串 dest 的指针。
     */

    char src[50], dest[50];

    strcpy(src,  "This is source");
    printf("length: %d\n", (int) strlen(src));
    strcpy(dest, "This is destination");
    printf("length: %d\n", (int) strlen(dest));
    strcat(dest, src);

    printf("最终的目标字符串： |%s|\n", dest);
    printf("length: %d\n", (int) strlen(dest));


}
int main(void)
{
//    one();
    printf("string......................................\n");
    two();

}
