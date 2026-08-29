class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            int count = 0;
            int next = 0;

            for(int j = 0; j < n; j++)
            {
                if(nums[j] == nums[i])
                {
                    count++;
                }

                if(nums[j] == nums[i] + 1)
                {
                    next++;
                }
            }

            if(next > 0)
            {
                ans = max(ans, count + next);
            }
        }

        return ans;
    }
};