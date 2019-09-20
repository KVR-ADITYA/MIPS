.data 
   newline : .asciiz "\n"
.text

main:
   li $v0,5
   syscall
   move $t1,$v0
   
   li $v0,5
   syscall
   move $t2,$v0
   
   mul $a0,$t1,$t2
   
   li $v0,1
   syscall
   
   la $a0,newline
   li $v0,4
   syscall
   
   div $a0,$t1,$t2
   
   li $v0,1
   syscall
   
   li $v0,10
   syscall
