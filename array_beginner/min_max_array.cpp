#include <iostream>

int main()
{
    int n,i;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    int minNum = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    std::cout << "The min in the array is: " << minNum << std::endl;
}