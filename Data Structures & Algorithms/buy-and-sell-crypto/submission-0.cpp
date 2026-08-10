class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        int start = prices.at(0);
        int end = 0;
        int idx = 0;
        // for(int i = 0; i < prices.size(); i++) {
        //     if (start > prices.at(i)) {
        //         start = prices
        //     }
        // }

        for(int i = 0; i < prices.size(); i++) {

            start = prices[i];
            for (int j = i+1; j < prices.size(); j++) {
                end = prices[j];

                if ((end-start) > max) {
                    max = end - start;
                }
                


            }
        }
        return max;

        
    }
};
