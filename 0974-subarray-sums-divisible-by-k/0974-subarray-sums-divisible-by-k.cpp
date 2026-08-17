class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;   //rem 0 aprear 1 time in map ofc
        int count = 0;
        int prefix = 0;
        for(int num : nums)
        {
          prefix += num;

          int rem = prefix % k;    //take rem of every prefix sum;

          if(rem <0)              //handle negative number 
          { 
            rem += k;            // -2 = -2 + 5 = 3 
          }
          if(mp.find(rem) != mp.end())
          {
            count += mp[rem];     //count += freq of rem in map;
          }

          mp[rem]++;              //for future iteration does not add it in count;
        }
        return count;
    }
};