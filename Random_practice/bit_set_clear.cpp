#include <iostream>

int main() {
    unsigned int num;
    int bitPosition;
    int choice;

    std::cout << "Enter an integer number: ";
    std::cin >> num;

    std::cout << "Enter bit position to modify (0-31): ";
    std::cin >> bitPosition;

    if (bitPosition < 0 || bitPosition > 31) 
    {
        std::cout << "Invalid bit position! Must be between 0 and 31.\n";
        return 1;
    }

    std::cout << "Enter 1 to set the bit, 0 to clear it: ";
    std::cin >> choice;

    std::cout << "Before operation: " << num << '\n';

    if (choice == 1)
        num = num | (1 << bitPosition);
    else if (choice == 0)
        num = num & ~(1 << bitPosition);
    else
        std::cout << "Invalid choice!\n";

    std::cout << "After operation: " << num << '\n';

    return 0;
}
