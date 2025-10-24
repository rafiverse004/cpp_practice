/*
Question:
Write a C++ program to sort an array in ascending order using insertion sort.
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

    // Insertion sort logic
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Print sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
