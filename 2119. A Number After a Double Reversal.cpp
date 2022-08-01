class Solution {
public:
    bool isSameAfterReversals(int num) {
              string k = to_string(num);
              string zero;
              string z = k;
              bool flag = false;
        if(num == 0)
        {
            return true;
        }
            reverse(z.begin(), z.end());
            int l = 0;
            for(int i = 0; i<z.size(); i++)
            {              
         
                     if( z[l] == '0' &&  !flag )
                     {                  
                         z.erase(l, 1);
                     }
                        if( z[l] != '0')
                     {                       
                           flag = true;
                     }
            }
            cout<<z;
           bool kk = false;
        reverse(z.begin(), z.end());
        if(stoi(z) == num)
        {
            kk = true;
        }
    
            return kk;
    }
};
