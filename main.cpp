#include <iostream>
#include "calculator.h"

int main() {
    int num1, num2;

    // Введення чисел
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Обчислення та вивід суми
    int result = Calculator::Add(num1, num2);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

