class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) 
    {
        string first;
        string second;
        string target;
                         for(int i = 0; i<targetWord.size(); i++)
                         {
                                target+= targetWord[i] - 49;                           
                         }
        
                         for(int i = 0; i<firstWord.size(); i++)
                         {
                                first+= firstWord[i]- 49;                           
                         }
        
                         for(int i = 0; i<secondWord.size(); i++)
                         {
                                second+= secondWord[i]- 49;
                         }
    
        double _first = strtod(first.c_str(), NULL);
        double _second = strtod(second.c_str(), NULL);
        double _target = strtod(target.c_str(), NULL);
        
            return _first+_second == _target ? true : false;
        
    }
};
