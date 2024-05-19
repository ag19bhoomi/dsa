#include <iostream>
#include <string>

bool areRotations(std::string s1, std::string s2) {
    // Check if lengths of both strings are equal
    if (s1.length() != s2.length()) {
        return false;
    }

    // Concatenate s1 with itself
    std::string temp = s1 + s1;

    // Check if s2 is a substring of temp
    int n = s1.length();
    for (int i = 0; i < n; ++i) {
        bool found = true;
        for (int j = 0; j < n; ++j) {
            if (temp[i + j] != s2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }

    return false;
}

int main() {
    std::string s1, s2;

    // Input strings from the user
    std::cout << "Enter the first string: ";
    std::cin >> s1;
    std::cout << "Enter the second string: ";
    std::cin >> s2;

    // Check if the strings are rotations of each other
    if (areRotations(s1, s2)) {
        std::cout << "TRUE" << std::endl;
    } else {
        std::cout << "FALSE" << std::endl;
    }

    return 0;
}
