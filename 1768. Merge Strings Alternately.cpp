class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string z;
        
        if(word2.size() >= word1.size())
          {
                for(int i = 0; i<word2.size(); i++)
                {
                    cout<<word2[i]<<endl;
                     if(i < word1.size())
                     {
                         z+=word1[i];
                     }
                    z+=word2[i];
                }
           }             
         if(word2.size() < word1.size())
          {
                for(int i = 0; i<word1.size(); i++)
                {
                     cout<<word1[i]<<endl;
                      z+=word1[i];
                     if(i < word2.size())
                     {
                         z+=word2[i];
                     }
                  
                }
           }
       return z; 
    }
};
