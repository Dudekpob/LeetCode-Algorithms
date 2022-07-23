class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string temp;
        int cnt =0;
        for(int i = 0; i<words.size(); i++)
        {
            temp = words[i];
            for(int j = 0; j<temp.size(); j++)
            {
           
                  if(temp[0+j] == temp[temp.size()-1-j])
                 {
                     cnt++;
                 }
                     if(cnt == temp.size())
                {
                    return temp;
                }
           
            }
            cnt = 0;
        }
        return "";
    }
};
