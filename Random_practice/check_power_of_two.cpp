#include <iostream>
#include <bitset>

int main()
{
    unsigned int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    std::cout << "Binary: " << std::bitset<8>(num) << '\n';
    
    if (num == 0)
    {
        std::cout << "0 is not a power of 2.\n";
        return 0;
    }
    if ((num & (num - 1)) == 0)
    {
        std::cout << num << " is a power of 2.\n";
    }
    else
    {
        std::cout << num << " is not a power of 2.\n";
    }
    return 0;
}