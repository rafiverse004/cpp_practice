#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 50, 30, 20, 40};

    int max1 = -1;
    int max2 = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    cout << max2 << endl;

    return 0;
}