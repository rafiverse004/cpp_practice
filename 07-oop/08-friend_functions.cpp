#include <iostream>
using namespace std;

class Box
{
private:
    int width = 10;

    friend void show(Box b);
};

void show(Box b)
{
    cout << b.width << endl;
}

int main()
{
    Box b;

    show(b);

    return 0;
}