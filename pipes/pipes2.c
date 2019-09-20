#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

    int pfds[2];
    char buf[30];

    pipe(pfds);

    if(!fork()){
        // child writing at one end of pipe other end should be closed.
        close(pfds[0]);
        printf("child : writing to pipe\n");
        write(pfds[1],"test",5);
        printf("Child exiting\n");
        exit(0);

    }

    else{
        // parent reading from other end where child's writing end should be closed.
        close(pfds[1]);
        printf("Parent reading from pipe\n");
        read(pfds[0],buf,5);
        printf("Parent read : \"%s\"\n",buf);
        wait(NULL);
    }
    return 0;
}