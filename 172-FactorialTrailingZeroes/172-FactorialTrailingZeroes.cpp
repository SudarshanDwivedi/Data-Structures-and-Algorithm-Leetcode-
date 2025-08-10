// Last updated: 8/10/2025, 10:07:23 PM
class Solution {
public:
    int trailingZeroes(int n) {
        int fact=n;
        // while(n>0){
        //     fact=fact*n;
        //     n--;
        // }
        int count=0;
    
        while(fact>0){
            
           fact /= 5;
            count += fact;
        }
        return count;
    }
};