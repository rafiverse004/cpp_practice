#include <iostream>

int main()
{
    int num, original, reversed=0, digit;

    std::cout << "Enter a number: ";
    std::cin >> num;

    original = num;

    while (num != 0)
        {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }
    
    if(reversed == original)
    {
        std::cout << "The number is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The number is not a palindrome." << std::endl;
    }
    return 0;
}