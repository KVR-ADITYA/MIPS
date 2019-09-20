
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
   
   int n=atoi(argv[1]);
   int long long j=1;
   for(int long long i=1;i<=n;i++){
      j = j*i;
      }
   printf("%lld\n",j);
   return 0;
   }
      
