#include <iostream>
#include <cmath>
#include <limits>

void showMenu() {
    std::cout << "=====================\n";
    std::cout << "Simple Calculator\n";
    std::cout << "=====================\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "5. Power (^)\n";
    std::cout << "6. Square Root (√)\n";
    std::cout << "7. Exit\n";
    std::cout << "=====================\n";
    std::cout << "Choose an operation: ";
}

double getNumber() {
    double num;
    while (true) {
        std::cin >> num;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number: ";
        } else {
            return num;
        }
    }
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                num1 = getNumber();
                num2 = getNumber();
                result = num1 + num2;
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                num1 = getNumber();
                num2 = getNumber();
                result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                num1 = getNumber();
                num2 = getNumber();
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case 4:
                std::cout << "Enter two numbers: ";
                num1 = getNumber();
                num2 = getNumber();
                if (num2 == 0) {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                } else {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                }
                break;
            case 5:
                std::cout << "Enter the base and exponent: ";
                num1 = getNumber();
                num2 = getNumber();
                result = pow(num1, num2);
                std::cout << "Result: " << num1 << " ^ " << num2 << " = " << result << std::endl;
                break;
            case 6:
                std::cout << "Enter a number: ";
                num1 = getNumber();
                if (num1 < 0) {
                    std::cout << "Error: Square root of negative number is not allowed." << std::endl;
                } else {
                    result = sqrt(num1);
                    std::cout << "Result: √" << num1 << " = " << result << std::endl;
                }
                break;
            case 7:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;

    } while (choice != 7);

    return 0;
}

