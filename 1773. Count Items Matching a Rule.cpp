class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int cnt = 0;
            for(int i = 0; i < items.size(); i++)
            {
                 for(int j = 0; j < items[i].size(); j++)
                 {
                        if(ruleKey == "color" && items[i][1] == ruleValue)
                        {
                            cnt++;
                            break;
                        }
                        if(ruleKey == "type" && items[i][0] == ruleValue)
                        {
                            cnt++;
                             break;
                        }
                        if(ruleKey == "name"  && items[i][2] == ruleValue)
                        {
                            cnt++;
                             break;
                        }
                        
                 }
            
            }
        return cnt;
    }
};
