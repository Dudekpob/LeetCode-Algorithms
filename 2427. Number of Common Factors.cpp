class Solution {
public:
    int commonFactors(int a, int b) 
    {
        int counter = 0;
        if(a >= b)
            for(int i = 0; i<=a; i++)
            {
                if(i != 0 &&  a % i == 0 && b % i == 0 )
                {
                    counter++;
                }
            }
        if(b > a)
            for(int i = 0; i<b; i++)
            {
                if(i != 0 &&  a % i == 0 && b % i == 0)
                {
                     counter++;
                }
            }
        
        return counter;
    }
};
