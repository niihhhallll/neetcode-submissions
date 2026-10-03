class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 1)
        {
            return 1; 
        }
        int ptr = s.size() - 1;
        int size = 0;

        while(true)
        {
            if(s[ptr] == ' ' && size == 0)
            {
                ptr--;
                continue; 
            }
            if(s[ptr] == ' ' && size > 0)
            {
                return size; 
            }
            size++;
            ptr--; 
        }
        
    }
};