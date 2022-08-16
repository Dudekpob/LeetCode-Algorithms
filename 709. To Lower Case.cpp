class Solution {
public:
    string toLowerCase(string s) {
        string k;
        for(int i = 0; i<s.size(); i++)
        {
            if(isupper(s[i]))
              k+=tolower(s[i]);
            else
               k+=s[i]; 
        }
        return k;
    }
};
