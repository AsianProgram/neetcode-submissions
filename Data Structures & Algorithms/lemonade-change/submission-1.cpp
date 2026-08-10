class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool change = true;
        int five = 0;
        int ten = 0;

        for (int i = 0; i < bills.size(); i++) 
        {
            
            int c = bills[i] - 5;
            
            if (c==0) {
                five++;
            }
            else if (c==5) {
                ten++;
                if (five > 0) {
                    five--; 
                }
                else {
                    change = false;
                }
            }
            else if (c== 15) {
                if (ten > 0 && five > 0) {
                    ten--;
                    five--; 
                }
                else if (five >= 3) {
                    five -= 3;
                }
                else {
                    change = false;
                }
            }
            
        }
        return change;
    }
};