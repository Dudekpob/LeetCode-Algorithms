
class Solution {
public:
    int countOperations(int num1, int num2) 
    {
          int num = num1>num2 ? num1 : num2;
          int cnt = 0;
            if(num1 == 0 || num2 == 0)
            {
                return 0;
            }
        
         for(int i = 0; i < num; i++)
         {
             if(num1>num2 )
             {
                 num1 = num1 - num2;
                 cnt++;
             }
             if(num2>num1)
             {
                 num2 = num2 - num1;
                 cnt++;
             }
             if(num2 == num1)
             {
                 num2 = num2 - num1;
                 cnt++;
                 return  cnt;
             }
         }
        return cnt;
    }
};
