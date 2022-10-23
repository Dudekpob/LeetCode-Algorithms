class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> self;
        bool flag=0;
            for(int i = left; i<=right; i++)
            {
                  string sleft = to_string(i); 
                if(i % 10 != 0)
                {
                   for(int j = 0; j<sleft.size(); j++)
                   {
                     
                      
                     if( (sleft[j]-48) != 0)
                     {
                        if( i % (sleft[j]-48) == 0 && i != (sleft[j]-48) )
                        {
                            self.push_back(i);
                        }
                      } 
                   }
                }
              }
            
        return self;
    }
};
