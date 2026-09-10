class Solution {
public:
    int candy(vector<int>& ratings) {    //2 passs solution

        int n = ratings.size();
        vector<int> lcnt(n,1);
        vector<int> rcnt(n,1);

        for(int i=1;i<n;i++){                 //left to right and left count
            if(ratings[i] > ratings[i-1]){
                lcnt[i] = lcnt[i-1]+1;
            }
        }

        for(int i=n-2;i>=0;i--){           //right to left right count
            if(ratings[i] > ratings[i+1]){
                rcnt[i] = rcnt[i+1]+1;
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+= max(lcnt[i],rcnt[i]);            
        }

        return ans;
    }
};