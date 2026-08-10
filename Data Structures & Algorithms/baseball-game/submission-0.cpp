class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> points;
        int idx = -1;
        int score = 0;
        int v = 0;

        //loop throught vector
        for (int i = 0; i < operations.size(); i++) {
            //remove last score
            if (operations.at(i) == "C") {
                score -= points.at(idx);
                idx--;
                points.pop_back();
            }
            else if (operations.at(i) == "D") { //double the last score
                v = points.at(idx) * 2;
                score += v;
                idx++;
                points.push_back(v);
            }
            else if (operations.at(i) == "+") { //add last 2 values
                v = (points.at(idx) + points.at(idx-1));
                score += v;
                idx++;
                points.push_back(v);
            }
            else {  //add value
                v = atoi(operations.at(i).c_str());
                score += v;
                idx++;
                points.push_back(v);
            }
        }
        return score;
    }
};