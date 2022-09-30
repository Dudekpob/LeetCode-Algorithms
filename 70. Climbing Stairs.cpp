class Solution {
public:
    int climbStairs(int n) 
    { 
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(n == 3)
            return 3;
        int cnt_one = 1;
        int cnt = 2;
        int counter = 0;
       vector<int>z;
              z.push_back(0);
        z.push_back(1);
         z.push_back(2);
          z.push_back(3);
        if(n>3)
        {
            for(int i = 3; i<n; i++)
            {
                
                counter = z[i-1]+z[i];
                z.push_back(counter);
            }
        }
        return counter;
    }
};
