#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

bool isTwinPrime(int num) {
    return (isPrime(num) && (isPrime(num - 2) || isPrime(num + 2)));
}

int main() {
    // Read the number of integers
    int n;
    std::cin >> n;
    
    std::vector<std::string> outputs;
    
    // Iterate over each integer
    for (int i = 0; i < n; ++i) {
        // Read the integer
        int num;
        std::cin >> num;
        
        // Check if the integer is a twin prime
        if (isTwinPrime(num)) {
            outputs.push_back("true");
        } else {
            outputs.push_back("false");
        }
    }
    
    // Output the results
    for (const std::string& output : outputs) {
        std::cout << output << std::endl;
    }
    
    return 0;
}
