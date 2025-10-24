/*
Question:
Write a C++ program that takes three integers as input from the user
and finds the maximum and minimum numbers using separate functions.
*/

#include <iostream>

// Function prototypes
int findMax(int a, int b, int c);
int findMin(int a, int b, int c);

int main() {
    int num1, num2, num3;

    // User input
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Calling functions
    int maximum = findMax(num1, num2, num3);
    int minimum = findMin(num1, num2, num3);

    // Printing results
    std::cout << "Maximum = " << maximum << std::endl;
    std::cout << "Minimum = " << minimum << std::endl;

    return 0;
}

// Function definitions
int findMax(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int findMin(int a, int b, int c) {
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}
