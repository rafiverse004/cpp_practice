#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int max = 0, min = 0;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    std::cout << "Maximum: " << max << ", Minimum: " << min << std::endl;
}
