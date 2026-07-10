class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Storing the numbers from nums as they key and the count as the value
        unordered_map<int, int> numsMap; 

        for (int i = 0; i < nums.size(); i++){
            numsMap[nums[i]]++;
        }

        // Convert the map into a vector representation
        vector<vector<int>> numsVec(nums.size() + 1); 

        for(auto pair : numsMap){
            int num = pair.first; 
            int freq = pair.second;

            numsVec[freq].push_back(num);
        }

        vector<int> output;

        // Using the frequency as the index value. 
        for (int i = numsVec.size() - 1; i >= 0; i--){
            for (int num : numsVec[i]){
                output.push_back(num);

                // Add k values in output vector 
                if(output.size() == k){
                    return output;
                }
            }
        }
        return output;
    }
};
