Bitwise operations practice from K&R Section 2.9
===

In this practice, you will implement three functions that use bitwise
operations.

The sample code in K&R is given - the function getbits. Study how that
function operates by reading the comments supplied in bitops.c

Requirements
---

You must implement the following three functions:

1. setbits(x,p,n,y)
2. invert(x,p,n)
3. rightrot(x,n)


Building, Running, and Testing
---

The command `make` will build a binary called `bitops` that you can
run.

You can test your program by running:

./bitops

You should see four lines of text as follows if your functions are
working correctly:

getbits(255, 4, 3) = 0x3f

setbits(255,4,3,5) = 0xf7

invert(255, 4, 3) = 0xe3

rightrot(5, 4) = 0x50000000


Hints
---

Read K&R Section 2.9.



