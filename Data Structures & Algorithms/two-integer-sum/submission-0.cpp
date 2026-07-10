class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap; 
        vector<int> output;

        // Put the numbers in a hashmap where the key is the number and the value is the index.
        for(int i = 0; i < nums.size(); i++){
            numsMap[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int remainder = target - nums[i];

            // Check if remainder exists in the map and ensuring that it's a seperate element
            if(numsMap.find(remainder) != numsMap.end() && numsMap[remainder] != i){
                output.push_back(i);
                output.push_back(numsMap[remainder]);
                return output;
            }
        }
        return output;
    }
};
