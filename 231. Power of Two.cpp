class Solution {
public:
    bool isPowerOfTwo(int n) {
           bool power = false;
          if(n > 0)
          {
           bool power = n && !(n & (n - 1));
              return power;
              }
               return power;
    }
};
