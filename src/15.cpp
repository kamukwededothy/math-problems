#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    int a = 0;
    int b = 0;
    int c = 0;

    // Ask user for input
    std::cout << "Enter two numbers to add: ";
    std::cin >> a >> b;

    // Calculate sum
    int sum = a + b;

    // Display result
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;

    return 0;
}
