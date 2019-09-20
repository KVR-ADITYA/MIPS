.data
    ast: .ascii "* "
    endl: .ascii "\n"
    prompt: .ascii "Enter a number: "
.text
main:
    la $a0,prompt
    li $v0,4
    syscall

    li $v0,5
    syscall

    move $t0,$a0
    move $t2,$a0
    move $t3,$a0
    jal print_pattern

    li $v0,10
    syscall

    print_pattern:
    sw $ra,($sp)
        outer:
            beq $t0,0,ret
            move $t2,$t3
            inner:
                beq $t2,0,out
                la $a0,ast
                li $v0,4
                syscall
                jal inner
            out:
                la $a0,endl
                li $v0,4
                syscall

                addi $t0,$t0,-1
            jal outer
        ret:
        jr $ra