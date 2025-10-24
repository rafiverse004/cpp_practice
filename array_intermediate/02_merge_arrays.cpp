/*
Question:
Write a C++ program to merge two sorted arrays into a single sorted array.
*/

#include <iostream>

int main()
{
    //this part takes the first array size.
    int n1;
    std::cout << "Enter number of elements for first array: ";
    std::cin >> n1;

    //this part takes the first array elements.
    int arr1[n1];
    std::cout << "Enter " << n1 << " number of array elements(sorted).";
    for (int i=0; i<n1; i++)
    {
        std::cin >> arr1[i];
    }

    //this part takes the first array size.
    int n2;
    std::cout << "Enter number of elements for second array: ";
    std::cin >> n2;

    //this part takes the second array elements.
    int arr2[n2];
    std::cout << "Enter " << n2 << " number of array elements(sorted).";
    for (int i=0; i<n2; i++)
    {
        std::cin >> arr2[i];
    }

    //create a new array named merged.
    int merged[n1 + n2];

    //create three pointer for arr1, arr2, merged.
    int i=0, j=0, k=0;

    //this loop run until both logic turns false.
    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            merged[k++] = arr1[i++];//here k++ or i++ means pointer jumping from one element to another next to it.
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    //this two while loop checks if any elements are left in any array.If left then it will take those elements and put on the merged array.
    while (i<n1)
    {
        merged[k++] = arr1[i++];
    }
    while (j<n2)
    {
        merged[k++] = arr2[j++];
    }

    //this print the merged array.
    std::cout << "Merged array: ";
    for (int x=0; x<(n1+n2); x++)
    {
        std::cout << merged[x] << " ";
    }

    std::cout << std::endl;
    return 0;
}