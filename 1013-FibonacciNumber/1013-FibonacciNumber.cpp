// Last updated: 8/9/2025, 5:18:37 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};