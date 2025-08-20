// Last updated: 8/20/2025, 9:44:32 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int open=0;

        for(char c: s){
            if(c=='('){
                if(open>0){
                    result+=c;    
                }
                open++;
                
            }
            else{
                    open--;
                    if(open>0){
                        result+=c;
                    }
                }
        }
        return result;

    }
};