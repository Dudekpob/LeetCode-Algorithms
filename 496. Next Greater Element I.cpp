class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>z;
        int cnt = 0;
        int temp = 0;
        bool flag = false;
        for(int i = 0; i<nums1.size(); i++)
        {
           for(int j = 0; j<nums2.size(); j++)
           {
              if(nums1[i] == nums2[j])
              {
                  flag = true;
                  cnt  = nums2[j];
                  temp = nums2[j];
              }
              if(cnt < nums2[j] && flag)
              {
                  cnt = nums2[j];
                  break;
              }
               
           }
          
            if(cnt == temp)
            {
                cnt = -1;
            }
            temp = 0;
            z.push_back(cnt);
            cnt = 0;
            flag = false;
        }
          return z;    
    }
};
