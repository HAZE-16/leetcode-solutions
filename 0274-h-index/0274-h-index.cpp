class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int count =0;
        for(int i =0 ;i<=n;i++)
        {
            int ans = 0;
            for(int j = 0;j<n;j++)
            {
                if(citations[j] >= i)
                {
                    ans++;
                    
                }
                if(ans >= i)
                {
                count = max(count,i);
                }
            }
        }
        return count;
    }
};