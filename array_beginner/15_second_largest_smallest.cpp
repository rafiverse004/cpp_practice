/*
Question:
Write a C++ program to find the second largest element in an array.
*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int i;
    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    std::cout << "Second largest: " << secondLargest << std::endl;

    return 0;
}
