#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str = "Vikku";
    reverse(str.begin(), str.end());  // Reverse str
    cout << "Reversed str: " << str << endl;

    string s = "kpiko";
    int n = s.size();  // Use size of s, not str

    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }

    cout << "Reversed s: " << s << endl;

    return 0;
}
