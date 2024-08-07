# Exp-3
## Aim:
The aim of this journal is to understand and implement basic arithmetic, comparison, and logical operations using C++ programming. This involves taking input from the user, performing the operations, and displaying the results in a clear and concise manner.

## Software Used:
- Dev c++

## Theory:
<strong>Arithmetic Operations:</strong>
<br>Arithmetic operations are fundamental mathematical operations performed on numbers. The basic arithmetic operations include addition, subtraction, multiplication, division, and modulus
<br>  -Addition (+): Adds two numbers.
<br>  -Subtraction (-): Subtracts the second number from the first.
<br>  -Multiplication (*): Multiplies two numbers.
<br>  -Division (/): Divides the first number by the second (integer division).
<br>  -Modulus (%): Returns the remainder when the first number is divided by the second.

<br><strong>Comparison Operations:</strong>
<br>Comparison operations are used to compare two values. The result of a comparison is a boolean value (true or false).
<br>  -Equal to (==): Checks if two values are equal.
<br>  -Not equal to (!=): Checks if two values are not equal.
<br>  -Greater than (>): Checks if the first value is greater than the second.
<br>  -Less than (<): Checks if the first value is less than the second.
<br>  -Greater than or equal to (>=): Checks if the first value is greater than or equal to the second.
<br>  -Less than or equal to (<=): Checks if the first value is less than or equal to the second.

<br><strongLogical Operations:</strong>
<br>Logical operations are used to perform logical operations on boolean values. The basic logical operations include AND, OR, and NOT.
<br>  -Logical AND (&&): Returns true if both operands are true.
<br>  -Logical OR (||): Returns true if at least one of the operands is true.
<br>  -Logical NOT (!): Returns the opposite boolean value of the operand.

## Program 1: Take two numbers as input from user and perform arithmetic operations on those numbers.

<strong> Code: </strong>
<br>
```cpp
#include <iostream>
int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;
    int modulus = num1 % num2;

    std::cout << "Addition (" << num1 << "+" << num2 << ") : " << addition << std::endl;
    std::cout << "Subtraction (" << num1 << "-" << num2 << ") : " << subtraction << std::endl;
    std::cout << "Multiplication (" << num1 << "*" << num2 << ") : " << multiplication << std::endl;
    std::cout << "Division (" << num1 << "/" << num2 << ") : " << division << std::endl;
    std::cout << "Modulus (" << num1 << "%" << num2 << ") : " << modulus << std::endl;

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

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    bool equal = (num1 == num2);
    bool notEqual = (num1 != num2);
    bool greaterThan = (num1 > num2);
    bool lessThan = (num1 < num2);
    bool greaterThanOrEqual = (num1 >= num2);
    bool lessThanOrEqual = (num1 <= num2);

    std::cout << "Equal to (" << num1 << "==" << num2 << "): " << equal << std::endl;
    std::cout << "Not equal to (" << num1 << "!=" << num2 << "): " << notEqual << std::endl;
    std::cout << "Greater than (" << num1 << ">" << num2 << "): " << greaterThan << std::endl;
    std::cout << "Less than (" << num1 << "<" << num2 << "): " << lessThan << std::endl;
    std::cout << "Greater than or equal to (" << num1 << ">=" << num2 << "): " << greaterThanOrEqual << std::endl;
    std::cout << "Less than or equal to (" << num1 << "<=" << num2 << "): " << lessThanOrEqual << std::endl;

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
int main() {
    bool a, b;

    std::cout << "Enter two boolean values (0 for false, 1 for true): ";
    std::cin >> a >> b
    std::cout << "a=" << (a ? "true" : "false") << ", b=" << (b ? "true" : "false") << std::endl;

    bool logicalAnd = a && b;
    bool logicalOr = a || b;
    bool logicalNotA = !a;

    std::cout << "Logical AND (a&&b): " << logicalAnd << std::endl;
    std::cout << "Logical OR (a||b): " << logicalOr << std::endl;
    std::cout << "Logical NOT (!a): " << logicalNotA << std::endl;

    return 0;
}
```

<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/3eef7c22-d547-43ea-847b-6654bf921107)


## Conclusion:
In this practical exercise, I learned about arithmetic operations,comparison operations and perform logical operations on those numbers in C++,where the input is provided by the user.






