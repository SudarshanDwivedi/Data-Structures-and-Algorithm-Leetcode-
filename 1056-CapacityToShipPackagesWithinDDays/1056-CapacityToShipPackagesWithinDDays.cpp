// Last updated: 8/9/2025, 5:18:36 PM
class Solution {
public:
    int numdays(vector<int>& weights, int cap){
        int days=1, load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
                days=days+1;
                load=weights[i];
            }
            else{
                load=load+weights[i];
            }
        }
        return days;
    }   
    
    int sum(vector<int>& weights){
        int sums=0;
        for(int i=0;i<weights.size();i++){
            sums=sums+weights[i];
        }
        return sums;
    } 
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high= sum(weights);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int numday=numdays(weights,mid);
            if(numday<=days){
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