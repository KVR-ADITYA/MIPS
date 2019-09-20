.data
m1:.word 4
.text
main:

##addu $7,$5,$6
#sh $4,$15,$0
#andi $15,$4,12
la $12,m1
lh $4,15($12)

li $v0,10
syscall