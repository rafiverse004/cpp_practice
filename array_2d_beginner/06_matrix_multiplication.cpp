#include <iostream>

void inputArray (int arr[100][100], int rows, int cols);
void printArray (int arr[100][100], int rows, int cols);
void multiplyMatrix(int a[100][100], int b[100][100], int result[100][100], int raws1, int cols1, int rows2, int cols2);

int main()
{
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter number of rows and colum for first array: ";
    std::cin >> rows1 >> cols1;

    std::cout << "Enter number of rows and colum for second array: ";
    std::cin >> rows2 >> cols2;

    int a[100][100], b[100][100], result[100][100] = {0};

    std::cout << "Enter first matrix elements: \n";
    inputArray(a, rows1, cols1);

    std::cout << "Enter second matrix elements: \n";
    inputArray(b, rows2, cols2);

    std::cout << "First Matrix:\n";
    printArray(a, rows1, cols1);

    std::cout << "Second Matrix:\n";
    printArray(b, rows2, cols2);

    if (cols1 != rows2)
    {
        std::cout << "Matrix multiplication not possible! (Columns of first != Rows of second)" << std::endl;
        return 0;
    }
    
    multiplyMatrix(a, b, result, rows1, cols1, rows2, cols2);

    std::cout << "\nResultant Matrix (A x B):\n";
    printArray(result, rows1, cols2);

    return 0;
}

void inputArray (int arr[100][100], int rows, int cols)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

void printArray (int arr[100][100], int rows, int cols)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplyMatrix(int a[100][100], int b[100][100], int result[100][100], int rows1, int cols1, int rows2, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}