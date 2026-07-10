class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> strsMap; 
        vector<vector<string>> output; 

        for (int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end()); // Sort s
            strsMap[s].push_back(strs[i]); // Store the word in strs in s 
        }

        for (auto pair : strsMap){
            output.push_back(pair.second);
        }

        return output;
    }
};
