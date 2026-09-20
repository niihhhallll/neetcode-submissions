class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !std::isalnum(c); // Remove it if it is NOT alphanumeric
        }), s.end());
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        std::cout << s << std::endl; 
        int left = 0;
        int right = s.size() - 1; 
        while(left < right)
        {
            if(s[left] == s[right])
            {
                left++; 
                right--; 
            }
            else
            {
                return false; 
            }
        }
        return true; 
    }
};
