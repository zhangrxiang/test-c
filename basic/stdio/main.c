//
// Created by zhangrongxiang on 2017/10/27 16:27
// File main
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("---------------hello----------------\n");
#if 0
    FILE *fp;
    fp = fopen("file.txt", "a+");
    if(fp == NULL){
        printf("error \n");
        exit(-1);
    } else{
        printf("success...\n");
    }
    fprintf(fp, "%s", "-------------------------\n");

    fclose(fp);
#endif
#if 0
    FILE *fp;
    char c;
    fp = fopen("file.txt", "w");
    c = fgetc(fp);
    if( ferror(fp) )
    {
        printf("error  1\n");
    }
    clearerr(fp);
    if( ferror(fp) )
    {
        printf("error  2\n");
    }
    fclose(fp);
#endif
    return 0;
}