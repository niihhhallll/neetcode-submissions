class Solution {
public:
    int scoreOfString(string s) {
        auto init = []() {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
             return 0;
        }();
        int size = 0; 
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] > s[i + 1])
            {
                size += s[i] - s[i + 1];
            }
            else
            {
                size += s[i + 1] - s[i];
            }
        }
        return size;
    }
};