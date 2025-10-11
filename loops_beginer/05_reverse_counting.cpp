#include <iostream>

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = n; i >= 1; i--)
    {
        std::cout << i << " ";
    }
    return 0;
}