#include <iostream>

int main() {
    char oper;
    double num1, num2, result;

    // Input operator and two numbers from the user
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> oper;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform calculation based on the operator
    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero\n";
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operator\n";
            return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}

