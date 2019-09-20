.data
val1:
.float 0.001
.text
main:
	l.s $f12, val1
	li $v0,2
	syscall
	
	li $v0, 7
	syscall
	
	mov.d $f12, $f0
	cvt.s.d $f14,$f12
	mov.s $f12,$f14
	li $v0,2
	syscall
	
li $v0,10
syscall
