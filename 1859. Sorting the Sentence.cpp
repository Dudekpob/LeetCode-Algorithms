class Solution {
public:
    string sortSentence(string s) 
    {
        string ss;
        int flag = 1;
        int cnt  = 0;
        vector<pair<int,string>>z;
    
             for(int i = 0; i<s.size(); i++)
             {                 
                    if(s[i] >= 48 && s[i] <= 57)
                    {
                         z.push_back(make_pair(s[i] - 48, ss));
                         ss = "";
                    }
                    else 
                    { 
                        if(s[i] != ' ')
                        {
                         ss+=s[i];
                        }
                    }        
             }          
        sort(z.begin(), z.end());
        for(int i = 0; i<z.size(); i++)
        {
            if(i+1 < z.size())
           ss+=z[i].second+" ";
            else if(i+1 == z.size())
            {
                ss+=z[i].second;
            }
        }
        
        return ss;
    }
};
