#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = 7;

    int j = 0;
    int temp[7];

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << temp[i] << endl;
    }

    return 0;
}