// Last updated: 8/9/2025, 5:19:53 PM
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int N = s.size();
        for(int i = 0; i < N; i++){
            if(s[i] != s[N-1-i]) return false;
        }
        return true;
    }
};