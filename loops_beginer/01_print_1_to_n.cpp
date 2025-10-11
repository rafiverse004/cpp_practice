#include <iostream>

int main()
{
    int n;

    std::cout << "Enter how many number u want to print(n): ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
    }

    return 0;
}