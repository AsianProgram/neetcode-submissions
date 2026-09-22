class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //use a hashmap to store indexes for values
        unordered_map <int, vector<int>> m;
        
        //iterate through vector to store indexes of values
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        } 

        //check hashmap using key and finding the indexes for the corresponding pair
        for (const auto& pair : m) {
            //look at each pair and look for possible key pair
            if (m.find((target -  pair.first)) != m.end()) {
                //if corresponding pair are the same numbers
                if (m[pair.first] == m[(target -  pair.first)])
                {
                    vector<int> idx = {m[pair.first].front(), m[(target -  pair.first)].back()};
                    return idx;
                }
                else {
                    if (m[pair.first] < m[(target -  pair.first)]) {
                        vector<int> idx = {m[pair.first].back(), m[(target -  pair.first)].back()};
                        return idx;
                    }
                    else {
                        vector<int> idx = {m[(target -  pair.first)].back(), m[pair.first].back()};
                        return idx;
                    }
                }
            }

        }

        return {};
    }
};
