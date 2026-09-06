class Solution {
public:
     int solve(string &s,string &t, int n,int m,vector<vector<int>>& dp)
     {
        if(m == t.size())
        {
            return 1;
        }
        if(n == s.size())
        {
            return 0;
        }
        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }
        if(s[n] == t[m])
        {
            return dp[n][m] = solve(s,t,n+1,m+1,dp) + solve(s,t,n+1,m,dp);
        }
        else{
            return dp[n][m] = solve(s,t,n+1,m,dp);
        }
     }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

        return solve(s,t,0,0,dp);
        
    }
};