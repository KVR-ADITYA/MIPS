


#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(void){
   pid_t p;
   if((p = fork()) < 0){
      perror("fork");
      exit(1);
      }
   else if(p==0){
      printf("child");
      }
   else{
     
     printf("parent");
     sleep(5);
     }
  return 0;
  }
