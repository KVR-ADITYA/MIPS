cclab@cclab-OptiPlex-3060:~$ cd 2017A7PS0256H
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_1.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_1.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
Hello World!
Hello World!
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_1.c 1.out
gcc: error: 1.out: No such file or directory
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_1.c -o 1.out
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./1.out
Hello World!
Hello World!
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
lab4_2.c: In function ‘main’:
lab4_2.c:22:12: warning: implicit declaration of function ‘print’ [-Wimplicit-function-declaration]
           {print("This is a parent process\n");
            ^
/tmp/cc9fMdpc.o: In function `main':
lab4_2.c:(.text+0x58): undefined reference to `print'
collect2: error: ld returned 1 exit status
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
This is a parent process
This is a child process
Child process has finished
The parent process is finished
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
This is a parent process
This is a child process
Child process has finished
The parent process is finished
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
lab4_2.c: In function ‘main’:
lab4_2.c:21:10: error: expected ‘;’ before ‘printf’
          printf("Child process has finished\n");
          ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
This is a parent process
This is a child process
Child process has finished
The parent process is finished
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
This is a parent process
The parent process is finished
This is a child process
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ Child process has finished
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_2.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
This is a parent process.The PID of the parent is 7873. The PID of child is 9077. 
The parent process is finished
This is a child process.The PID of the parent is 9077. The PID of child is 9078. 
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ This is a child process.The PID of the parent is 7246. The PID of child is 9078. 
Child process has finished

cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps
  PID TTY          TIME CMD
 7873 pts/36   00:00:00 bash
 9079 pts/36   00:00:00 ps
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps -e | grep 7246
 7246 ?        00:00:00 upstart
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_2.c -o lab4_2.out
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ 
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ strace ./lab4_2.out
execve("./lab4_2.out", ["./lab4_2.out"], [/* 62 vars */]) = 0
brk(NULL)                               = 0x2020000
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=97722, ...}) = 0
mmap(NULL, 97722, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f52b8e4c000
close(3)                                = 0
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0P\t\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=1868984, ...}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f52b8e4b000
mmap(NULL, 3971488, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f52b8875000
mprotect(0x7f52b8a35000, 2097152, PROT_NONE) = 0
mmap(0x7f52b8c35000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1c0000) = 0x7f52b8c35000
mmap(0x7f52b8c3b000, 14752, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f52b8c3b000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f52b8e4a000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f52b8e49000
arch_prctl(ARCH_SET_FS, 0x7f52b8e4a700) = 0
mprotect(0x7f52b8c35000, 16384, PROT_READ) = 0
mprotect(0x600000, 4096, PROT_READ)     = 0
mprotect(0x7f52b8e64000, 4096, PROT_READ) = 0
munmap(0x7f52b8e4c000, 97722)           = 0
clone(child_stack=0, flags=CLONE_CHILD_CLEARTID|CLONE_CHILD_SETTID|SIGCHLD, child_tidptr=0x7f52b8e4a9d0) = 9094
getpid()                                = 9093
getppid()                               = 9091
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 36), ...}) = 0
brk(NULL)                               = 0x2020000
This is a child process.The PID of the parent is 9093. The PID of child is 9094. 
brk(0x2041000)                          = 0x2041000
write(1, "This is a parent process.The PID"..., 83This is a parent process.The PID of the parent is 9091. The PID of child is 9093. 
) = 83
write(1, "The parent process is finished\n", 31The parent process is finished
) = 31
exit_group(0)                           = ?
+++ exited with 0 +++
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ This is a child process.The PID of the parent is 7246. The PID of child is 9094. 
Child process has finished

cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_3.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_3.c
lab4_3.c: In function ‘main’:
lab4_3.c:13:7: warning: implicit declaration of function ‘exit’ [-Wimplicit-function-declaration]
       exit(1);
       ^
lab4_3.c:13:7: warning: incompatible implicit declaration of built-in function ‘exit’
lab4_3.c:13:7: note: include ‘<stdlib.h>’ or provide a declaration of ‘exit’
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_3.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_3.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
childparentcclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps -ef | grep a.out
cclab     9172  7873  0 08:38 pts/36   00:00:00 grep --color=auto a.out
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps -ef | grep "Z"
cclab     9174  7873  0 08:39 pts/36   00:00:00 grep --color=auto Z
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps -ef | grep Z
cclab     9176  7873  0 08:39 pts/36   00:00:00 grep --color=auto Z
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ps -ef | grep DEFUNCT
cclab     9178  7873  0 08:39 pts/36   00:00:00 grep --color=auto DEFUNCT
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4_4.c
^C
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gcc lab4_4.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ./a.out
total 2008
drwxrwxr-x  2 cclab cclab   4096 Sep  4 08:47 .
drwxr-xr-x 28 cclab cclab   4096 Sep  4 08:01 ..
-rwxrwxr-x  1 cclab cclab   8656 Sep  4 08:06 1.out
-rw-rw-r--  1 cclab cclab    124 Aug 23 12:10 31.asm
-rw-rw-r--  1 cclab cclab    124 Aug 23 12:44 32.asm
-rw-rw-r--  1 cclab cclab    139 Aug 30 12:18 33.asm
-rw-rw-r--  1 cclab cclab    138 Aug 23 12:32 34.asm
-rw-rw-r--  1 cclab cclab    301 Aug 23 12:38 35.asm
-rwxrwxr-x  1 cclab cclab   8920 Sep  4 08:47 a.out
-rwxrw-r--  1 cclab cclab     37 Aug 14 08:41 cclab@172.16.4.167
-rw-rw-r--  1 cclab cclab     88 Aug 28 08:18 commandlineargs.sh
-rw-rw-r--  1 cclab cclab    143 Aug 28 08:02 conditionals.sh
-rw-rw-r--  1 cclab cclab 487176 Aug  9 11:10 CS_F342_Comp_Arch_LabSheet1n2.pdf
-rw-rw-r--  1 cclab cclab 408010 Aug 21 11:03 CS_F342_Comp_Arch_LabSheet3.pdf
-rw-rw-r--  1 cclab cclab 207294 Aug 30 10:58 CS_F342_Comp_Arch_LabSheet4.pdf
-rw-rw-r--  1 cclab cclab    228 Aug 28 08:40 factorial.c
-rwxrwxr-x  1 cclab cclab   8656 Aug 28 08:40 factorial.out
-rw-rw-r--  1 cclab cclab     77 Aug 28 08:06 for-loop.sh
-rw-rw-r--  1 cclab cclab    200 Aug 28 08:33 hello.c
-rwxrwxr-x  1 cclab cclab   8704 Aug 28 08:28 hello.out
-rwxrwxr-x  1 cclab cclab     37 Aug 21 08:12 hello.sh
-rw-rw-r--  1 cclab cclab 494193 Aug  9 12:26 HP_AppA.pdf
-rw-rw-r--  1 cclab cclab    188 Aug 21 11:58 j1.asm
-rw-rw-r--  1 cclab cclab    190 Aug 14 12:39 j2.asm
-rw-rw-r--  1 cclab cclab    462 Aug  9 12:47 j2.c
-rw-rw-r--  1 cclab cclab     63 Aug 23 11:06 j3.asm
-rw-rw-r--  1 cclab cclab     78 Aug  9 11:33 j.asm
-rw-rw-r--  1 cclab cclab  44463 Aug 14 08:48 lab2.txt
-rw-rw-r--  1 cclab cclab   7354 Aug 21 08:48 lab3.sh
-rw-rw-r--  1 cclab cclab    243 Aug 28 11:33 lab4_1.asm
-rw-rw-r--  1 cclab cclab    119 Sep  4 08:05 lab4_1.c
-rw-rw-r--  1 cclab cclab    552 Aug 30 11:51 lab4_2.asm
-rw-rw-r--  1 cclab cclab    814 Sep  4 08:23 lab4_2.c
-rwxrwxr-x  1 cclab cclab   8912 Sep  4 08:25 lab4_2.out
-rw-rw-r--  1 cclab cclab    532 Aug 30 12:03 lab4_3.asm
-rw-rw-r--  1 cclab cclab    328 Sep  4 08:37 lab4_3.c
-rw-rw-r--  1 cclab cclab    675 Aug 28 12:43 lab4_4.asm
-rw-rw-r--  1 cclab cclab    394 Sep  4 08:46 lab4_4.c
-rw-rw-r--  1 cclab cclab  11360 Aug 26 11:27 MIPSCONTROL.pdf
-rw-rw-r--  1 cclab cclab 161230 Aug  9 12:25 MIPS_Green_Sheet.pdf
-rw-rw-r--  1 cclab cclab    674 Aug 30 12:19 multiples.asm
-rwxrw-r--  1 cclab cclab     37 Aug 14 08:42 newfile.txt
-rw-rw-r--  1 cclab cclab     97 Aug 21 08:30 sum.sh
-rw-rw-r--  1 cclab cclab     85 Aug 28 08:13 until-loop.sh
-rw-rw-r--  1 cclab cclab     85 Aug 28 08:11 while-loop.sh
-rw-rw-r--  1 cclab cclab     61 Aug 28 08:53 wrapper1.sh
-rw-rw-r--  1 cclab cclab     55 Aug 28 08:26 wrapper.sh
parentcclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ls - la
ls: cannot access '-': No such file or directory
ls: cannot access 'la': No such file or directory
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ls -la
total 2008
drwxrwxr-x  2 cclab cclab   4096 Sep  4 08:47 .
drwxr-xr-x 28 cclab cclab   4096 Sep  4 08:01 ..
-rwxrwxr-x  1 cclab cclab   8656 Sep  4 08:06 1.out
-rw-rw-r--  1 cclab cclab    124 Aug 23 12:10 31.asm
-rw-rw-r--  1 cclab cclab    124 Aug 23 12:44 32.asm
-rw-rw-r--  1 cclab cclab    139 Aug 30 12:18 33.asm
-rw-rw-r--  1 cclab cclab    138 Aug 23 12:32 34.asm
-rw-rw-r--  1 cclab cclab    301 Aug 23 12:38 35.asm
-rwxrwxr-x  1 cclab cclab   8920 Sep  4 08:47 a.out
-rwxrw-r--  1 cclab cclab     37 Aug 14 08:41 cclab@172.16.4.167
-rw-rw-r--  1 cclab cclab     88 Aug 28 08:18 commandlineargs.sh
-rw-rw-r--  1 cclab cclab    143 Aug 28 08:02 conditionals.sh
-rw-rw-r--  1 cclab cclab 487176 Aug  9 11:10 CS_F342_Comp_Arch_LabSheet1n2.pdf
-rw-rw-r--  1 cclab cclab 408010 Aug 21 11:03 CS_F342_Comp_Arch_LabSheet3.pdf
-rw-rw-r--  1 cclab cclab 207294 Aug 30 10:58 CS_F342_Comp_Arch_LabSheet4.pdf
-rw-rw-r--  1 cclab cclab    228 Aug 28 08:40 factorial.c
-rwxrwxr-x  1 cclab cclab   8656 Aug 28 08:40 factorial.out
-rw-rw-r--  1 cclab cclab     77 Aug 28 08:06 for-loop.sh
-rw-rw-r--  1 cclab cclab    200 Aug 28 08:33 hello.c
-rwxrwxr-x  1 cclab cclab   8704 Aug 28 08:28 hello.out
-rwxrwxr-x  1 cclab cclab     37 Aug 21 08:12 hello.sh
-rw-rw-r--  1 cclab cclab 494193 Aug  9 12:26 HP_AppA.pdf
-rw-rw-r--  1 cclab cclab    188 Aug 21 11:58 j1.asm
-rw-rw-r--  1 cclab cclab    190 Aug 14 12:39 j2.asm
-rw-rw-r--  1 cclab cclab    462 Aug  9 12:47 j2.c
-rw-rw-r--  1 cclab cclab     63 Aug 23 11:06 j3.asm
-rw-rw-r--  1 cclab cclab     78 Aug  9 11:33 j.asm
-rw-rw-r--  1 cclab cclab  44463 Aug 14 08:48 lab2.txt
-rw-rw-r--  1 cclab cclab   7354 Aug 21 08:48 lab3.sh
-rw-rw-r--  1 cclab cclab    243 Aug 28 11:33 lab4_1.asm
-rw-rw-r--  1 cclab cclab    119 Sep  4 08:05 lab4_1.c
-rw-rw-r--  1 cclab cclab    552 Aug 30 11:51 lab4_2.asm
-rw-rw-r--  1 cclab cclab    814 Sep  4 08:23 lab4_2.c
-rwxrwxr-x  1 cclab cclab   8912 Sep  4 08:25 lab4_2.out
-rw-rw-r--  1 cclab cclab    532 Aug 30 12:03 lab4_3.asm
-rw-rw-r--  1 cclab cclab    328 Sep  4 08:37 lab4_3.c
-rw-rw-r--  1 cclab cclab    675 Aug 28 12:43 lab4_4.asm
-rw-rw-r--  1 cclab cclab    394 Sep  4 08:46 lab4_4.c
-rw-rw-r--  1 cclab cclab  11360 Aug 26 11:27 MIPSCONTROL.pdf
-rw-rw-r--  1 cclab cclab 161230 Aug  9 12:25 MIPS_Green_Sheet.pdf
-rw-rw-r--  1 cclab cclab    674 Aug 30 12:19 multiples.asm
-rwxrw-r--  1 cclab cclab     37 Aug 14 08:42 newfile.txt
-rw-rw-r--  1 cclab cclab     97 Aug 21 08:30 sum.sh
-rw-rw-r--  1 cclab cclab     85 Aug 28 08:13 until-loop.sh
-rw-rw-r--  1 cclab cclab     85 Aug 28 08:11 while-loop.sh
-rw-rw-r--  1 cclab cclab     61 Aug 28 08:53 wrapper1.sh
-rw-rw-r--  1 cclab cclab     55 Aug 28 08:26 wrapper.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ man exec
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ gedit lab4.c

