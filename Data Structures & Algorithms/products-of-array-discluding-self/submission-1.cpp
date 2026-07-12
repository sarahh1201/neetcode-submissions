class Solution {
public:
    
    // For now just starting with the brute force method. 
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results(nums.size());

        for (int i = 0; i < nums.size(); i++){
            int r = 1; // Reset r

            for (int j = 0; j < nums.size(); j++){

                // If indices are the same then skip.
                if(i==j){
                    continue; 
                }

                r *= nums[j];
            }
            results[i] = r;
        }
        return results;
    }
};
