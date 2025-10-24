#include <iostream>

void inputArray(int arr[100][100], int rows, int cols);
void printArray(int arr[100][100], int rows, int cols);

int main()
{
    int rows, cols;

    std::cout << "Enter rows number: ";
    std::cin >> rows;

    std::cout << "Enter cols number: ";
    std::cin >> cols;

    int arr[100][100];

    inputArray(arr, rows, cols);
    printArray(arr, rows, cols);
}

void inputArray(int arr[100][100], int rows, int cols)
{
    std::cout << "Enter " << rows * cols << " elements: \n";
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            std::cin >> arr[i][j];
        }
        std::cout << std::endl;
    }
}

void printArray(int arr[100][100], int rows, int cols)
{
    std::cout << "\nArray elements are: \n";
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}