// Last updated: 8/9/2025, 5:18:51 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
           swap(s[start],s[end]);
            start++;
            end--;    
               }
                return;
    }
   
};