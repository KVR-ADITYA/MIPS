
cclab@cclab-OptiPlex-3060:~$ coe
No command 'coe' found, did you mean:
 Command 'cde' from package 'cde' (universe)
 Command 'toe' from package 'ncurses-bin' (main)
 Command 'co' from package 'rcs' (universe)
 Command 'cme' from package 'cme' (universe)
 Command 'joe' from package 'joe-jupp' (universe)
 Command 'joe' from package 'joe' (universe)
 Command 'cobe' from package 'python-cobe' (universe)
 Command 'cow' from package 'fl-cow' (universe)
 Command 'col' from package 'bsdmainutils' (main)
coe: command not found
cclab@cclab-OptiPlex-3060:~$ code
cclab@cclab-OptiPlex-3060:~$ man sigaction
cclab@cclab-OptiPlex-3060:~$ cd 2017A7PS0256H
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ CD PIPES
CD: command not found
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ cd pipes
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc signals.c
signals.c:13:1: error: unknown type name ‘imt’
 imt main(void){
 ^
signals.c: In function ‘main’:
signals.c:33:8: warning: implicit declaration of function ‘print’ [-Wimplicit-function-declaration]
        print("You entered : %s\n",s);
        ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc signals.c
signals.c:13:1: error: unknown type name ‘imt’
 imt main(void){
 ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc signals.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Enter a string :
^Cchanged SIGINT!fgets error: Interrupted system call
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Enter a string :
jagadeesh 
You entered : jagadeesh

cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Enter a string :

You entered : 

cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ MAN FTOK
MAN: command not found
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ man ftok
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ man msgget
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ man msgsnd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qs.c
msg_qs.c:5:18: fatal error: sting.h: No such file or directory
compilation terminated.
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qs.c
msg_qs.c: In function ‘main’:
msg_qs.c:36:52: error: expected expression before ‘=’ token
     while(fgets(buf.mtext,sizeof buf.mtext,stdin)!==NULL){
                                                    ^
msg_qs.c:39:22: error: ‘len’ undeclared (first use in this function)
         if(buf.mtext[len-1] == '\n')
                      ^
msg_qs.c:39:22: note: each undeclared identifier is reported only once for each function it appears in
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qs.c
msg_qs.c: In function ‘main’:
msg_qs.c:36:52: error: expected expression before ‘=’ token
     while(fgets(buf.mtext,sizeof buf.mtext,stdin)!==NULL){
                                                    ^
msg_qs.c:39:22: error: ‘len’ undeclared (first use in this function)
         if(buf.mtext[len -1] == '\n')
                      ^
msg_qs.c:39:22: note: each undeclared identifier is reported only once for each function it appears in
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qs.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Enter lines of text, ^D to quit :
hyderabad
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qsreader.c
msg_qsreader.c:5:18: fatal error: sting.h: No such file or directory
compilation terminated.
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qsreader.c
msg_qsreader.c: In function ‘main’:
msg_qsreader.c:41:5: error: expected ‘;’ before ‘}’ token
     }
     ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc msg_qsreader.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Reader is ready to receive messages:
Reader : hyderabad

