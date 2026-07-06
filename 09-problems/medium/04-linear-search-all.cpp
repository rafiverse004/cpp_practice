#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};
    int key = 2;
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << i << endl;
        }
    }

    return 0;
}