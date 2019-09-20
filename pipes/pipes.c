cclab@cclab-OptiPlex-3060:~$ cd 2017A7PS0256H
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ LS
The program 'LS' is currently not installed. You can install it by typing:
sudo apt install sl
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ ls
1.out                              hello.c      lab4_4.asm
31.asm                             hello.out    lab4_4.c
32.asm                             hello.sh     lab4.c
33.asm                             HP_AppA.pdf  lab5_1.asm
34.asm                             j1.asm       MIPSCONTROL.pdf
35.asm                             j2.asm       MIPS_Green_Sheet.pdf
a.out                              j2.c         multiples.asm
bubble_sort.asm                    j3.asm       newfile.txt
cclab@172.16.4.167                 j.asm        palindrome.asm
commandlineargs.sh                 lab2.txt     reverse.asm
conditionals.sh                    lab3.sh      sum.sh
CS_F342_Comp_Arch_LabSheet1n2.pdf  lab4_1.asm   test_palindrome.asm
CS_F342_Comp_Arch_LabSheet3.pdf    lab4_1.c     until-loop.sh
CS_F342_Comp_Arch_LabSheet4.pdf    lab4_2.asm   while-loop.sh
CS_F342_Comp_Arch_LabSheet5.pdf    lab4_2.c     wrapper1.sh
factorial.c                        lab4_2.out   wrapper.sh
factorial.out                      lab4_3.asm
for-loop.sh                        lab4_3.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ mkdir pipes
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H$ cd pipes
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ code .
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes.c
gcc: error: pipes.c: No such file or directory
gcc: fatal error: no input files
compilation terminated.
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls
pipes1.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes1.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./pipes1.out
bash: ./pipes1.out: No such file or directory
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
writing to file descriptor #4
readimg from file descriptor #3
read ""ncclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes1.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
writing to file descriptor #4
reading from file descriptor #3
read ""
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes1.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
writing to file descriptor #4
reading from file descriptor #3
read "test"
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes2.c
pipes2.c: In function ‘main’:
pipes2.c:27:9: warning: implicit declaration of function ‘wait’ [-Wimplicit-function-declaration]
         wait(NULL);
         ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes2.c
pipes2.c: In function ‘main’:
pipes2.c:28:9: warning: implicit declaration of function ‘wait’ [-Wimplicit-function-declaration]
         wait(NULL);
         ^
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Parent reading from pipe
child : writing to pipe
Child exiting
Parent read : "test"
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Parent reading from pipe
child : writing to pipe
Child exiting
Parent read : "test"
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
Parent reading from pipe
child : writing to pipe
Child exiting
Parent read : "test"
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls |more
a.out
pipes1.c
pipes2.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ more

Usage:
 more [options] <file>...

A file perusal filter for CRT viewing.

Options:
 -d          display help instead of ringing bell
 -f          count logical rather than screen lines
 -l          suppress pause after form feed
 -c          do not scroll, display text and clean line ends
 -p          do not scroll, clean screen and display text
 -s          squeeze multiple blank lines into one
 -u          suppress underlining
 -<number>   the number of lines per screenful
 +<number>   display file beginning from line number
 +/<string>  display file beginning from search string match
 -V          display version information and exit

For more details see more(1).
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls /bin | wc -l
175
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls /bin |more
archdetect
bash
btrfs
btrfs-calc-size
btrfsck
btrfs-convert
btrfs-debug-tree
btrfs-find-root
btrfs-image
btrfs-map-logical
btrfs-select-super
btrfs-show-super
btrfstune
btrfs-zero-log
bunzip2
busybox
bzcat
bzcmp
bzdiff
bzegrep
bzexe
bzfgrep
bzgrep
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ man dup2
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ gcc pipes3.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ./a.out
4
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls
a.out  pipes1.c  pipes2.c  pipes3.c
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls >temp.file
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls > temp.file
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls 1> temp.file 2>error.file
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ ls 1> temp.file 2> error.file
cclab@cclab-OptiPlex-3060:~/2017A7PS0256H/pipes$ 
