class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;  // Mapping for s -> t
        unordered_map<char, char> mp2;  // Mapping for t -> s
        int n = s.length();
        
        // Looping through each character in the strings
        for (int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            // Check if the current mappings exist and are inconsistent
            if (mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 || 
                mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1) {
                return false;
            }
            
            // Add the current character mapping
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        
        // If no inconsistency found, return true
        return true;
    }
};
