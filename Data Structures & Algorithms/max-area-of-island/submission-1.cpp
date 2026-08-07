class Solution {
public:

    void dfs(vector<vector<int>>& grid, int i, int j, int& area){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            return;
        }

        area++;
        grid[i][j] = 0;

        dfs(grid, i, j-1, area);
        dfs(grid, i, j+1, area);
        dfs(grid, i-1, j, area);
        dfs(grid, i+1, j, area);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;

        for(int i = 0;i <= grid.size() - 1; i ++ ){
            for(int j = 0; j <= grid[0].size() - 1; j++){
                if(grid[i][j] == 1){
                    int curArea = 0;
                    dfs(grid, i, j, curArea);
                    maxArea = max(maxArea, curArea);
                    curArea = 0;

                }
            }
        }

    return maxArea;
        
    }
};
