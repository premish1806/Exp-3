// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;
    int modulus = num1 % num2;

    cout << "Addition (" << num1 << "+" << num2 << ") : " << addition << std::endl;
    cout << "Subtraction (" << num1 << "-" << num2 << ") : " << subtraction << std::endl;
    cout << "Multiplication (" << num1 << "*" << num2 << ") : " << multiplication << std::endl;
    cout << "Division (" << num1 << "/" << num2 << ") : " << division << std::endl;
    cout << "Modulus (" << num1 << "%" << num2 << ") : " << modulus << std::endl;

    return 0;
}
