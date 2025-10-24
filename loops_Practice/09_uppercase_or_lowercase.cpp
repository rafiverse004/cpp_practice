/*
Question:
Write a C++ program to check whether a given character is uppercase, lowercase, or not a letter.
*/

#include <iostream>

int main()
{
    char ch;

    std::cout << "Enter a letter: ";
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << ch << " is uppercase.\n";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        std::cout << ch << " is lowercase.\n";
    }
    else
    {
        std::cout << ch << " is not a letter.\n";
    }
    return 0;
}