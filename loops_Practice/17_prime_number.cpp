/*
Question:
Write a C++ program to check whether a given number is prime or not.
*/

#include <iostream>

int main()
{
    int num;
    bool isPrime = true;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            {
                if (num % i == 0)
                {
                    isPrime = false;
                }
            }
        }
        if (isPrime)
        {
            std::cout << "The number is a prime. " << std::endl;
        }
        else
        {
            std::cout << "The number is not a prime." << std::endl;
        }
        
    }
    return 0;
}