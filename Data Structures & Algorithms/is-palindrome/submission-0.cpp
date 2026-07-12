class Solution {
public:
    bool isPalindrome(string s) {
        string ns; 
        string p;

        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                char c = tolower(s[i]);
                ns += c;
                p = c+p;
            }
        }

        return p==ns;
    }
};
