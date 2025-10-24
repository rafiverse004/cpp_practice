/*
Question:
Write a C++ program to calculate the sum of all numbers from 1 to a given number.
*/

#include <iostream>

int main() 
{
    int n, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
