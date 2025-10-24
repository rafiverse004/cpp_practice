/*
Question:
Write a C++ program to calculate the average of all elements in an array.
*/

#include <iostream>

int main() 
{
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n], sum = 0;
    std::cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;
    std::cout << "The average of the array elements is: " << average << std::endl;
}
