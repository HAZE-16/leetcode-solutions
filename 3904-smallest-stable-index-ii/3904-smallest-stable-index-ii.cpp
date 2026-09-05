class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixmin(n);
        vector<int> prefixmax(n);

        prefixmax[0] = nums[0];
        suffixmin[n-1] = nums[n-1];

        for(int i =1;i<nums.size();i++)
        {
            prefixmax[i] = max(prefixmax[i-1],nums[i]);       //prefixamx = nums[0] awlays and comapre with next
        }
        for(int i = nums.size()-2;i>=0;i--)
        {
            suffixmin[i] = min(suffixmin[i+1],nums[i]);      //last index min and compare backword with n-2
        }

        for(int i =0;i<n;i++)
        {
            if(prefixmax[i] - suffixmin[i] <= k)
            {
                return i;
            }
        }
        return -1;
    }
};