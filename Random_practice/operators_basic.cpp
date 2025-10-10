#include <iostream>

int main()
{
    double num1, num2, sum, difference, product, quotient;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    sum = num1 + num2;
    std::cout << "Sum: " << sum << '\n';

    difference = num1 - num2;
    std::cout << "Difference: " << difference << '\n';

    product = num1 * num2;
    std::cout << "Product: " << product << '\n';

    if (num2 != 0) {
        quotient = num1 / num2;
        std::cout << "Quotient: " << quotient << '\n';
    } else {
        std::cout << "Quotient: Undefined (division by zero)\n";
    }

    return 0;
}
