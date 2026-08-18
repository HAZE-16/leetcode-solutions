class Solution {
public:

    int solve(int i, vector<int>& nums, vector<int>& dp) {

        int n = nums.size();

        // Base case
        if(i >= n - 1)
            return 0;

        // Already calculated
        if(dp[i] != -1)
            return dp[i];

        int ans = INT_MAX;

        // Try every possible jump
        for(int j = 1; j <= nums[i]; j++) {

            if(i + j < n) {

                int jumps = solve(i + j, nums, dp);

                if(jumps != INT_MAX) {
                    ans = min(ans, 1 + jumps);
                }
            }
        }

        return dp[i] = ans;
    }

    int jump(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n, -1);

        return solve(0, nums, dp);
    }
};