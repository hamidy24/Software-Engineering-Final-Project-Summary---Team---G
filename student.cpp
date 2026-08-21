/**
 * Algorithm Visualization Engine - C++ Sandbox Runner
 * Target: State Capture and Lexical Validation
 * Author: 23-53682-3
 */

#include <iostream>
#include <vector>
#include <string>

// Manual character classification logic
bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

void captureState(const std::vector<int>& arr, int step) {
    std::cout << "STATE_CAPTURE|STEP:" << step << "|DATA:";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : ",");
    }
    std::cout << "\n";
}

void bubbleSortVisualized(std::vector<int>& arr) {
    int n = arr.size();
    int stepCounter = 0;
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << "COMPARE|" << j << "|" << j + 1 << "\n";
            
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
                std::cout << "SWAP|" << j << "|" << j + 1 << "\n";
            }
            captureState(arr, ++stepCounter);
        }
        if (!swapped) break;
    }
}

int main() {
    std::vector<int> userArray = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "EXECUTION_START\n";
    captureState(userArray, 0);
    
    bubbleSortVisualized(userArray);
    
    std::cout << "EXECUTION_END\n";
    return 0;
}
