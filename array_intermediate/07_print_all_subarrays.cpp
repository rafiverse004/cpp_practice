#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // Print all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            std::cout << "Subarray from index " << i << " to " << j << ": [";
            for (int k = i; k <= j; k++)
            {
                std::cout << arr[k];
                if (k < j)
                    std::cout << ", ";
            }
            std::cout << "]" << std::endl;
        }
    }

    return 0;
}
