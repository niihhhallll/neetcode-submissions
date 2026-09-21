class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0; 
        int right = s.size() - 1; 
        int i = 0;
        while(left < right)
        {
            char temp = s[left]; 
            s[left] = s[right]; 
            s[right] = temp; 
            left++; 
            right--; 
            std::cout << s[i] << std::endl; 
            i++; 
        }
      
        return;
    }
};