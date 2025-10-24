/*
Question:
Write a C++ program to find all occurrences of a number in an array and print their indices.
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

    bool found = false;
    std::cout << "Occurrences at indices: ";
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == target) 
        {
            std::cout << i << " ";
            found = true;
        }
    }

    if(!found) 
    {
        std::cout << "Number not found";
    }
    std::cout << std::endl;
}
