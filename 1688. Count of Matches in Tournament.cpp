class Solution {
public:
    int numberOfMatches(int n) 
    {
        int cnt = 0;
                   for(int i = n; i>0; ) 
                   {
                     
                     
                       
                        if(i % 2 == 0)
                        {
                            cout<<" "<<"=="<<i<<endl;
                            cnt+=i/2;
                            i/=2;
                            cout<<i<<endl;
                        }
                        else  if(i % 2 != 0 && i != 1)
                        {
                             cout<<" "<<"!="<<i<<endl;
                         //    cout<<" "<<i<<" "<<i/2;
                             cnt+=i/2;
                             i=(i/2)+1;
                             cout<<i<<endl;
                        }
                       else if( i == 1)
                       {
                        
                           i--;
                       }
                   }
        return cnt;
    }
};
