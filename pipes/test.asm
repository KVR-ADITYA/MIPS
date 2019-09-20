.data
                    
  er: .float 0.34
  ln: .asciiz "\n"
  M1: .word 2
  M2: .word 35


.text
  main:
   li $v0,5
   syscall
   move $t0,$v0

   li $v0,5
   syscall
   move $t1,$v0

   la $a0,M1
   lw $t2,($a0)
   mul $t0,$t2,$t0

   la $a0,M2
   lw $t2,($a0)
   mul $t1,$t2,$t1

   add $t0,$t0,$t1

   move $a0,$t0
   li $v0,1
   syscall



   la $a0,ln
   li $v0,4
   syscall

   mtc1 $t0,$f12
   cvt.s.w $f12,$f12

   li $v0,2
   syscall

   la $a0,ln
   li $v0,4
   syscall

   li.s $f2,0.34
   mul.s $f12,$f2,$f12

   li $v0,2
   syscall

   li $v0,10
   syscall

   

