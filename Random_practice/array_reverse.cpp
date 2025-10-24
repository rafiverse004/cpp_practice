/*
Question:
Write a C++ program to print the elements of an array in reverse order.
*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter number of element in array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Revered array: ";
    for (int i = n - 1; i >= 0; --i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}