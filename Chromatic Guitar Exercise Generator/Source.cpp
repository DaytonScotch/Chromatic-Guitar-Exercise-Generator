#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> arr = { 1, 2, 3, 4 };

    // Shuffle the array
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr.begin(), arr.end(), g);

    // Print the array forward
    std::cout << "****Chromatic Scale Exercise Generator****" << std::endl;
    std::cout << "Forward: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the array in reverse
    std::cout << "Reverse: ";
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}