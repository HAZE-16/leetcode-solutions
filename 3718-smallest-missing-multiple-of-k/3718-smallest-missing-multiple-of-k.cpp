class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;
        for(int num : nums)
        {
            st.insert(num);
        }
        int x = k;

        while(st.count(x))
        {
            x = x + k;
        }
        return x;
    }
};