// Last updated: 8/9/2025, 5:18:54 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int newsum=0;
        for(int i=0;i<n;i++){
            newsum+=nums[i];
        }
        int ans= sum-newsum;
        return ans;
    }
   
};