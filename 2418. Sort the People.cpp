class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<string>pp;
        unordered_map<int, string>p;
        for(int i = 0; i<names.size(); i++)
        {
            std::pair<int,std::string>b (heights[i],names[i]);
            p.insert(b);      
        }
        std::map<int, string> ordered(p.begin(), p.end());
        for(auto it = ordered.begin(); it != ordered.end(); ++it)
        {     cout<<it->first;
           pp.push_back(it->second);
        }
            reverse(pp.begin(), pp.end());

        return pp;
    }
};
