/*
Question:
Write a C++ program to count the number of even and odd digits in a given integer.
*/

#include <iostream>

int main()
{
    int num, digit;
    int evencount = 0, oddcount = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0)
    {
        num = -num;
    }

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }

        num = num / 10;
    }

    std::cout << "Even digits: " << evencount << std::endl;
    std::cout << "Odd digits: " << oddcount << std::endl;

    return 0;
}
