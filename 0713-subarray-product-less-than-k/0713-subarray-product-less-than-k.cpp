class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 0)
        {
            return 0;
        }
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            long long prod = 1;

            for(int j = i; j < n; j++)
            {
                prod = prod * nums[j];

                if(prod >= k)
                {
                    break;
                }
                count++;
            }
        }

        return count;
    }
};