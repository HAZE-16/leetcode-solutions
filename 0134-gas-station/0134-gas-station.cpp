class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int m = cost.size();
        if(n != m)
        {
            return -1;
        }

        vector<int> ans;
        for(int i =0;i<n;i++)
        {
            int temp = gas[i] - cost[i];

            ans.push_back(temp);
        }

       int total = 0;
        int sum = 0;
        int start = 0;

        for(int i =0;i<ans.size();i++)
        {
            sum += ans[i];
            total += ans[i];

            if(sum <0)
            {
                sum = 0;
                start = i +1;
            }
        }
        if(total < 0)
        {
            return -1;
        }
        return start;
    }
};