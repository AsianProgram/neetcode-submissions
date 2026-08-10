class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if(seen.contains(nums.at(i))) {
                return true;
            }
            seen.insert(nums.at(i));
        }

        return false;
    }
};