class Solution {
public:
    bool isPalindrome(string s) {
        
        int len = s.length();
        int sidx = 0;
        int eidx = len - 1;
        //char *st = s[0];
       //char *e = s[len-1];

        bool val = true;

        while (sidx < eidx) {

            if ((std::isalpha(s[sidx]) || std::isdigit(s[sidx])) 
            && (std::isalpha(s[eidx]) || std::isdigit(s[eidx]))) {

                if (std::toupper(s[sidx]) != std::toupper(s[eidx])) {
                    val = false;
                }
                sidx++;
                eidx--;
            }
            else if (!std::isalpha(s[sidx]) || std::isdigit(s[sidx])) {
                sidx++;
            }
            else if (!std::isalpha(s[eidx]) || std::isdigit(s[eidx])) {
                eidx--;
            }
            

        }
        return val;
    }
};
