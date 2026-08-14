class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;

        // Count frequency
        for(int x : nums) {
            mp[x]++;
        }

        // Sort by frequency
        // If frequency is same, larger number comes first
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if(mp[a] != mp[b])
                return mp[a] < mp[b];

            return a > b;
        });

        return nums;
    }
};