// Last updated: 8/9/2025, 5:18:28 PM
class Solution {
public:
    int findmax(vector<int> &nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        return maxi;
    }

    int sumofD(vector<int>& nums, int divisor){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)nums[i]/double(divisor));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high = findmax(nums);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumofD(nums, mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};