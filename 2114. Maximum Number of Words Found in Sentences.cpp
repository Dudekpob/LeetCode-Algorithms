class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int cnt = 0;
        string z;
            for(int i = 0; i<sentences.size(); i++)
            {
                z = sentences[i];
                for(int j = 0; j<z.size(); j++)
                { 
                    if(j+1 < z.size())
                    {
                        if(z[j]!= 0 && z[j] == ' ' && z[j+1] != ' ')
                        {
                            cnt++;
                        }
                        
                    }   
                }
                if(cnt > max )
                {
                    max = cnt;
                }
                cnt = 0;
            }
        return max+1;
    }
};
