#include <iostream>
#include <string>
#include <vector>
#include <cctype> // for isalpha() and tolower()

int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && tolower(c) != 'y' && tolower(c) != 'w') {
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count++;
                    break;
                default:
                    break;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> vowelCounts;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "end") {
            break;
        }
        vowelCounts.push_back(countVowels(line));
    }
    for (int count : vowelCounts) {
        std::cout << count << '\n';
    }
    return 0;
}
