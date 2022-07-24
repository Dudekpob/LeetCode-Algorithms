class Solution {
public:
    string greatestLetter(string s)
    {
        int max = 0;
        string greatest = "";
        vector<char> kk;
        
            for(int i = 0; i<s.size(); i++)
            {
                 for(int j = 0; j<s.size(); j++)
                 {
                          if(s[i] > 0 && i!=j)
                          {
                              if(s[i] == s[j] - 32 || s[i] +32 == s[j])
                              {
                                  kk.push_back(s[i]);
                              }
                          }
                 }
            }
        

        for(int i = 0; i<kk.size(); i++)
        {
            if(kk[i] > 97)
            {
                kk[i] = kk[i] - 32;
            }
            if(kk[i] > max)
            {
                max = kk[i];
            }
        }
       if(max>0)
       {
             char ag =  '0' + max-48;
        cout<<max;
        greatest+=ag;
           return greatest;
       }
        return greatest;
    }
};
