class Solution {
public:

    void dfs(vector<vector<char>>& grid,  int i, int j){
        if(i < 0|| i>=grid.size() ||j<0 ||j>=grid[0].size()||grid[i][j] == '0'){
            return;
        }

        grid[i][j]  = '0';

        dfs(grid, i-1, j);
        dfs(grid, i, j-1);
        dfs(grid, i+1, j);
        dfs(grid, i, j+1);


 }


    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        for(int i = 0 ; i<=grid.size() - 1; i++){

            for(int j = 0; j<=grid[0].size() - 1; j++){
                
                if(grid[i][j] == '1'){
                    islands++;
                    dfs(grid, i , j);
                }

            }

        }

        return islands;

    }
};
