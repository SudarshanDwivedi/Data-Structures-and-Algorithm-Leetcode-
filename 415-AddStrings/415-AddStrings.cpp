// Last updated: 8/20/2025, 9:44:42 AM
class Solution {
public:
    
    string add(string num1, string num2){
        int index1= num1.size()-1;
        int index2= num2.size()-1;
        int carry=0;
        int sum;
        string ans;
        
        while(index2>=0){
            sum= (num1[index1]-'0') + (num2[index2]-'0')+carry;
            carry=sum/10;
            char c = '0'+ sum %10;
            ans+=c;
            index2--;
            index1--;
        }
        while(index1>=0){
            sum= (num1[index1]-'0') + carry;
            carry=sum/10;
            char c = '0'+ sum%10;
            ans+=c;
            index1--;
        }
        if(carry){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        if(num2.size()>num1.size()){
            return add(num2,num1);

        }
        else{
            return add(num1, num2);
        }
    }

};