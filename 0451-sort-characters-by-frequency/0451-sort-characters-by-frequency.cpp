class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(char ch : s)
        {
            mp[ch]++;
        }

        priority_queue<pair<int, char>> pq;

        for(auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        string ans = "";

        while(pq.size() > 0)
        {
            int freq = pq.top().first;
            char ch = pq.top().second;

            pq.pop();  // remove processed character

            for(int i = 0; i < freq; i++)
            {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};