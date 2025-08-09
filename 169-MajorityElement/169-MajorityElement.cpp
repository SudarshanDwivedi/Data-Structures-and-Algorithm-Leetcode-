// Last updated: 8/9/2025, 5:19:03 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if (nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                cnt++;
            }
            
        }
        if(cnt>(nums.size()/2)){
            return element;
        }
    return -1;
    }
};