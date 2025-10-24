/*
Question:
Write a C++ program to check whether a number is even or odd.
*/

#include <iostream>

int main() 
{
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) 
    {
        std::cout << number << " is even." << std::endl;
    } 
    else 
    {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
