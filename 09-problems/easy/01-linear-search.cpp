#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;

    return 0;
}