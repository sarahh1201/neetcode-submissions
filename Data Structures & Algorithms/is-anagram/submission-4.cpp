class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sMap, tMap;

        // If they are not the same length then the output should be false.
        if (s.length() != t.length()) {
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            sMap[s.at(i)]++;
            tMap[t.at(i)]++;
        }

        return tMap==sMap;
    }
};
