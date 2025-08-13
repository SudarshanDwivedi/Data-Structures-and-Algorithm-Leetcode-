// Last updated: 8/13/2025, 10:10:21 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int left = 1; 
         int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            int count = 0;
            for (int num : nums) {
                if (num <= mid) count++;
            }

            if (count > mid) {
                right = mid;
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }
};