/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>lastword;
        string word = "";
        for (int i = 0; i < s.size(); i++)
        {
             if(s[i] != ' ')
             {
                word+=s[i];
             }
             else if(s[i] == ' ')
             {
                if (word.size() > 0)
                {
                    lastword.push_back(word);
                }
                word = "";
             }
             
             
        }
        if(word.size() > 0)
        {
            lastword.push_back(word);
        }
        
        return lastword[lastword.size()-1].size();
    }
};
// @lc code=end

