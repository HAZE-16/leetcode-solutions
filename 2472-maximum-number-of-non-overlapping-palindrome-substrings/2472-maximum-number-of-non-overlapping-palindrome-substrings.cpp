class Solution {
public:

    bool ispalin(string &s, int left, int right)
    {
        while(left < right)
        {
            if(s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    int maxPalindromes(string s, int k)
    {
        int n = s.size();
        int count = 0;
        int i = 0;

        while(i + k <= n)
        {
            if(ispalin(s, i, i + k - 1))
            {
                count++;
                i += k;
            }

            else if(i + k + 1 <= n &&
                    ispalin(s, i, i + k))
            {
                count++;
                i += k + 1;
            }

            else
            {
                i++;
            }
        }

        return count;
    }
};