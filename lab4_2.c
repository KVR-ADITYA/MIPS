


#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void){
   
   pid_t p;
   int status;
   
   p = fork();
   if(p<0)
       perror("fork");
   else
       if(p==0){
         printf("This is a child process.The PID of the parent is %d. The PID of child is %d. \n",getppid(),getpid());
         sleep(5);
         printf("This is a child process.The PID of the parent is %d. The PID of child is %d. \n",getppid(),getpid());
         printf("Child process has finished\n");
         }
       else
          {
          printf("This is a parent process.The PID of the parent is %d. The PID of child is %d. \n",getppid(),getpid());
         // wait(&status);
          printf("The parent process is finished\n");
          }
  //printf("Hello World!\n");
   return 0;
   }
