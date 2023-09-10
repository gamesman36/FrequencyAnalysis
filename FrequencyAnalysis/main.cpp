#include <iostream>
#include <cctype>
#include <map>

int main() {
    std::map<char, int> letterCounts;

    char ch;
    while (std::cin.get(ch)) {
        if (std::isalpha(ch)) {
            ch = std::tolower(ch);
            letterCounts[ch]++;
        }
    }

    for (const auto& pair : letterCounts) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
}