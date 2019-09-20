.data
	my_string : .asciiz "abcdefg"
	
.text
	main : 
		
		# a0 will store the length
		li $t0, 0
		
		# t0 will store the address
		la $a0, my_string
		
		# utility function to calc length
		strlen :
				
				lb $t1, ($a0)
				
				# if current character is null,
				# length has been computed
				beq $t1, $zero, print
				
				# else increment pointer and length by one
				addi $a0, $a0, 1
				addi $t0, $t0, 1
				
				# continue
				j strlen
		print :
				move $a0, $t0
				li $v0, 1
				syscall
				
		li $v0, 10
		syscall	
