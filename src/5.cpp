#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> mathProblems;

    // Generate a list of math problems
    for (int i = 0; i < 10; i++) {
        string problem = "What is the value of x in the equation: 2x + 5 = 11";
        mathProblems.push_back(problem);
    }

    // Shuffle the list of math problems to randomize order
    shuffle(mathProblems.begin(), mathProblems.end());

    // Print each math problem and ask user for solution
    for (string& problem : mathProblems) {
        cout << problem << endl;
        string solution;
        cin >> solution;

        // Check if the solution is correct
        if (solution == "7") {
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect, try again." << endl;
        }
    }

    return 0;
}
