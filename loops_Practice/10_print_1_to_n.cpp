/*
Question:
Write a C++ program to print all numbers from 1 to a given number.
*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}
