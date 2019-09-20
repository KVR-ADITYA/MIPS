#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

    pid_t pid;
    int pfds[2];
    int s;
    pipe(pfds);

    pid = fork();
    if(pid==0){

        dup2(pfds[1],1);
        close(pfds[0]);
        close(pfds[1]);
        if (execlp("ls","ls",NULL) == -1){
            perror("execlp ls");
        }

    }

    else{
        if(fork() == 0){
            dup2(pfds[0],0);
            close(pfds[0]);
            close(pfds[1]);

            if(execlp("wc", "wc", "-l", NULL) == -1){
                perror("execlp wc");

            }
        }
        else{
            close(pfds[0]);
            close(pfds[1]);
            wait(&s);
            wait(&s);

        }
    }
    return 0;
}