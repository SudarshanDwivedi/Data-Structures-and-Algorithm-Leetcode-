// Last updated: 8/20/2025, 9:44:39 AM
class Solution {
public:

    int kmpmatch(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if (m == 0) return 0;

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return 1; 
        }
        
        return -1; 
    }

    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }

        int repeat=1;
        string temp=a;
        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        if(kmpmatch(temp,b)==1){
            return repeat;
        }
        if(kmpmatch(temp+a,b)==1){
            return repeat+1;
        }
        return -1;
    }
};