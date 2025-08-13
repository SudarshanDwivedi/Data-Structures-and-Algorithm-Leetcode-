// Last updated: 8/13/2025, 10:10:26 PM
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;       
        }
        num = sum;
    }
    return num;
    }
};