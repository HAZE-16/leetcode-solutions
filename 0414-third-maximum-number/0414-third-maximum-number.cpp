class Solution {
public:
    int thirdMax(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums)
        {
            st.insert(num);
        }

        // Less than 3 distinct numbers
        if(st.size() < 3)    // if n == 2 return last elemnt 
        {
            return *max_element(st.begin(), st.end());
        }

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int num : st)
        {
            pq.push(num);

            if(pq.size() > 3)
            {
                pq.pop();
            }
        }

        return pq.top();
    }
};