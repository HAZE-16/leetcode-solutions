class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();

        vector<string> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(to_string(nums[i]));
        }

        sort(ans.begin(), ans.end(),
             [](string a, string b) { return a + b > b + a; });

        string result = "";

        for (string s : ans) {
            result += s;
        }
        if (result[0] == '0')
            return "0";

        return result;
    }
};