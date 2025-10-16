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
    int maxNum = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    std::cout << "The max in the array is: " << maxNum << std::endl;
}