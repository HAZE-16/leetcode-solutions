#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool balanced(vector<int>& freq)
    {
        int x = 0;

        for(int i = 0; i < 26; i++)
        {
            // Ignore characters that are not present
            if(freq[i] > 0)
            {
                // First frequency becomes our reference
                if(x == 0)
                {
                    x = freq[i];
                }
                // If any frequency is different
                else if(freq[i] != x)
                {
                    return false;
                }
            }
        }

        return true;
    }

    int longestBalanced(string s)
    {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            vector<int> freq(26, 0);

            for(int j = i; j < n; j++)
            {
                // Increase frequency of current character
                freq[s[j] - 'a']++;

                // Check if current substring is balanced
                if(balanced(freq))
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
