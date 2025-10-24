/*
Question:
Write a C++ program to perform binary search for a given element in a sorted array.
*/

#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int target;
    std::cout << "Enter element to search: ";
    std::cin >> target;

    int left = 0;
    int right = n - 1;
    int index = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
        {
            index = mid;
            break;
        }
        else if (arr[mid] < target) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    if (index != -1)
    {
        std::cout << "Element found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}