class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        vector<int> temp = score;
        sort(temp.begin(), temp.end(), greater<int>());  //reverse(temp) work same 

    
        map<int, int> mp;      //sccore -> rank 

        for(int i = 0; i < n; i++)
        {
            mp[temp[i]] = i + 1;
        }

        vector<string> ans;

        // Go through original score array
        for(int i = 0; i < n; i++)
        {
            int rank = mp[score[i]];

            if(rank == 1)
            {
                ans.push_back("Gold Medal");
            }
            else if(rank == 2)
            {
                ans.push_back("Silver Medal");
            }
            else if(rank == 3)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                ans.push_back(to_string(rank));
            }
        }

        return ans;
    }
};