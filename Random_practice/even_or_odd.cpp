#include<iostream>

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "The number is even.";
    }
    else
    {
        std::cout << "The number is odd.";
    }
    return 0;
}