#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the array elements: ";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0; // reset sum for each starting index
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            // Print subarray and its sum
            std::cout << "Subarray from index " << i << " to " << j << ": [";
            for (int k = i; k <= j; k++)
            {
                std::cout << arr[k];
                if (k < j)
                    std::cout << ", ";
            }
            std::cout << "] sum = " << sum << std::endl;

            // Update maximum sum
            if (sum > maxSum)
                maxSum = sum;
        }
    }

    std::cout << "Maximum subarray sum: " << maxSum << std::endl;

    return 0;
}