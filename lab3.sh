cclab@cclab-OptiPlex-3060:~$ gedit &
[1] 3833
cclab@cclab-OptiPlex-3060:~$ cd /bin
cclab@cclab-OptiPlex-3060:/bin$ ls
archdetect          gzip              ps
bash                hciconfig         pwd
btrfs               hostname          rbash
btrfs-calc-size     ip                readlink
btrfsck             journalctl        red
btrfs-convert       kbd_mode          rm
btrfs-debug-tree    keyctl            rmdir
btrfs-find-root     kill              rnano
btrfs-image         kmod              run-parts
btrfs-map-logical   less              sed
btrfs-select-super  lessecho          setfacl
btrfs-show-super    lessfile          setfont
btrfstune           lesskey           setupcon
btrfs-zero-log      lesspipe          sh
bunzip2             ln                sh.distrib
busybox             loadkeys          sleep
bzcat               login             ss
bzcmp               loginctl          static-sh
bzdiff              lowntfs-3g        stty
bzegrep             ls                su
bzexe               lsblk             sync
bzfgrep             lsmod             systemctl
bzgrep              mkdir             systemd
bzip2               mkfs.btrfs        systemd-ask-password
bzip2recover        mknod             systemd-escape
bzless              mktemp            systemd-hwdb
bzmore              more              systemd-inhibit
cat                 mount             systemd-machine-id-setup
chacl               mountpoint        systemd-notify
chgrp               mt                systemd-tmpfiles
chmod               mt-gnu            systemd-tty-ask-password-agent
chown               mv                tailf
chvt                nano              tar
cp                  nc                tempfile
cpio                nc.openbsd        touch
dash                netcat            true
date                netstat           udevadm
dd                  networkctl        ulockmgr_server
df                  nisdomainname     umount
dir                 ntfs-3g           uname
dmesg               ntfs-3g.probe     uncompress
dnsdomainname       ntfs-3g.secaudit  unicode_start
domainname          ntfs-3g.usermap   vdir
dumpkeys            ntfscat           wdctl
echo                ntfscluster       which
ed                  ntfscmp           whiptail
efibootmgr          ntfsfallocate     ypdomainname
egrep               ntfsfix           zcat
false               ntfsinfo          zcmp
fgconsole           ntfsls            zdiff
fgrep               ntfsmove          zegrep
findmnt             ntfstruncate      zfgrep
fsck.btrfs          ntfswipe          zforce
fuser               open              zgrep
fusermount          openvt            zless
getfacl             pidof             zmore
grep                ping              znew
gunzip              ping6
gzexe               plymouth
cclab@cclab-OptiPlex-3060:/bin$ cd ..
[1]+  Done                    gedit  (wd: ~)
(wd now: /)
cclab@cclab-OptiPlex-3060:/$ cd 2017A7PS0256
bash: cd: 2017A7PS0256: No such file or directory
cclab@cclab-OptiPlex-3060:/$ cd home
cclab@cclab-OptiPlex-3060:/home$ cd 2017A7PS0256
bash: cd: 2017A7PS0256: No such file or directory
cclab@cclab-OptiPlex-3060:/home$ LS
The program 'LS' is currently not installed. You can install it by typing:
sudo apt install sl
cclab@cclab-OptiPlex-3060:/home$ ls
cclab
cclab@cclab-OptiPlex-3060:/home$ cd ..
cclab@cclab-OptiPlex-3060:/$ ls
bin    dev   initrd.img      lib32       media  proc  sbin  sys  var
boot   etc   initrd.img.old  lib64       mnt    root  snap  tmp  vmlinuz
cdrom  home  lib             lost+found  opt    run   srv   usr  vmlinuz.old
cclab@cclab-OptiPlex-3060:/$ cd ~
cclab@cclab-OptiPlex-3060:~$ ls
0242          B.class             file2.txt        j.asm        sucs
1578          cclab@172.16.4.167  firstProg.class  lab2.txt     Templates
2017A7PS0256  Desktop             hello.txt        Music        temp.txt
abc.txt       Documents           j1.asm           newfile.txt  Videos
A.class       Downloads           j2.asm           null         yeeet
a.txt         examples.desktop    j2.c             Pictures
BASIC         execute             j3.asm           Public
cclab@cclab-OptiPlex-3060:~$ cd 2017A7PS0256
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ls
hello.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ls -al
total 12
drwxrwxr-x  2 cclab cclab 4096 Aug 21 08:12 .
drwxr-xr-x 26 cclab cclab 4096 Aug 21 08:11 ..
-rw-rw-r--  1 cclab cclab   37 Aug 21 08:12 hello.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ./hello.sh
bash: ./hello.sh: Permission denied
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash hello.sh
Hello World
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ chmod +x hello.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ls -al
total 12
drwxrwxr-x  2 cclab cclab 4096 Aug 21 08:12 .
drwxr-xr-x 26 cclab cclab 4096 Aug 21 08:11 ..
-rwxrwxr-x  1 cclab cclab   37 Aug 21 08:12 hello.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ./hello.sh
Hello World
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ which bash
/bin/bash
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ echo "Hello World!"
Hello World!
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ gedit sum.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
14
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ./sum.sh
bash: ./sum.sh: Permission denied
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ ./sum.sh
bash: ./sum.sh: Permission denied
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
14
5+9
a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: 5+9: command not found
14

a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: a: command not found
sum.sh: line 10: b: command not found
14
+
a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: a: command not found
sum.sh: line 10: b: command not found
sum.sh: line 10: +: command not found
14

a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: =5+9: command not found
14

a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: a+b: command not found
sum.sh: line 10: =: command not found
14

a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
sum.sh: line 10: a+b: command not found
sum.sh: line 10: =: command not found
14 = c

a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash sum.sh
14
c = 14
c = 14
a+b
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ gedit conditionals.sh
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
conditionals.sh: line 12: syntax error: unexpected end of file
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
conditionals.sh: line 7: [: missing `]'
odd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
conditionals.sh: line 7: [: 1: unary operator expected
odd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
conditionals.sh: line 7: [: missing `]'
odd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
odd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ echo $$
3822
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
odd
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
even
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
even
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ bash conditionals.sh
even
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ echo $((2+3))
5
cclab@cclab-OptiPlex-3060:~/2017A7PS0256$ echo $(echo $((2+3)))
5

