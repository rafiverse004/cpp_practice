#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the element number: ";
    std::cin >> n;

    int i;
    int arr[n];
    for (i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    int evenCount=0, oddCount=0;
    for (i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    std::cout << "Even: " << evenCount << ", Odd: " << oddCount << std::endl;
    return 0;
}