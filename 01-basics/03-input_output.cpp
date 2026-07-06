#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    double cgpa;

    getline(cin, name);
    cin >> age;
    cin >> cgpa;

    cout << name << endl;
    cout << age << endl;
    cout << cgpa << endl;

    return 0;
}