#include <iostream>

int main()
{
    int num;
    long long factorial = 1;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Factorial of negative numbers are not defined.";
    }
    else
    {
        for (int i=1; i<=num; i++)
        {
            factorial *= i;
        }
        std::cout << "Factorial of " << num << " = " << factorial << std::endl;
    }
    return 0;
}