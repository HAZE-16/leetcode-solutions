class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xxor = 0;
        int nonzero = 0;

        for(int x : nums)
        {
            xxor ^= x;
            if(x != 0)
            {
                nonzero = 1;
            }
        }
        if(xxor != 0)
        {
            return n;
        }
        if(nonzero)
        {
            return n-1;
        }
        return 0;
    }
};