#include <stdio.h>
#include "calculatorlib.h"

int main() {
    int result;
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    result = add(num1, num2);
    printf("Ans is %d \n", result);
    return 0;
}