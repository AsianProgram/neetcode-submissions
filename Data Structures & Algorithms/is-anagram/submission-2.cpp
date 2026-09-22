class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int> m1;
        unordered_map <char, int> m2;
        bool v = true;
        for (int i = 0; i < s.length(); i++) {
            m1[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            m2[t[i]]++;
        }
        
        if (s.length() >= t.length()) {
            for (const auto& pair: m1) {
                if (m2.find(pair.first) != m2.end()) {
                    if (m2[pair.first] != pair.second) {
                        v = false;
                    }
                }
                else {
                    v = false;
                }
            }
        }
        else {
            for (const auto& pair: m2) {
            if (m1.find(pair.first) != m1.end()) {
                if (m1[pair.first] != pair.second) {
                    v = false;
                }
            }
            else {
                v = false;
            }
        }
        }

        return v;
    }
};
