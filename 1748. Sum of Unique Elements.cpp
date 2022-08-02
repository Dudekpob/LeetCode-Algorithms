class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
         int max = 0;
         unordered_map<int,int> kol;
         for(auto x: nums)
             kol[x]++;
             
             int sum = 0;
         for(auto x: kol)
         {
             if(x.second == 1)
             {
                 sum+=x.first;
             }
         }
              
             return sum;
        
    }
};
