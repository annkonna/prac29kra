#include <stdio.h>
#include <stdlib.h>

#include <string.h>


/* 
 * The function returns n bits of x that start at position p.
 *
 * The expression 'x >> (p+1-n)' moves the desired bits to the right
 * end. The expression '~0' is all 1's and so the expression '(~0 << n)' 
 * places zeros in the right-most n bits. The expression '~(~0 << n)' 
 * makes the right-most n bits 1s and the other bits 0s. A pattern
 * with a sequence of  bits as 1 and the other bits as 0 is called a Mask. 
 * The complete expression '(x >> (p+1-n) & ~(~0 << n))' therefore shifts
 * the desired bits to be at the right and then applies a Mask using the 
 * bit-wise and operator to extract just those bits by setting all other
 * bits to zero and keeping the desired bits as is.
 * 
 */
unsigned getbits(unsigned x, int p, int n) {

    // shift the bits that needs to be extracted to the right end
    x = x >> (p+1-n);

    // make a mask for the right-most n bits
    unsigned mask = ~(~0 << n);

    // use the mask to extract the right-most n bits.
    x = x & mask;
    
    return x;
}

/*
 * The function returns the value of x with the n bits that begin at the
 * position p set to the rightmost n bits of y, leaving the other 
 * bits unchanged. 
 */
unsigned setbits(unsigned x, int p, int n, int y) {
    
    // extract the rightmost n bits of y

    // left-shift y so that the right-most n bits of y
    // aligns with the bits in x that needs to be replaced.

    // make a mask with the positions in x to be replaced.

    // set the bits to be replaced in x to 0 using the mask

    // set the bits to be replaced in x using y

    return x;
}

/*
 * The function returns the value of x with the n bits that begin at 
 * the position p inverted (ie, 1 changed into 0 and vice-versa), 
 * leaving the other bits unchanged.
 */
unsigned invert(unsigned x, int p, int n) {
    
    // make a mask with the positions in x to be inverted 

    // flip the bits in x using the mask.
    
    return x;    
}

/* 
 * The function should return the value of the integer x rotated to
 * the right by n bit positions.
 */
unsigned rightrot(unsigned x, int n) {

    // make a mask for the Most Significant Bit (MSB)

    // repeat the following n times.
    
    // extract Least Significant Bit (LSB)

    // shift x right by 1

    // set MSB in x to 1 if the extracted LSB bit was 1.
    // - use the mask created above to do this.

    return x;
}


/* 
 * Run the program with the command line below:
 *
 *   ./bitops
 * 
 * The first two lines of code in main is an example showing how the
 * given getbits function works. This function is called in main as
 * getbits(a,4,3) where 'a' is 0xFF. The fprintf prints the value
 * returned by getbits as 7. ie, the function extracted the 3 bits
 * at positions 4, 3, and 2 and returned an unsigned int with those 
 * three bits positioned at 0, 1, and 2. 
 *
 */

int main(int argc, char *argv[]) {

    unsigned a = 0xFF;
    fprintf(stderr, "\ngetbits(%d, 4, 3) = 0x%x\n", a, getbits(a,4,3));

    unsigned b = 0x5;
    fprintf(stderr, "\nsetbits(%d,4,3,%d) = 0x%x\n", a, b, setbits(a,4,3,b));
    fprintf(stderr, "\ninvert(%d, 4, 3) = 0x%x\n", a, invert(a,4,3));
    fprintf(stderr, "\nrightrot(%d, 4) = 0x%x\n", b, rightrot(b,4));    

    return 0;
}
