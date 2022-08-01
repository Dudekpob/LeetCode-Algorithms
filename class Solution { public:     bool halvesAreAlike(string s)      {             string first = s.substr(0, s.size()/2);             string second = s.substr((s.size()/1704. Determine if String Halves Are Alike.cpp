class Solution {
public:
    bool halvesAreAlike(string s) 
    {
            string first = s.substr(0, s.size()/2);
            string second = s.substr((s.size()/2), s.length());
            int cnt_f = 0;
            int cnt_s = 0;
            for(int i = 0; i<first.size(); i++)
            {
                cout<<first[i]<<" ";
                if(first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u' || 
                  first[i] == 'A' || first[i] == 'E' || first[i] == 'I' || first[i] == 'O' || first[i] == 'U')
                {
                    cnt_f++;
                }
            }
            
            for(int i = 0; i<second.size(); i++)
            {
                cout<<second[i]<<" ";
                  if(second[i] == 'a' || second[i] == 'e' || second[i] == 'i' || second[i] == 'o' || second[i] == 'u'                      ||  second[i] == 'A' || second[i] == 'E' || second[i] == 'I' || second[i] == 'O' || second[i] == 'U')
                {
                    cnt_s++;
                }
            }
        return cnt_f == cnt_s ? true : false;
    }
};
