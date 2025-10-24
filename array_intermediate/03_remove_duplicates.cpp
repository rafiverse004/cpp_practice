/*
Question:
Write a C++ program to remove duplicate elements from a sorted array.
*/

#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements (sorted): ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int uniqueIndex = 0;

    for (int i=1; i<n; i++)
    {
        if(arr[i]!=arr[uniqueIndex])
        {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    std::cout << "Unique array: ";
    for (int i=0; i<uniqueIndex; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}