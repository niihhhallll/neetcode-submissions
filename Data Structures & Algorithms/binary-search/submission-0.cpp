class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; 

        while (left <= right) {
            // Prevents potential integer overflow compared to (left + right) / 2
            int middle = left + (right - left) / 2; 

            if (nums[middle] == target) {
                return middle;
            }
            else if (nums[middle] > target) {
                right = middle - 1;
            }
            else {
                left = middle + 1; 
            }
        }

        return -1; // Target not found
    }
};

