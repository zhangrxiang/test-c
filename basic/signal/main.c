//
// Created by zhangrxiang on 17-8-17.
//

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define POSIX_SIGNALS 1
void ouch(int sig)
{
    printf("I got signal %d\n", sig);
    // (void) signal(SIGINT, SIG_DFL);
    //(void) signal(SIGINT, ouch);

}

void quit(int sig)
{
    printf("SIGQUIT  --> %d\n", sig);
#ifdef    POSIX_SIGNALS
    printf("POSIX_SIGNALS....\n");
#endif
    exit(1);
}
void malarm(int sig)
{
    printf("timeout ....  \n");
    exit(1);
}

void sig()
{
    (void) signal(SIGINT, ouch);
    (void) signal(SIGQUIT, quit);
    (void) signal(SIGALRM, malarm);
    alarm(30);
    int i = 0;
    while (i < 100) {
        printf("%d -- hello world...\n", i);
        sleep(1);
        i++;
    }
}
int main()
{

//    rl_readline_name = "";
    readline("");
    return 1;
}