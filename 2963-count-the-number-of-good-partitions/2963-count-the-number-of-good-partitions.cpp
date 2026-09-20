class Solution {
public:
int M = 1e9 + 7;
    int numberOfGoodPartitions(vector<int>& nums) {

        unordered_map<int,int> mp;  //store nums[i] -> last index for  j;

         for(int i =0;i<nums.size();i++)
         {
            mp[nums[i]] = i;
         }
        int i =0;
        int j =0;
        j = max(j,mp[nums[0]]);    //for valid window last occr of j like 1 2 1 4 so 1 -> 1 one partition 
        int ans = 1;
        while(i < nums.size())
        {
            if(i > j)
            {
                ans = (ans * 2) % M;
            }
            j = max(j,mp[nums[i]]);
            i++;
        }
        return ans;
    }
};