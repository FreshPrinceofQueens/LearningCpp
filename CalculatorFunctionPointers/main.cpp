#include <iostream>

using ArithmeticFunction = std::function<int(int, int)>;
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}
int subtract(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
int divide(int num1, int num2) {
    return num1 / num2;
}
ArithmeticFunction getArithmeticFunction(char oper) {
    switch(oper) {
        case '+':
            return add;
            break;
        case '-':
            return subtract;
            break;
        case '*':
            return multiply;
            break;
        case '/':
            return divide;
            break;
    }
}
int main() {
    int num1;
    int num2;
    char oper;
    std::cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Operator: ";
    cin >> oper;
    cout << (getArithmeticFunction(oper)(num1,num2));

    return 0;
}
