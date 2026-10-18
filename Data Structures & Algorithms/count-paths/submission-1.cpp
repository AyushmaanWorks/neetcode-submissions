class Solution {
public:

    int memoz(vector<vector<int>>& memo, int x, int y){
        if(x<0 || y< 0){
            return 0;
        }

        if(x==0 && y==0){
            return 1;
        }

        if(memo[x][y]!=-1){
            return memo[x][y];
        }
        
        memo[x][y] = memoz(memo, x-1, y) + memoz(memo, x, y-1);
        return memo[x][y];
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n,-1));
        return memoz(memo, m-1, n-1);

    }
};
