// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main() {
    bool a, b;
    cout << "Enter two boolean values (0 for false, 1 for true): ";
    cin >> a >> b;
    cout << "a=" << (a ? "true" : "false") << ", b=" << (b ? "true" : "false") << std::endl;

    bool logicalAnd = a && b;
    bool logicalOr = a || b;
    bool logicalNotA = !a;

    cout << "Logical AND (a&&b): " << logicalAnd << std::endl;
    cout << "Logical OR (a||b): " << logicalOr << std::endl;
    cout << "Logical NOT (!a): " << logicalNotA << std::endl;

    return 0;
}
