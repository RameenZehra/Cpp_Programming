#include <iostream>
#include <unordered_map>

bool isPermutationOfPalindrome(const std::string& str) {
    std::unordered_map<char, int> charFrequency;

    // Count the frequency of each character in the string
    for (char c : str) {
        if (std::isalpha(c)) { // Consider only alphabetic characters
            charFrequency[c]++;
        }
    }

    // Check if at most one character has an odd frequency
    int oddCount = 0;
    for (const auto& entry : charFrequency) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
        if (oddCount > 1) {
            return false; // More than one character with odd frequency
        }
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPermutationOfPalindrome(input)) {
        std::cout << "The string " << input << " is a permutation of a palindrome.\n";
    } else {
        std::cout << "The string " << input << " is not a permutation of a palindrome.\n";
    }

    return 0;
}
