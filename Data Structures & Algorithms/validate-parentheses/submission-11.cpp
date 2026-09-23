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
        // for (int i = 0; i < s.size(); i++) {
            
        //     if ((s[i] == '(') ||(s[i] == '[') || (s[i] == '{')) {
        //         st.push(s[i]);
        //     }
        //     else if (s[i] == ')') {
        //         char v = st.top();
        //         if (v != '(') {
        //             valid = false;
        //         }
        //         else {
        //             st.pop();
        //         }
        //     }
        //     else if (s[i] == ']') {
        //         char v = st.top();
        //         if (v != '[') {
        //             valid = false;
        //         }
        //         else {
        //             st.pop();
        //         }
        //     }
        //     else if (s[i] == '}') {
        //         char v = st.top();
        //         if (v != '{') {
        //             valid = false;
        //         }
        //         else {
        //             st.pop();
        //         }
        //     }

        // }

        // for (int i = 0; i < (s.size() / 2); i++) {
        //     char val = st.top();
        //     if (val == ')') {
        //         if (s[i] != '(') {
        //             valid = false;
        //         }
        //     }
        //     else if (val == '}') {
        //         if (s[i] != '{') {
        //             valid = false;
        //         }
        //     }
        //     else if (val == ']') {
        //         if (s[i] != '[') {
        //             valid = false;
        //         }
        //     }
        //     st.pop();
        // }
        return valid;
    }   
};
