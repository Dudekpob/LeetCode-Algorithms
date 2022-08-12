class Solution {
public:
    int countGoodSubstrings(string s) 
    {
         int cnt = 0;
        vector<string>z;
        int first = 0;
        int second = 0;
        int third = 0;
        for(int i = 0; i<s.size(); i++)
        {   
            if(i+2 < s.size())
            {
                first = s[i] - 48;
                second = s[i+1] - 48;
                third = s[i+2] - 48;
                if(first != second && second != third && first != third)
                    cnt++;
            }
        };
        
  
        
        return cnt;
    }
};
