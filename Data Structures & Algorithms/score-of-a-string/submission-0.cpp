class Solution {
public:
    int scoreOfString(string s) {
        int size = 0; 
        for(int i = 0; i < s.size() - 1; i++)
        {
            int a = s[i];
            int b = s[i + 1];
            if(a > b)
            {
                size += a - b; 
            }
            else 
            {
                size += b - a; 
            }
        }
        return size;
    }
};