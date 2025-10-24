/*
Question:
Write a C++ program to check whether a given number is odd or even using the NOT operator.
*/

#include<iostream>

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (!(num % 2 == 0))
    {
        std::cout << num << " is odd.\n";
    }
    else
    {
        std::cout << num << " is even.\n";
    }
    return 0;
}