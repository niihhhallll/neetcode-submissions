class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 1)
        {
            return 1; 
        }
        int ptr = s.size() - 1;
        int size = 0;
        bool isLastWordFound = false; 
        bool isFinished = false; 
        // hello world
        while(isFinished == false)
        {
            if(s[ptr] == ' ' && isLastWordFound == false)
            {
                continue; 
            }
            if(s[ptr] == ' ' && isLastWordFound == true)
            {
                isFinished = true; 
            }
            if(s[ptr] != ' ')
            {
                size++; 
                isLastWordFound = true; 
            }
            ptr--;
        }
        return size;
    }
};