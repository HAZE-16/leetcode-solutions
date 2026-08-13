class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++)
        {
            if(k > 0)
            {
                int temp = 0;

                for(int j = 1; j <= k; j++)
                {
                    temp += code[(i + j) % n];
                }

                ans[i] = temp;
            }
            else if(k == 0)
            {
                return ans;
            }
            else
            {
                int temp = 0;

                for(int j = 1; j <= -k; j++)
                {
                    temp += code[(i - j + n) % n];
                }

                ans[i] = temp;
            }
        }

        return ans;
    }
};