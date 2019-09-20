.data
  num: .float 42.123456789
  
.text
main:

 l.s $f12,num
 cvt.s.d $f12,$f12
 li $v0,2
 syscall

 li $v0,10
 syscall  
