class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int maxscore = 0;
        int score = 0;
        int i =0;
        int j = n-1;
        while(i<=j)
        {
            if(power >= tokens[i])
            {
                score += 1;
                power = power - tokens[i];
                maxscore = max(maxscore, score);
                i++;
            }
            else if(score >= 1)
            {
                power += tokens[j];
                score -= 1;
                j--;
            }
           else{
            return maxscore;
           }
        }
        
        return maxscore;
    }
};