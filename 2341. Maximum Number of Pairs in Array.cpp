class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) 
    {
        int part1 = 0, part2 = 0;
        unordered_map<int, int> map;
        for(auto x: nums) 
        map[x]++;
       
        
        
   
        for(auto x: map)
        {
            part1 += x.second/2;
            part2 += x.second%2;
        }
        return {part1, part2};
    }
};
