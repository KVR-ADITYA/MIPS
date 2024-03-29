
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<signal.h>

void sigint_handler(int sig){
    write(1,"changed SIGINT!\n",15);

}

int main(void){
    char s[200];
    struct sigaction sa;

    sa.sa_handler = sigint_handler;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);

    if(sigaction(SIGINT,&sa,NULL)== -1){

        perror("sigaction");
        exit(1);
    }

    printf("Enter a string :\n");

    if(fgets(s,sizeof(s),stdin)==NULL){
        perror("fgets error");
    }
    else
       printf("You entered : %s\n",s);

    return 0;   
}
