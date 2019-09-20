# program to check whether input is odd or even

.data

odd_string : .asciiz "Number is odd"
even_string: .asciiz "Number is even"

.text
main :
	
	# input a number from console
	li $v0, 5
	syscall
	move $a0, $v0
	
	# check whether the number is odd
	
	# and the number in second op with
	# immediate third op and store in first op
	andi $a0, $a0, 1
	bne $a0, $zero, odd_label
	
	la $a0, even_string
	li $v0, 4
	syscall
	j exit_label
	
	odd_label :
	
		la $a0, odd_string
		li $v0, 4
		syscall
		j exit_label
	
	exit_label :
	
		li $v0, 10
		syscall
	
