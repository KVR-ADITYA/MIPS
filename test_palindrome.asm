data
theStr: .space 6 #declare a space of 6 bytes
isPal: .asciiz "Its is a Palindrome"
notPal: .asciiz "Not a Palindrome"
newLine: .asciiz "\n"


.text
main :
   li $v0,8
