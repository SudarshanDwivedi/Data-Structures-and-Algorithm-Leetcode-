// Last updated: 8/20/2025, 9:45:32 AM
class Solution {
public:
    int maxArea(vector<int>& height) {
          int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int area = h * width;
            maxArea = max(maxArea, area);

            // Move the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};