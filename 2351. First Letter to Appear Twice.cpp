class Solution 
{
public:
    char repeatedCharacter(string s) 
    {
        unordered_map<char, int> map;   
        char ret;
        for(auto it:s)
        {
            if(map.find(it) != map.end())
            {   
                ret = it;
                break;
            }
            map[it]++; 
        }
        return ret;
    }
};
