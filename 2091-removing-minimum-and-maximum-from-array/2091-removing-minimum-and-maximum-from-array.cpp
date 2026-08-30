class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());

        if(n == 1)
        {
            return 1;
        }
       int minIndex = -1;
       int maxIndex = -1;
       for(int i=0;i<n;i++)
       {
        if(nums[i] == mini && minIndex == -1)
        {
            minIndex = i;
        }
        if(nums[i] == maxi && maxIndex == -1)
        {
            maxIndex = i;
        }
       }

       int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int front  = right + 1;

        int back = n - left;

        int both = (left +1) + (n-right);

       
        return min({front,back,both});
    }
};