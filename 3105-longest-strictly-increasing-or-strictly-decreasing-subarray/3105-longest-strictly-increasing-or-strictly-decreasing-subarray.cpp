class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return 1;

        int ans = 1;
        int dec = 1;
        int maxi = 1;

        for(int i = 1; i < n; i++)
        {
            if(nums[i-1] < nums[i])
            {
                ans++;
                dec = 1;
            }
            else if(nums[i-1] > nums[i])
            {
                dec++;
                ans = 1;
            }
            else
            {
                ans = 1;
                dec = 1;
            }

            maxi = max(maxi, max(ans, dec));
        }

        return maxi;
    }
};