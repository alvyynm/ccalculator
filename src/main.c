/*******************************************************************************
* Author: Alvin Wanjala --> https://alvinwanjala.com
*
* Program: Basic Terminal Calculator program in C
*
* Description: An example calculator in C including the basics of creating a library by 
* splitting code across files
*
*******************************************************************************/

#include <stdio.h>
#include "calculatorlib.h"

int main() {
    int result, num1, num2;
    enum Operator {ADD = 1, SUBTRACT, DIVIDE, MODULO, MULTIPLY};

    enum Operator Operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter the operator (1 for ADDITION, 2 for SUBTRACTION, 3 for DIVISION, 4 for MODULUS and 5 for MULTIPLICATION): ");

    scanf("%d", (int*)&Operation);

    switch (Operation)
    {
    case ADD:
        result = add(num1, num2);
        break;
    case SUBTRACT:
        result = subtract(num1, num2);
        break;
    case DIVIDE:
        result = divide(num1, num2);
        break;
    case MULTIPLY:
        result = multiply(num1, num2);
        break;
    case MODULO:
        result = mod(num1, num2);
        break;
    default:
    printf("Undefined operation");
        break;
    }

    printf("Ans is %d \n", result);
    return 0;
}