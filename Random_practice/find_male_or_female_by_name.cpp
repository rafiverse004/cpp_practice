#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::set<char>letters;

    for (char c : name)
    {
        letters.insert(c);
    }
    int distinctCount = letters.size();

    if (distinctCount % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}