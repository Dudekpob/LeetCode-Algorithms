class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lowercase = false;
        bool upercase = false;
        bool onedigit = false;
        bool specialcharackter = false;       
        bool samecharacker = false;
        
        if(password.size()<8)
        {
            return false;
        }
        
        for(int i = 0 ; i<password.size(); i++)
            {
                    if((int)password[i] >= 65 && (int)password[i]  <= 90)
                    { 
                        cout<<i<<"lowercase";
                        lowercase = true;
                    }
             if((int)password[i] >= 97 && (int)password[i]  <= 122)
                    {
                        cout<<i<<"upercase";
                        upercase = true;
                    }
                    if(password[i] == '1' || password[i] == '0' || password[i] == '2' || password[i] == '4' || password[i] == '5' || password[i] == '3' || password[i] == '6' || password[i] == '7' ||    password[i] == '8' || password[i] == '9' )
                    {
                        onedigit = true;
                    }
              if(password[i] == '!' || password[i] == '@' ||password[i] == '#' || password[i] == '$' ||
                      password[i] == '%' || password[i] == '^' ||password[i] == '&' || password[i] == '*' ||
                      password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+'  )
                    {
                        specialcharackter = true;
                    }
               
                if(i+1<password.size())
                {
                    if(password[i] == password[i+1])
                    {
                        return false;
                    }
                }
            }
        
        std::cout<<lowercase<<"   "<<upercase<<"  "<<onedigit<<"  "<<specialcharackter;
        
        if(specialcharackter && onedigit && upercase && lowercase)
        {
        return true;
            }
        else 
            return false;
    }
};
