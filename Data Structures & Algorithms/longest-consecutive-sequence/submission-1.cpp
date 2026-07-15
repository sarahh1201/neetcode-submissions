class Solution {
public:
    // starting with a brute force method 
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0; 
        }
        // sort array (O(nlogn))
        sort(nums.begin(), nums.end());
        int count = 1, maxCount = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                continue; // skip duplicates
            }

            if (nums[i] == nums[i-1] + 1) {
                count++;
            } else {
                count = 1; // reset streak
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
