


#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(void){
   pid_t p;
   int s;
   if((p = fork()) < 0){
      perror("fork");
      exit(1);
      }
   else if(p==0){
      //printf("child");
      execlp("ls" ,"ls","-la",NULL);
      }
   else{
     
     printf("parent");
     //sleep(5);
     wait(&s);
     }
  return 0;
  }
