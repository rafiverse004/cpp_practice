/*
Question:
Write a C++ program to find the last occurrence of a number in an array and print its index.
*/

#include <iostream>

int main() 
{
    int n, target;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter number to search: ";
    std::cin >> target;

    int index = -1;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == target) index = i;
    }

    if(index != -1) 
    {
        std::cout << "Last occurrence at index: " << index << std::endl;
    }
    else 
    {
        std::cout << "Number not found" << std::endl;
    }
}
