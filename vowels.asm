.data
    endl: .ascii "\n"
    hyp: .ascii "-"
    str1: .ascii "stringone"
    str2: .ascii "stringtwo"
    msg: .ascii "The number of vowels in the string is: "
.text
main:
    la $a0,str1
    li $v0,4
    syscall

    la $a0,hyp
    li $v0,4
    syscall
    
    jal vowel_count
    
    la $a0,endl
    li $v0,4
    syscall
    
    la $a0,str2
    li $v0,4
    syscall
    
    jal vowel_count

    li $v0,10
    syscall

    vowel_count:
        

