#include <iostream>

int main()
{
    int num, sum=0, digit;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num == 0)
    {
        std::cout << "The sum of all digits in the number " << num << " is : " << sum << std::endl;
    }
    else
    {
        while (num != 0)
        {
            digit = num % 10;
            sum += digit;
            num = num /10;
        }
        std::cout << "The sum of all digits in the number is : " << sum << std::endl;
    }
    return 0;
}