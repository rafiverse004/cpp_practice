#include <iostream>

int main()
{
    char ch;

    std::cout << "Enter an alphabet: ";
    std::cin >> ch;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        std::cout << ch << " is a vowel." << std::endl;
    }
    else if ((ch >= 'a' || ch >= 'A') && (ch <= 'z' && ch >= 'Z'))
    {
        std::cout << ch << " is a consonant." << std::endl;
    }
    else
    {
        std::cout << "Invalid input. Please inter a letter." << std::endl;
    }
    return 0;
}