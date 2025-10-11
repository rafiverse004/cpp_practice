#include <iostream>

int main()
{
    int num, count = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0)
    {
        while (num > 0)
        {
            int digit = num % 10;
            count++;
            num = num / 10;
        }
    }
    else if (num == 0)
    {
        count = 1;
    }
    else
    {
        std::cout << "Error.";
    }

    std::cout << "Number of digits: " << count << std::endl;

    return 0;
}