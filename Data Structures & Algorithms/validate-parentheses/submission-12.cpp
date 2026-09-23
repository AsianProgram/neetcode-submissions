class Solution {
public:
    bool isValid(string s) {

        if ((s.size() % 2) != 0) {
            return false;
        }
        unordered_map <char, char> m = { {')', '('}, {'}', '{'}, {']', '['} };
        stack<char> st;
        bool valid = true;
        char charVal;

        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) != m.end()) { //find char in map
                
                if ((!st.empty()) && (st.top() == m.at(s[i]))) {
                    st.pop();
                }
                else {
                    valid = false;
                }
            }
            else {
                st.push(s[i]);
            }
            if ((!st.empty()) && (i == s.size()-1)) {
                valid = false;
            }
        }

        // for (const auto& c: s) {
        //     if (m.find(c) != m.end()) { //find char in map
                
        //         if ((!st.empty()) && (st.top() == m.at(c))) {
        //             st.pop();
        //         }
        //         else {
        //             valid = false;
        //         }
        //     }
        //     else {
        //         st.push(c);

        //         if ()
        //     }
        // }
        return valid;
    }   
};
