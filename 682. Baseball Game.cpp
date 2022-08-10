class Solution {
public:
    int calPoints(vector<string>& ops) {
            int max = 0;
        vector<int>z;
        for(auto x: ops)
        {
             if(x == "C")
                 z.pop_back();
          else if(x == "D")
                z.push_back(z.back()*2);
          else if(x == "+")
                z.push_back(z.back()+z[z.size()-2]);
          else 
                z.push_back(stoi(x));
        }
        return accumulate(z.begin(), z.end(), 0);
    }
};


