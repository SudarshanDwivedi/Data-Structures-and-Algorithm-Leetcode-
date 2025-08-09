// Last updated: 8/9/2025, 5:18:31 PM
class Solution {
public:
    int findmin(vector<int> &bloomDay){
        int mini=INT_MAX;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            mini=min(bloomDay[i],mini);
        }
        return mini;
    }
    int findmax(vector<int> &bloomDay){
        int maxi=INT_MIN;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            maxi=max(bloomDay[i],maxi);
        }
        return maxi;
    }
    bool possible(vector<int> &bloomDay, int day, int m, int k){
        int count=0, nomboq=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                count++;
                if(count==k){
                    nomboq++;
                    count=0;
                }}
                else{
                    count=0;
                }
                
            
            if(nomboq>=m){return true;}
            }
              
            return false;
            
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=findmin(bloomDay);
        int high = findmax(bloomDay);
        int n= bloomDay.size();
          if(((long long)m*k)>n){
                return -1;
            }
            int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)==true){
                result =mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
          
        }
        return result;

        
    }
};