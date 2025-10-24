/*
Question:
Write a C++ program to create a simple calculator that performs addition, subtraction, multiplication, and division on two numbers.
*/

#include <iostream>

int main() 
{
    double num1, num2;
    char op;

    std::cout << "Enter two number: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
            {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            }
            else
            {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}
