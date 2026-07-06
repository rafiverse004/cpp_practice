#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int pos = 2;
    int value = 99;

    for (int i = 5; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}