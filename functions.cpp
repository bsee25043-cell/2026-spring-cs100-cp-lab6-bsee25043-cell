#include "functions.h"


int sumOfSquares(int nsum) 
{
    if (nsum <= 1) {   // This function finds the sum of squares using recursion method
        return 1;   // If nsum is 1, then the value 1 is returned
    }
    return (nsum * nsum) + sumOfSquares(nsum - 1);   // Square the current nsum and add it to the result of the next smaller number
}

int findFactorial(int nfact)
{
    // This function finds the factorial of a number nfact using recursion
    if (nfact <= 1) {   //If the number is 1 or less than 1, 1 is returned
        return 1;
    }
    return nfact * findFactorial(nfact - 1);
    // Multiply the current nfact with the result of the next smaller number
}




