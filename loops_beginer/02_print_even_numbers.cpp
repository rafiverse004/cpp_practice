#include <iostream>

int main()
{
    int n;

    std::cout << "Enter how many number u want to print(n): ";
    std::cin >> n;

    for (int i = 2; i <= n; i+= 2)
    {
        std::cout << i << " ";
    }

    return 0;
}