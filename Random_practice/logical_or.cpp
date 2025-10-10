#include<iostream>

int main()
{
    int num, devision;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 3 == 0 || num % 5 == 0)
    {
        std::cout << "The number is divisible by 3 or 5.";
    }
    else
    {
        std::cout << "The number is not divisible by 3 or 5.";
    }
    return 0;
}