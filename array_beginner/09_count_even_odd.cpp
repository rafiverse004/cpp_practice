/*
Question:
Write a C++ program to count the number of even and odd elements in an array.
*/

#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }

    std::cout << "Even: " << even << ", Odd: " << odd << std::endl;
}
