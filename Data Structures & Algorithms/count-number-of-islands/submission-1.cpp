class Solution {
public:

    void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& seen){
        if(x<0 || y<0 || x>= grid.size()|| y>= grid[0].size() || seen[x][y] == true){
            return;
        }
        if(grid[x][y] == '0'){
            return;
        }
        seen[x][y] = true;

        dfs(x-1, y, grid, seen);
        dfs(x+1, y, grid, seen);
        dfs(x, y-1, grid, seen);
        dfs(x, y+1, grid, seen);


    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int islands = 0;

        vector<vector<bool>> seen(r, vector<bool>(c, false));
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1' && seen[i][j] == false){
                    islands++;
                    cout<<i<<" "<<j<<endl;
                    dfs(i, j, grid, seen);
                }
            }
        }

        return islands;
    }
};
