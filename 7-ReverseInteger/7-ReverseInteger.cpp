// Last updated: 8/9/2025, 5:19:55 PM
class Solution {
public:
    int reverse(int x) {
        int res=0;
        
        while(x!=0){
            int a= x%10;
            x=x/10;

             if (res > INT_MAX / 10 || (res == INT_MAX / 10 && a > 7)) {
            return 0;
        }
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && a < -8)) {
            return 0;
        }
            res=res*10+a;
            
        }
        return res;
    }
    
};