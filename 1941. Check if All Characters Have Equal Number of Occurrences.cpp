class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        bool flag = 0;
        unordered_map<int, int> map;
        for(int i = 0; i<s.size(); i++)
        {    
            map[s[i]]++;   
        }
        auto it = map.begin();
        
        int cnt = it->second;
       for(auto x: map)
       {
           if(x.second != cnt)          
                return false;     
           
       }
       
        return true;
    }
};
