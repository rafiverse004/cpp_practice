/*
Question:
Write a C++ program to check whether a number is divisible by both 5 and 11.
*/

#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num % 5 == 0 && num % 11 == 0)
    {
        std::cout << num << " is divisible by 5 and 11." << '\n';
    }
    else
    {
        std::cout << num << " is not divisible by 5 and 11." << '\n';
    }
    return 0;
}