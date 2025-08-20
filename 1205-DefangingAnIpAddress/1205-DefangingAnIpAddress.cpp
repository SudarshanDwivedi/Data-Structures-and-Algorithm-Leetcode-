// Last updated: 8/20/2025, 9:44:30 AM
class Solution {
public:
    string defangIPaddr(string s) {
        int index=0;
        string ans;
        while(index < s.size()){
            if(s[index]=='.'){
                ans=ans+"[.]";
            }
            else{
                ans=ans+s[index];
            }
            index++;
        }
        return ans;
    }
};