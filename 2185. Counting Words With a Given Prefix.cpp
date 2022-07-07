class Solution {
public:
    int prefixCount(vector<string>& words, string pref)
    {
        string k;
        int cnt = 0;
        
                 for(int i = 0; i<words.size(); i++)
                     {
                        string z = words[i];
                        bool isPrefix = std::mismatch(pref.begin(), pref.end(),
                         z.begin(), z.end()).first == pref.end();     
                     if(isPrefix)
                     {
                         cnt++;
                     }
                     
                     }
         return cnt;
    }
};
