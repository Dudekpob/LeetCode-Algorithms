class Solution {
public:
    
    string removeDuplicates(string s) 
    {
               int arr[25];
                for(int i = 0; i<sizeof(arr) / sizeof(int); i++)
                {
                       arr[i] = 0;
                }
                 for(int i = 0; i<s.size(); i++)
                 {
                       arr[s[i]-97]++;
                 }
            
                string k = "";
                for(int i = 0; i<sizeof(arr) / sizeof(int); i++)
                {
                      if(arr[i] % 2 == 0)
                      {
                         continue;
                      }
                    else
                    {
                        k+=arr[i]+96;
                    }
                }

              return k;
    }
};
