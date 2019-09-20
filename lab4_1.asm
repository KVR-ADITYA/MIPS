.data
	my_string: .asciiz 	"Hello" 
	
	
.text
main:
	
	# to print my_string to the console
	la $a0, my_string
	li $v0, 4
	syscall
	
	# to input from console
	li $v0, 5
	syscall
	move $a0, $v0
	
	# to terminate the program
	li $v0, 10
	syscall
