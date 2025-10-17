#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n], sum = 0;
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "The sum of all elements in the array is: " << sum << std::endl;
}
