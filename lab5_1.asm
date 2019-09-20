.data
   mystr: .space 6
   num1: .word 0x12345678
   num2: .word 0x1234
   num3:.word 0x1235

.text
  main:
     li $t0,0x1234
     la $t1,num1
     lw $t2,num2

     li $v0,10
     syscall
   
   