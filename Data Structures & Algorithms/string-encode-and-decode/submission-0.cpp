class Solution {
public:

    string encode(vector<string>& strs) {
        string output;

        for(int i = 0; i < strs.size(); i++){
            int len = strs[i].length();

            output += to_string(len) + "#" + strs[i];
        }
        return output; 
    }

    vector<string> decode(string s) {
        vector<string> output; 
        int i = 0; 
    
        while(i<s.length()){
            string num = "";
            while(s[i] != '#'){
                num += s[i];
                i++;
            }

            int len = stoi(num);

            i++; // Skip #

            string word = "";
            for (int j = 0; j < len; j++){
                word += s[i + j];
            }

            output.push_back(word);

            i += len;

        }
        return output;
    }
};
