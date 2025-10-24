/*
Question:
Write a C++ program to compare two numbers and display the greater number or indicate if they are equal.
*/

#include<iostream>

int main()
{
    double num1, num2, max;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        std::cout << num1 << " is greater than " << num2 << '\n';
    }
    else if (num1 < num2)
    {
        std::cout << num2 << " is greater than " << num1 << '\n';
    }
    else
    {
        std::cout << "Both numbers are equal.\n";
    }
    return 0;
}