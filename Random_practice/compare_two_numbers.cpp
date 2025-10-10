#include <iostream>

int main() 
{
    double num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        std::cout << num1 << " is greater than " << num2 << '\n';
    }
    else if (num1 < num2)
    {
        std::cout << num1 << " is smaller than " << num2 << '\n';
    }
    else
    {
        std::cout << num1 << " is equal to " << num2 << '\n';
    }
    return 0;
}