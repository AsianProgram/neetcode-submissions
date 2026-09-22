class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> m;
        bool v = false;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        for(const auto& pair: m) {
            if (pair.second > 1) {
                v = true;
            }
        }

        return v;
    }
};