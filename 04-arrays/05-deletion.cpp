#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int pos = 2;

    for (int i = pos; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}