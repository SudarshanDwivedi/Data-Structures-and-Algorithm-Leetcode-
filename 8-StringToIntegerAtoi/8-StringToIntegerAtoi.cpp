// Last updated: 8/10/2025, 10:07:53 PM
class Solution {
public:
    int myAtoi(string s) {
         int i = 0;
         int n = s.size();

    while (i<n && s[i] == ' ') {
        i++;
    }
    
    int sign = 1;
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        if (s[i] == '-') sign = -1;
        i++;
    }
    
    long result = 0; 
    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';
        
        if (result > (LONG_MAX / 10) || 
           (result == (LONG_MAX / 10) && digit > INT_MAX % 10)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        
        result = result * 10 + digit;
        i++;
    }
    
    result *= sign;
    if (result < INT_MIN) return INT_MIN;
    if (result > INT_MAX) return INT_MAX;
    
    return (int)result;
    }
};