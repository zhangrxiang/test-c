//
// Created by zhangrxiang on 17-8-14.
//

#ifndef CMAKE_DEMO_TEST_H
#define CMAKE_DEMO_TEST_H
#include <stdio.h>
#include <unistd.h>

#define SERVER_STRING "Server: jdbhttpd/0.1.0\r\n"

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

void swap( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void not_found(int client)
{
    char buf[1024];
    printf("not_found.....................\n");
    sprintf(buf, "HTTP/1.0 404 NOT FOUND TEST\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, SERVER_STRING);
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "Content-Type: text/html\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "<HTML><TITLE>Not Found</TITLE>\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "<BODY><P><h1>error</h1>\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "your request because the resource specified\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "is unavailable or nonexistent.\r\n");
    send(client, buf, strlen(buf), 0);
    sprintf(buf, "</BODY></HTML>\r\n");
    send(client, buf, strlen(buf), 0);
}


#endif //CMAKE_DEMO_TEST_H
