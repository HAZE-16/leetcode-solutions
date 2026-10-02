class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int par = 0;
        int ans =0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                par++;
            }
            if(s[i] == ')')
            {
                par--;
            }
            ans = max(ans,par);
        }
        return ans;
    }
};