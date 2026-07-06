#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    int maxSum = 0;

    for (int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    for (int i = k; i < n; i++)
    {
        windowSum = windowSum + arr[i] - arr[i - k];

        if (windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }

    cout << maxSum << endl;

    return 0;
}