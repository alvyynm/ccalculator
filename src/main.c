#include <stdio.h>
#include <stdlib.h>

/*STORE IN HEADER FILES*/
// FUNCTION PROTOTYPES
int add(int a, int b);
int subtract(int a, int b);
int divide(int a, int b);
int mod(int a, int b);
int multiply(int a, int b);

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

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int divide(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int multiply(int a, int b) {
    return a * b;
}