class Solution {
public:
    bool isPalindrome(int x) {
           
        string s = to_string(x);

        
        for(int i = 0; i < s.size(); i++)
        {
            cout<<s[i]<<" "<<s[s.size()-i-1]<<endl;
           
                if(isdigit(s[i]) && s[i] == s[s.size()-i-1])
                {
                    continue;
                }
            
            else
    
                return false;
                
        }
        return true;
        
    }
};
