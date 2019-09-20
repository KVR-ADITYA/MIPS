.data

newline : .asciiz " "

.text
main :
	
	# input a number
	li $v0, 5
	syscall
	
	# store the number in two temporary registers
	# $t1 will store the current multiple
	move $t1, $v0
	move $t0, $v0
	
	# $a1 will store the upper bound for multiples
	li $a1, 100 
	
	
	multiples :
			
			# if $t1 is > $a1, exit
			bge $t1, $a1, exit
			
			# else $t1 is a valid multiple
			li $v0, 1
			# print the multiple
			move $a0, $t1
			syscall
			
			# print a newline character
			la $a0, newline
			li $v0, 4
			syscall
			
			# add the number input to $t1 to get the
			# next multiple
			add $t1, $t1, $t0
			
			# continue
			j multiples
	
	exit :
		
		li $v0, 10
		syscall 
