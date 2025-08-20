// Last updated: 8/20/2025, 9:45:00 AM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0) {
            columnNumber--; 
            char c = 'A' + (columnNumber % 26);
            result = c + result;
            columnNumber /= 26;
        }
        return result;
    }
};