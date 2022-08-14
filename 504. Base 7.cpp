
class Solution {
public:
    string convertToBase7(int num) {

         int ret =0;
        int j = 1;
        while(num)
        { 
            ret += (num%7)*j;
            num /=7;
            j*=10;
        }
        
        return to_string(ret);
        
    }
};
