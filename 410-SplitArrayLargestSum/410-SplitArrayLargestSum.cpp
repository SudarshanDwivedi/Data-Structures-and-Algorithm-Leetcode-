// Last updated: 8/9/2025, 5:18:47 PM
class Solution {
public:
    int sums(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }
        return sum;
    }

    int countPartitions(vector<int>& a, int maxSum) {
        int n = a.size();
        int partitions = 1;
        long long subarraySum = 0;
        for (int i = 0; i < n; i++) {
            if (subarraySum + a[i] <= maxSum) {

                subarraySum += a[i];
            } else {

                partitions++;
                subarraySum = a[i];
            }
        }
        return partitions;
    }

    int splitArray(vector<int>& a, int k) {
        int low = *max_element(a.begin(), a.end());
        int high = sums(a);

        while (low <= high) {
            int mid = (low + high) / 2;
            int partitions = countPartitions(a, mid);
            if (partitions > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};