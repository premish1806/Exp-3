# Exp-3
## Aim:
To understand and analyze the usage of logical and bitwise operators in C++ through practical examples, demonstrating their functionality and output.

## Software Used:
- Dev c++

## Theory:
<strong>1.Logical Operators:</strong><br>
Logical operators in C++ are used to perform logical operations. The logical AND (&&) operator returns true if both operands are true, and false otherwise. In C++, the boolalpha manipulator allows us to output true or false instead of 1 or 0.

<strong>2.Equality and Inequality Operators:</strong<br>

The equality operator (==) checks if two values are equal and returns true if they are, and false otherwise.
The inequality operator (!=) checks if two values are not equal and returns true if they are not, and false otherwise.

<strong>3.Bitwise Operators:</strong
Bitwise operators perform operations on the binary representation of integers:<br>
The bitwise AND (&) operator performs a bitwise AND operation.
The bitwise OR (|) operator performs a bitwise OR operation.
The bitwise XOR (^) operator performs a bitwise XOR operation.
The bitwise NOT (~) operator inverts all bits.
The left shift (<<) operator shifts bits to the left.
The right shift (>>) operator shifts bits to the right.

## Program 1: Take two numbers as input from user and perform arithmetic operations on those numbers.
<strong> Code: </strong>
<br>
```cpp
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
```

<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/b2fe86a9-0318-4aa3-8e9d-3d56adce9f9e)


## Program 2: Take two numbers as input from user and perform comparison operations on those numbers.

<strong> Code: </strong>
<br>
```cpp
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
```

<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/e263fc8b-d5f9-4220-9cec-aaca93d72439)


## Program 3:Take two numbers as input from user and perform logical operations on those numbers.

<strong> Code: </strong>
<br>
```cpp
#include <iostream>
using namespace std;
int main() {
    bool a, b;
    cout << "Enter two boolean values (0 for false, 1 for true): ";
    cin >> a >> b
    cout << "a=" << (a ? "true" : "false") << ", b=" << (b ? "true" : "false") << std::endl;

    bool logicalAnd = a && b;
    bool logicalOr = a || b;
    bool logicalNotA = !a;

    cout << "Logical AND (a&&b): " << logicalAnd << std::endl;
    cout << "Logical OR (a||b): " << logicalOr << std::endl;
    cout << "Logical NOT (!a): " << logicalNotA << std::endl;

    return 0;
}
```

<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/3eef7c22-d547-43ea-847b-6654bf921107)


## Conclusion:
In this practical exercise, I learned about arithmetic operations,comparison operations and perform logical operations on those numbers in C++,where the input is provided by the user.






