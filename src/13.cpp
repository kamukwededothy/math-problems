 #include <iostream>
 #include <cstdlib>
 using namespace std;
 
 int main() {
     cout << "Enter your number: ";
     double num;
     cin >> num;
     double result = pow(num, 2) + sin(num);
     cout << "Result: " << result << endl;
 }
 