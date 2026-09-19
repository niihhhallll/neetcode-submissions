class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> myset; 
        for(auto a : nums)
        {
            myset.insert(a); 
        }
        if(myset.size() == nums.size())
        {
            return false;
        }
        else
        {
            return true; 

        }
    }
};