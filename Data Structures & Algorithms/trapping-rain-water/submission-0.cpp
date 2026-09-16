class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int l_max = 0, r_max = 0;
        int w = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {
                if (height[l] >= l_max) l_max = height[l];
                else w = w + (l_max - height[l]);
                l++;
            }
            else {
                if (height[r] >= r_max) r_max = height[r];
                else w = w + (r_max - height[r]);
                r--;
            }
        }
        return w;
    }
};
