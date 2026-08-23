class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i =1;i<=n;i++)
        {
          ans.push_back(i);
        }
       int m = ans.size();
       vector<int> arr;
       int i =0;
       int j = 0;
       while(i < n && j < m)
       {
        if(nums[i] == ans[j])
        {
            i++;
            j++;
        }
        else if(nums[i] < ans[j])
        {
            i++;
        }
        else{
            arr.push_back(ans[j]);
            j++;
        }
    
       }
       while(j < m)
       {
        arr.push_back(ans[j]);
        j++;
       }
       return arr;
    }
};