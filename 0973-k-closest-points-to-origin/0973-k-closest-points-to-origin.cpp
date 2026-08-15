class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i =0;i<n;i++)
        {
         int x = points[i][0];
        int y = points[i][1];
        int distance = x*x + y*y;
        pq.push({distance, {x,y}});
        }
        while(pq.size() >k)
        {
            pq.pop();
        }
      vector<vector<int>> ans;
      while(pq.size() > 0)
      {
        pair<int,int> p = pq.top().second;

        ans.push_back({p.first,p.second});
        pq.pop();
      }
      return ans;
        
    }
};