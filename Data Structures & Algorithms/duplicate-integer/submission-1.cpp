class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;

        for(int n : nums){
            dup[n]++;
        }

        for(auto pair : dup){
            if(pair.second > 1){
                return true;
            }
        }

        return false;
    }
};