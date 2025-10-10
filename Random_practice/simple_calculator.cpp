#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operation (+ - * / %): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Result: " << (num1 + num2);
            break;
        case '-':
            std::cout << "Result: " << (num1 - num2);
            break;
        case '*':
            std::cout << "Result: " << (num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << (num1 / num2);
            else
                std::cout << "Error! Division by zero.";
            break;
        case '%':
            if ((int)num2 != 0)
                std::cout << "Result: " << (int)num1 % (int)num2;
            else
                std::cout << "Error! Modulus by zero.";
            break;
        default:
            std::cout << "Invalid operator!";
    }

    std::cout << std::endl;
    return 0;
}
