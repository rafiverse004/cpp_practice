#include <iostream>

void inputArray(int arr[100][100], int rows, int cols);
void printArray(int arr[100][100], int rows, int cols);
void sumArrayRows(int arr[100][100], int rows, int cols);
void sumArrayCols(int arr[100][100], int rows, int cols);

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
    sumArrayRows(arr, rows, cols);
    sumArrayCols(arr, rows, cols);
    
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

void sumArrayRows(int arr[100][100], int rows, int cols)
{
    for (int i=0; i<rows; i++)
        {
            int sum=0;
            for (int j=0; j<cols; j++)
            {
                sum += arr[i][j];
            }
            std::cout << "Sum of rows " << i+1 << " = " << sum << std::endl;
        }
}

void sumArrayCols(int arr[100][100], int rows, int cols)
{
    for (int i=0; i<cols; i++)
        {
            int sum=0;
            for (int j=0; j<rows; j++)
            {
                sum += arr[j][i];
            }
            std::cout << "Sum of cols " << i+1 << " = " << sum << std::endl;
        }
}