/*
Question:
Write a C++ program to count and display the frequency of each element in an array.
*/

#include <iostream>
#include <map>

int main() 
{
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) 
    {
        std::cin >> arr[i];
    }

    std::map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Print frequency
    std::cout << "Element frequencies:\n";
    for (auto it : freq)
    {
        std::cout << it.first << " occurs " << it.second << " times" << std::endl;
    }

    return 0;
}
