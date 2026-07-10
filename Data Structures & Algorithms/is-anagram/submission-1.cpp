class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sMap, tMap;
        for(char c : s){
            sMap[c]++;
        }
        for(char c : t){
            tMap[c]++;
        }
        return tMap==sMap;
    }
};
