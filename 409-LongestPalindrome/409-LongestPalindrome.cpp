// Last updated: 8/9/2025, 5:18:49 PM
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26,0);
        vector<int> upper(26,0);
        for(int i=0; i<s.size();i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
        }

        int count=0;
        bool odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){
                count=count+lower[i];
            }
            else{
                count=count+lower[i]-1;
                odd=1;
            }

            if(upper[i]%2==0){
                count=count+upper[i];
            }
            else{
                count=count+upper[i]-1;
                odd=1;
            }
            
        }
        return (count+odd);
    }
};