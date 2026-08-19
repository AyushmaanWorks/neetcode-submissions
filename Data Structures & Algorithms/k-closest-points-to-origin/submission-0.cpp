class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> mh;
        
        vector<vector<int>> kclosest;

        for(int i = 0; i < points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];

            int dist = x * x + y * y;
            mh.push({dist, points[i]});

            while(mh.size() > k){
                mh.pop();
            }

        }

        for(int i = 0; i < k; i++){
            vector<int> temp = mh.top().second;
            mh.pop(); 
            kclosest.push_back(temp);
        }

        return kclosest;
    }
};
