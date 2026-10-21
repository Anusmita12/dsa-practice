#include <iostream>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            int found = t.find(s[i]);

            if (found == string::npos) {
                return false;
            }

            t[found] = '#';
        }

        return true;
    }
};
