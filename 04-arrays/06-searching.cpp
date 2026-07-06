#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }

    cout << found << endl;

    return 0;
}