#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector to store the math problems
    vector<string> mathProblems = {"2 + 3", "4 - 5", "10 * 2"};

    // Get a random index for the problem
    int index = rand() % mathProblems.size();

    // Print the random math problem
    cout << mathProblems[index] << endl;

    return 0;
}
