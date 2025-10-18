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
    
    //this part swap elements.
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
            }
        }
    }

    int target;
    std::cout << "Enter the element to search: ";
    std::cin >> target;
    
    int low = 0;
    int high = n - 1;
    int mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) 
        {
            found = true;
            break;
        } 
        else if (arr[mid] < target) 
        {
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }

    if (found)
    {
        std::cout << "Element " << target << " found at index " << mid << std::endl;
    }
    else
    {
        std::cout << "Element " << target << " not found in the array" << std::endl;
    }

    return 0;
}