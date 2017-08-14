//
// Created by zhangrxiang on 2017/8/11.
//


#include <stdio.h>
#include <unistd.h>
//#include <pngconf.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

void one()
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

void server()
{
    printf("-------------------begin--------------------\n");

    u_short port = 11111;
    struct sockaddr_in client,server;
    int client_len = sizeof(client);
    int httpd = socket(PF_INET, SOCK_STREAM, 0);
    int server_sock = 0;

    if(httpd == -1) {
        perror("socket error.....");
        exit(1);
    }

    memset(&server,0,sizeof(server));
    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    server.sin_addr.s_addr = htonl(INADDR_ANY);

    if(bind(httpd,(struct sockaddr *) &server,sizeof(server)) < 0){
        perror("bind error......");
        exit(1);
    }

    if (listen(httpd,5) < 0){
        perror("listen error.....");
        exit(1);
    }
    server_sock = httpd;
    printf("httpd running on port %d\n", port);

    while (1) {
        //阻塞等待客户端的连接，参读《TLPI》P1157
        int client_sock = accept(server_sock,
                             (struct sockaddr *) &client,
                             &client_len);
        printf("%d\n",client_sock);
        printf("------------>>>>>>>>>>>>>>\n");
        if (client_sock == -1) {
            printf("------------>>>>>>>>>>>>>><<<<<<<<<<<<<<\n");
            perror("accept error .....\n");
            break;
        }
        not_found(server_sock);
        /*if (pthread_create(&newthread , NULL, accept_request, client_sock) != 0)
          perror("pthread_create");*/
    }


//    while (1){
//        accept(httpd,(struct sockaddr *) &client,&client_len);
//        printf("Hello world\n");
//
//        if (server_sock == -1) {
//            perror("accept error .....");
//            break;
//        }
//        not_found(server_sock);
//    }
    close(server_sock);

}

int main()
{
    server();
    return 0;
}

