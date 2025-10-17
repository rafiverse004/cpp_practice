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

    std::cout << "Array elements are: ";
    for(int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
