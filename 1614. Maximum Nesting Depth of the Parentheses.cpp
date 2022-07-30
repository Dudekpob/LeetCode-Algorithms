class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ret;
        for(int i = 0; i<s.size(); i++)
        {
              if(s[i] != ' ')
            {
             temp+=s[i];
            }
               
                if(s[i] == ' ' || i+1 == s.size())
                {
                    if(s[i] == ' ')
                    {
                   reverse(temp.begin(),temp.end());
                    ret+=temp+" ";
                    temp = "";
                     }
                  else  if(i+1 == s.size())
                    {           
                      
                              reverse(temp.begin(),temp.end());
                      
                                ret+=temp;
                    }
                }
          
             
        }
         
        return ret;
    }
};
