
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int max = 0;
        for(int i = 0; i<prices.size(); i++)
        {
           for(int j = 0; j<prices.size(); j++)
           {
                if(i!=j && i > j && prices[j+1] > prices[j])
                {
                    if(max < prices[j+1] - prices[j])
                    {
                         max = prices[j+1] - prices[j];
                        cout<<max<<endl;
                    }
                    
                }
               else if(i!=j && i > j && prices[j+1] < prices[j])
               {
                   sum +=max;
                   max =0;
               }
           }
        }
        return sum;
    }
};
