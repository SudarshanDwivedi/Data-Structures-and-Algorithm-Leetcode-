// Last updated: 8/20/2025, 9:45:30 AM
class Solution {
public:
    string intToRoman(int num) {
         static const int    val[] = {1000, 900, 500, 400, 100,  90,  50,  40,  10,   9,   5,   4,   1};
    static const string sym[] = { "M", "CM","D", "CD", "C", "XC","L", "XL", "X","IX","V","IV","I"};

    string res;
    for (int i = 0; i < 13; ++i) {
        while (num >= val[i]) {     // each iteration appends the proper symbol(s)
            num -= val[i];
            res += sym[i];
        }
        if (num == 0) break;
    }
    return res;
    }
};