// Last updated: 8/9/2025, 5:19:46 PM
class Solution {
public:
    bool isValid(string s) {
         stack<char> st;

    for (char c : s) {
       
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        
        else {
            if (st.empty()) return false;  

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.empty(); 
}
    
};