#include <iostream>

int main()
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int i;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }

    for(i=n-1; i>=0; i--)
    {
        std::cout << arr[i] << " ";
    }
}