class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int ans = 0;
        for(int num : nums)
        {
            ans += abs(num - maxi);
        }
        return ans;
    }
};