#include <iostream>

int main()
{
    int n, sum=0;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i ;
    }
    std::cout << "Sum is : " << sum << std::endl;

    return 0;

}