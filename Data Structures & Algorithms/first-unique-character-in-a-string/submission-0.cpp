class Solution {
public:
    int firstUniqChar(string s) {
        //use 2 hashmaps, one to store frequency of character, one to store index

        unordered_map<char, int> frequencyMap;
        unordered_map<char, int> indexMap;
        
        int idx = -1; 
        
        for (int i  = 0; i < s.size(); i++) {
            frequencyMap[s[i]]++; 
            indexMap[s[i]] = i;
        }

        //go through frequency map
            //check if current pair-value is 1
                //check if index is -1 or if current index is greater than searched index
        
        for (const auto& pair : frequencyMap) {
            if (frequencyMap[pair.first] == 1) {
                if ((idx == -1) || (indexMap[pair.first] < idx)) {
                    idx = indexMap[pair.first];
                }
            }
        }

        return idx;

    }
};