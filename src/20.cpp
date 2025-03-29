#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            cout << i << " x " << n << " = " << i * n << endl;
        }
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }

    return 0;
}
