#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) std::cin >> arr[i];

    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] > 0) 
        {
            pos++;
        }
        else if(arr[i] < 0) 
        {
            neg++;
        }
        else 
        {
            zero++;
        }
    }

    std::cout << "Positive: " << pos << ", Negative: " << neg << ", Zero: " << zero << std::endl;
}
