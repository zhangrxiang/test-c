//
// Created by zhangrxiang on 2017/8/11.
//


#include <stdio.h>
#include <unistd.h>
void func(int *pInt);
void swap( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    printf("hello world\n");
    printf("world hello\n");

    int i = 100;
    int *p;
    p = &i;
    func(p);
    printf("%d\n",*p);
//    sleep(1);

    int a = 11;
    int b = 22;
    int *c = &a;
    printf("a is %d, b is %d\n",a,b);
    swap(&a,&b);
    printf("a is %d, b is %d\n",a,b);
    swap(&a,&b);
    swap(c,&b);
    printf("a is %d, b is %d\n",a,b);

}
void func(int *pInt)
{
    int s = 10;
    int *pp = pInt;
    pInt = &s;
    *pp = s;
    printf("func pInt--> %d\n", *pInt);
    printf("func pp--> %d\n", *pp);
    s = *pInt;
}

