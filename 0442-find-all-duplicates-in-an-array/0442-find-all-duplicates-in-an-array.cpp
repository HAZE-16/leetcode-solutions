class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> freq(nums.size() + 1, 0);   //we need num til n so n +1     like  n and  n - 1 
       vector<int> ans;

       for(int i = 0;i<nums.size();i++)
       {
        freq[nums[i]]++;
       }

       for(int i = 1;i<freq.size();i++)
       {
        if(freq[i] > 1)
        {
            ans.push_back(i);
        }
       }
       return ans;
    }
};