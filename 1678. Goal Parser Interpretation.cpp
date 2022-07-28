class Solution {
public:
    string interpret(string command) 
    {
            string parser = "";
            for(int i = 0; i<command.size(); i++)
            {
                    if(command[i] == 'G')
                    {
                        parser+='G';
                    }
                if(i+1<=command.size())
                {
                    if(command[i] == '(' && command[i+1] == ')')
                    {
                        parser+='o';
                    }                   
                } 
                if(i+3<=command.size())
                {
                     if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')')
                    {
                       parser+="al"; 
                    }
                }
            }
        return parser;
    }
};
