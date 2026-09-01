class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n+1);
        for(int i = 1;i<=n;i++)
        {
            ans[i] = to_string(i);
        }

        for(int i =1;i<=n;i++)
        {
            if(i % 3 == 0)
            {
                ans[i] = "Fizz";
            }

            if(i % 5 == 0)
            {
                ans[i] = "Buzz";
            }

            if(i % 3 == 0 && i % 5 == 0)
            {
                ans[i] = "FizzBuzz";
            }
        }
        ans.erase(ans.begin());
        return ans;
    }
};