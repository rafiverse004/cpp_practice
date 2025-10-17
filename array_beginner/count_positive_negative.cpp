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
    int negative=0, positive=0, zero=0;
    for (i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            negative++;
        }
        else if(arr[i]>0)
        {
            positive++;
        }
        else
        {
            zero++;
        }
    }
    std::cout << "Postive: " << positive << ", Negative: "<< negative << ", Zero: " << zero << std::endl;
    return 0;
}