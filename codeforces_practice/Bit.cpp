/*
Question:
Write a C++ program to count and display the frequency of each element in an array.
*/

#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> n;
    
    int x = 0;
    std::string statement;

    for (int i = 0; i < n; i++) {
        std::cin >> statement;
        if (statement.find("++") != std::string::npos)
            x++;
        else
            x--;
    }

    std::cout << x;
    return 0;
}
