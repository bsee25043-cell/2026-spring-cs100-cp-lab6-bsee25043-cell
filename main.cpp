#include "functions.h"


int main() {
    int num1;        //int 
    int sumResult;  //int
    cout << "Enter a number: ";
    cin >> num1;    ////num1=nsum
    sumResult = sumOfSquares(num1);  //function calling for sum of squares
    cout << "Sum of squares: " << sumResult << endl;

    int num2;   //int 
    int factResult; //int 
    cout << "Enter a number: ";
    cin >> num2;    //num2=nfact
    factResult = findFactorial(num2);    //function calling
    cout << "Factorial of the number is " << factResult << endl;
    return 0;
   
}