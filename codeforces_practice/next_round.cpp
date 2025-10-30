//problem_158A

#include <iostream>

int main()
{
    int n,k;
    std::cin >> n >> k ;

    int scores[100];
    for (int i=0; i<n; i++)
    {
        std::cin >> scores[i];
    }

    int cutoff = scores[k-1];
    int count=0;
    for (int i=0; i<n; i++)
    {
        if(scores[i] >= cutoff && scores[i] > 0 )
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}