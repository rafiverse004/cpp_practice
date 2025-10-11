#include <iostream>

int main()
{
    int i, j, n, multiplication;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (i=1; i<=10; i++)
    {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }
    return 0;
}