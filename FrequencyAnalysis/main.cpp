#include <iostream>
#include <cctype>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::map<char, int> letterCounts;

    char ch;
    while (std::cin.get(ch)) {
        if (std::isalpha(ch)) {
            ch = std::tolower(ch);
            letterCounts[ch]++;
        }
    }

    std::vector<std::pair<char, int>> sortedLetterCounts(letterCounts.begin(), letterCounts.end());

    std::sort(sortedLetterCounts.begin(), sortedLetterCounts.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    for (const auto& entry : sortedLetterCounts) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }
}