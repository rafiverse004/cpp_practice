#include <iostream>

int main()
{
    int num, reversed=0, digit;
    bool isNegative = false;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0 )
    {
        isNegative = true;
        num = -num;
    }
    while (num != 0)
        {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }

    if (isNegative)
    {
        reversed = -reversed;
    }
    std::cout << "Reversed: " << reversed << std::endl;
    return 0;
}