class Solution {
public:
    char findTheDifference(string s, string t) 
    {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            int sz = s.size();
            int tz = t.size();
            
        if(sz > tz)
        {
            for(int i = 0; i< sz; i++)
                {
                    if(s[i] != t[i])
                    {
                        return s[i];
                    }
                }
        }
        
         
        if(tz > sz)
        {
            for(int i = 0; i< tz; i++)
                {
                    if(t[i] != s[i])
                    {
                        return t[i];
                    }
                }
        }
        
        return 'k';
    }
};
