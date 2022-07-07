class Solution {
public:
    bool digitCount(string num) 
    {
      unordered_map<int,int> map;
         
        for(auto y:num){
            map[y - 48 ]++;
        }
        
        for(int i =0;i<num.length();i++)
        {
            if(map[i] != num[i] - 48 )
                return false;
        }
        return true;
    }
};
