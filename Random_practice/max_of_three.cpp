#include<iostream>

int main()
{
    double num1, num2, num3, max;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >=num3)
    {
        std::cout << num1 << " is largest.\n";
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        std::cout << num2 << " is largest.\n";
    }
    else
    {
        std::cout << num3 << " is the largest.\n";
    }
    return 0;
}