class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) 
    {
           int hour1 = stoi((event1[0]-48)+(event1[1]-48));
      
           int min1 = stoi((event1[3]-48)+(event1[4]-48));
        
           int hour2 = stoi((event2[0]-48)+(event2[1]-48));
      
           int min2 = stoi((event2[3]-48)+(event2[4]-48));
        
           int hour11 = stoi((event1[5]-48)+(event1[6]-48));
      
           int min11 = stoi((event1[8]-48)+(event1[9]-48));
        
           int hour21 = stoi((event2[5]-48)+(event2[6]-48));
      
           int min21 = stoi((event2[8]-48)+(event2[9]-48));
        
           int s_houre1 = hour2-hour1;
            
        
           if(hour1 >= hour2 && min1 < min2 && hour11 )
           {
               
           }
        
        
        if(hour1 > )
          
    }
};
