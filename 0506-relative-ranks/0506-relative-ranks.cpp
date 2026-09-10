class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        vector<int> temp(n, 0);

        for(int i = 0; i < n; i++)
        {
            temp[i] = score[i];
        }

        sort(temp.begin(), temp.end(), greater<int>());

        vector<string> ans;

        for(int i = 0; i < n; i++)
        {
            if(score[i] == temp[0])
            {
                ans.push_back("Gold Medal");
            }
            else if(n > 1 && score[i] == temp[1])
            {
                ans.push_back("Silver Medal");
            }
            else if(n > 2 && score[i] == temp[2])
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                for(int j = 3; j < n; j++)
                {
                    if(score[i] == temp[j])       //temp is sorted so j + 1 is rank of score[i];
                    {
                        ans.push_back(to_string(j + 1));    //index + 1
                        break;
                    }
                }
            }
        }

        return ans;
    }
};