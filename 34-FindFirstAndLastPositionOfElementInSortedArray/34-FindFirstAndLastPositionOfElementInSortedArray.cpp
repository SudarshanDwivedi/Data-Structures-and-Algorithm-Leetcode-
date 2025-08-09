// Last updated: 8/9/2025, 5:19:40 PM
class Solution {
public:
    int firstoccur(vector<int> &nums,int x ,int n){
        
        int low=0, high =n-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;

    }

     int lastoccur(vector<int> &nums,int x , int n){
        int low=0, high =n-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first=firstoccur(nums,target,n);
        if(first==-1){
            return {-1,-1};
        }
        int last= lastoccur(nums,target,n);
        return {first,last};
    }
};