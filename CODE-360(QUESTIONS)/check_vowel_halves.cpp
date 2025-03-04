#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to count vowels in a given string
int countVowels(const string &str) {
    int count = 0;
    for (char ch : str) {
        ch = tolower(ch); // Convert character to lowercase for uniformity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to check if the string can be divided into two equal parts with the same number of vowels
bool checkEqualVowels(const string &str) {
    int length = str.length();

    // If the length of the string is odd, we can't divide it into two equal parts
    if (length % 2 != 0) {
        return false;
    }

    // Split the string into two parts
    string part1 = str.substr(0, length / 2);
    string part2 = str.substr(length / 2, length / 2);

    // Count vowels in both parts
    int vowelsInPart1 = countVowels(part1);
    int vowelsInPart2 = countVowels(part2);

    // Return true if both parts have the same number of vowels, false otherwise
    return vowelsInPart1 == vowelsInPart2;
}

int main() {
    string input;
    
    // Get input from the user
    cout << "Enter a string: ";
    cin >> input;

    // Check and print the result
    if (checkEqualVowels(input)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    return 0;
}
