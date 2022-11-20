class Solution {
public:
    string addBinary(string a, string b) 
    {
         unsigned long adec = std::bitset<8>(a).to_ulong();
         unsigned long bdec = std::bitset<8>(a).to_ulong();

         return to_string(adec+bdec);

    }
};
// @lc code=end

