#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findDuplicates(const string& str) {
    // Create a map to store the frequency of characters
    unordered_map<char, int> freq;

    // Count the frequency of each character in the string
    for (char ch : str) {
        freq[ch]++;
    }

    // Find characters with a frequency greater than 1
    cout << "Duplicate characters in the string: ";
    bool found = false;
    for (auto& pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    string testString;
    cout << "Enter a string: ";
    getline(cin, testString);

    findDuplicates(testString);

    return 0;
}
