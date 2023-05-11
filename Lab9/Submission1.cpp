#include <iostream>
#include <string>
#include <locale>
#include <vector>

int main() {
    // Read the number of strings
    int n;
    std::cin >> n;
    std::cin.ignore();  // Ignore the newline character after reading n

    std::vector<std::string> upperStrings;

    // Iterate over each string
    for (int i = 0; i < n; ++i) {
        // Read the string
        std::string str;
        std::getline(std::cin, str);

        // Convert the string to uppercase
        std::locale loc;
        std::string uppercaseString;
        for (char c : str) {
            uppercaseString += std::toupper(c, loc);
        }

        // Store the uppercase string in the container
        upperStrings.push_back(uppercaseString);
    }

    // Output the uppercase strings
    for (const std::string& str : upperStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}
