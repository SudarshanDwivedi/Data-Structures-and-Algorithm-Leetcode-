// Last updated: 8/9/2025, 5:18:40 PM
class Solution {
public:
    int findmax(vector<int>& piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
             maxi= max(maxi,piles[i]);
        }
        return maxi;
    }

    long long totalhours(vector<int>& piles,int hourly){
        long long totalhrs=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhrs=totalhrs+ceil((double)piles[i]/(double)hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findmax(piles);
        
        while(low<=high){
            int mid=(high+low)/2;
            double totalhrs=totalhours(piles, mid);
            if(totalhrs<=h){
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};