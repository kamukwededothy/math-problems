#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        cout << "The first number is greater than the second." << endl;
    } else {
        cout << "The first number is not greater than the second." << endl;
    }
    
    return 0;
}
