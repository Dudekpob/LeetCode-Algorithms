class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
                vector<int> k;
         int max = s.size();
         int low = 0;
        
            for(int i = 0; i<s.size(); i++)
            {
                if(s[i] == 'D')
                {
                    k.push_back(max);
                    max--;
                }
                
                if(s[i] == 'I')
                {
                    k.push_back(low);
                    low++;
                }
            }
        if(s[s.size()-1] == 'D' )
        {
            k.push_back(max);
        }
       else if(s[s.size()-1]== 'I' )
        {
            k.push_back(low);
        }
                return k;
    }
};
