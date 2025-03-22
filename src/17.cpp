#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0) {
        cout << "The numbers are positive.";
    } else if (num1 < 0 && num2 < 0) {
        cout << "The numbers are negative.";
    } else if (num1 == 0 && num2 == 0) {
        cout << "The numbers are zero.";
    } else {
        cout << "There is an error in the input values.";
    }

    return 0;
}
