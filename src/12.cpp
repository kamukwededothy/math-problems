#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    for (int i = 0; i < 10; i++) {
        numbers.push_back(i);
    }
    std::sort(numbers.begin(), numbers.end());

    int median = numbers[5];

    return median;
}
