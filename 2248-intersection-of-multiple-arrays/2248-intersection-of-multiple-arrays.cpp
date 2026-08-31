class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mp;

        for(auto arr : nums)
        {
            for(int j : arr)   //treat ut as 2D matrix;
            {
                mp[j]++;
            }
        }
        
        vector<int> ans;

        for(auto it : mp)
        {
            if(it.second == nums.size())
            {
                 ans.push_back(it.first);
            }
        } 
        return ans;
    }
};