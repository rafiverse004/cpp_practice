/*
Question:
Write a C++ program that takes two integer numbers as input from the user
and performs a calculation based on the chosen operator using function.
*/

#include <iostream>

// Function prototypes
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
double divide(int num1, int num2);
int mod(int num1, int num2);

int main() {
    int num1, num2;
    char op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operation (+ - * / %): ";
    std::cin >> op;

    double result;

    switch(op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if(num2 == 0) {
                std::cout << "Error! Division by zero.";
                return 0;
            }
            result = divide(num1, num2);
            break;
        case '%':
            if(num2 == 0) {
                std::cout << "Error! Modulus by zero.";
                return 0;
            }
            result = mod(num1, num2);
            break;
        default:
            std::cout << "Invalid operator!";
            return 0;
    }

    std::cout << "Result = " << result << std::endl;
    return 0;
}

// Function definitions
int add(int num1, int num2) { return num1 + num2; }
int subtract(int num1, int num2) { return num1 - num2; }
int multiply(int num1, int num2) { return num1 * num2; }
double divide(int num1, int num2) { return double(num1) / num2; }
int mod(int num1, int num2) { return num1 % num2; }
