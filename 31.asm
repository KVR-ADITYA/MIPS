.data
inum : .word 42


.text
main:
 lw $t0,inum
 mtc1 $t0,$f12
 cvt.s.w $f12,$f12
 li $v0,2
 syscall
 
 li $v0,10
 syscall
