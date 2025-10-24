/*
Question:
Write a C++ program to swap the values of two numbers without using a third variable.
*/

#include <iostream>

int main() 
{
    double num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << '\n';

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << '\n';

    return 0;
}
