class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        priority_queue<int, vector<int>, greater<int>> pq;

        int n = nums.size();

        if(n == 2)
        {
            return nums[n - 1];
        }

        unordered_set<int> st;

        for(int num : nums)
        {
            st.insert(num);
        }

        for(int num : st)
        {
            pq.push(num);

            if(pq.size() > 3)
            {
                pq.pop();
            }
        }

        if(pq.size() < 3)
        {
            return nums[n - 1];
        }

        return pq.top();
    }
};