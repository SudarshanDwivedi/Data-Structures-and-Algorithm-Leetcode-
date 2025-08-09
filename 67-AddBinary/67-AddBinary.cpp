// Last updated: 8/9/2025, 5:19:28 PM
class Solution {
public:
    string addBinary(string a, string b) {
            string result = "";
    int carry = 0;

    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';  // Convert char to int
        if (j >= 0) sum += b[j--] - '0';

        carry = sum / 2;
        result = to_string(sum % 2) + result; // Append to front
    }

    return result;

    }
};