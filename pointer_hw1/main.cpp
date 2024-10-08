#include <iostream>
using namespace std;

int main() {

    int a, b;
    char op;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;

    int* pA = &a;
    int* pB = &b;
    int result;

    switch (op) {
    case '+':
        result = *pA + *pB;
        break;
    case '-':
        result = *pA - *pB;
        break;
    case '*':
        result = *pA * *pB;
        break;
    case '/':
        result = *pA / *pB;
        break;
    default:
        std::cout << "Invalid operation" << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}