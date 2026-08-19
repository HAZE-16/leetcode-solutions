class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        // k == n → only one window
        if(k == n)
            return *max_element(nums.begin(), nums.end());

        int ans = -1;

        // First element belongs to exactly one window
        if(mp[nums[0]] == 1)
            ans = max(ans, nums[0]);

        // Last element belongs to exactly one window
        if(mp[nums[n-1]] == 1)
            ans = max(ans, nums[n-1]);

        // k == 1: every element is a separate window
        if(k == 1) {
            ans = -1;

            for(auto it : mp) {
                if(it.second == 1)
                    ans = max(ans, it.first);
            }
        }

        return ans;
    }
};