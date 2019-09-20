.data
num1: .word 1, 2, 3, 4, 5
msg: .asciiz "\n"
myspace: .space 10
.text
main:
     la $a0,myspace
li $a1,15
li $v0,8
syscall
li $v0,4
syscall
      li $v0,10
      syscall
      
      

