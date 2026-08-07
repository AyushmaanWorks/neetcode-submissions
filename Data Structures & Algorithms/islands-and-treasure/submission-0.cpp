    class Solution {
    public:

        void islandsAndTreasure(vector<vector<int>>& grid) {
            queue<pair<int, int>> chests;


            for(int i  = 0; i <= grid.size() - 1; i++){
                for(int j =0 ; j <= grid[0].size() - 1; j++){
                    if(grid[i][j] == 0){
                        chests.push({i,j});
                        
                    }
                }
            }

            while(!chests.empty()){

                auto [i,j] = chests.front();
                chests.pop();

                int dr[4] = {-1,1,0,0};
                int dc[4] = {0,0,-1,1};

                for(int k = 0; k<4; k++){
                    int ni = i+dr[k];
                    int nj = j+dc[k];

                    if(ni<0||nj<0||ni>=grid.size()||nj>=grid[0].size()||grid[ni][nj]!=INT_MAX){
                        continue;
                    }

                    chests.push({ni,nj});

                    grid[ni][nj] = grid[i][j] + 1;
                }


                }

                
            }


    };
