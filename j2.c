.data
mymsg: .asciiz "enter first number"
mymsg1: .asciiz "enter second number"

.text
main:
      la $a0,mymsg
      li $v0,4
      syscall
      
      li $v0,5
      syscall

      move $t0,$v0
      syscall
      
      la $a0,mymsg1
      li $v0,4
      syscall
       
      li $v0,5
      syscall

      move $t1,$v0
      syscall

      add $t2,$t1,$t0
      syscall
      
      move $a0,$t2
      li $v0,1

      li $v0,10
      syscall
      
      

