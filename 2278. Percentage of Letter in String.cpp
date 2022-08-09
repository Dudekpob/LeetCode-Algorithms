class Solution {
public:
    int percentageLetter(string s, char letter) {
             int percentage = 0;      
            
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == letter)     
             percentage++;
        }
        
        cout<<percentage<<endl;
        if(percentage > 0)
            return floor(((double)percentage / s.size())*100);  
            
            
            return 0;
        
    }
};
