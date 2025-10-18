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

    int k;
    std::cout << "Enter how many time you want to rotate: ";
    std::cin >> k;

    k = k % n; //if k is bigger than n then will will work.
    std::cout << "Array after rotation: ";

    // Print last k elements first
    for (int i = n - k; i < n; i++)
        std::cout << arr[i] << " ";

    // Print first n-k elements next
    for (int i = 0; i < n - k; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}