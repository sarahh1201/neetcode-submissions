class Solution {
public:
    // starting with a brute force method
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++){
            int d = 0; // keep track of the days until there is a warmer one

            // only looking at the days in the future 
            for (int j = i + 0; j < temperatures.size(); j ++){
                if (temperatures[i] < temperatures[j]){
                    result[i] = d; 
                    d = 0; // reset for the next day
                    break;
                }
                d++;
            }
        }
        return result;
    }
};
