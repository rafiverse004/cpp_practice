#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Rafik";
    int age = 21;
    double cgpa = 3.85;
    char grade = 'A';
    bool student = true;

    cout << name << endl;
    cout << age << endl;
    cout << cgpa << endl;
    cout << grade << endl;
    cout << student << endl;

    age = 22;
    cout << age << endl;

    return 0;
}