// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    bool equal = (num1 == num2);
    bool notEqual = (num1 != num2);
    bool greaterThan = (num1 > num2);
    bool lessThan = (num1 < num2);
    bool greaterThanOrEqual = (num1 >= num2);
    bool lessThanOrEqual = (num1 <= num2);

    cout << "Equal to (" << num1 << "==" << num2 << "): " << equal << std::endl;
    cout << "Not equal to (" << num1 << "!=" << num2 << "): " << notEqual << std::endl;
    cout << "Greater than (" << num1 << ">" << num2 << "): " << greaterThan << std::endl;
    cout << "Less than (" << num1 << "<" << num2 << "): " << lessThan << std::endl;
    cout << "Greater than or equal to (" << num1 << ">=" << num2 << "): " << greaterThanOrEqual << std::endl;
    cout << "Less than or equal to (" << num1 << "<=" << num2 << "): " << lessThanOrEqual << std::endl;

    return 0;
}
