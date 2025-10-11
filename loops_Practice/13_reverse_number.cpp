#include <iostream>

int main()
{
    int num, reversed=0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (isNegative)
    {
        reversed = -reversed;
    }
    std::cout << "Reversed: " << reversed;
    return 0;
}