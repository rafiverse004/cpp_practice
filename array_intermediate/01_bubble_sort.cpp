/*
Question:
Write a C++ program to sort an array in ascending order using bubble sort.
*/

#include <iostream>

int main()
{
    //this part takes the array size.
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    //this part takes array elements.
    int arr[n];
    std::cout << "Enter " << n << " number of array elements.";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    
    //this part swap elements.
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
            }
        }
    }

    //this part print the sorted array.
    std::cout << "Sorted array: ";
    for (int i=0; i<n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}