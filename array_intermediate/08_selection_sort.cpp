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

    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            std::swap(arr[i], arr[minIndex]);
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}