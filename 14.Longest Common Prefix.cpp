
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        if(n == 0)
            return "";
        
        string ret = "";
        
        sort(strs.begin(), strs.end());
        
        string word_start = strs[0];
        string word_end = strs[n-1];
        
        for (int i = 0; i < word_start.size(); i++){
            if (word_start[i] == word_end[i])
                ret = ret + word_start[i];
            else
                break;
        }
        return ret;
    }
};
