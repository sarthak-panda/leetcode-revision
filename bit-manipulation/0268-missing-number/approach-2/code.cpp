class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        // Intuition: XOR indices and values, pairs cancel, the missing one remains
        int n = nums.size();
        // n is never an index, so start with it
        int r = n;
        for (int i = 0; i < n; i++) {
            r ^= nums[i];
            r ^= i;
        }
        return r;
    }
};
