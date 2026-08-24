class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        vector<int> counts(amount+1,amount+1);
        counts[0] = 0;

        for(int coin: coins){
            for(int amt = coin; amt < counts.size(); amt++){
                counts[amt] = min(counts[amt], counts[amt-coin]+1);
            }
        }

        return counts[amount] == amount+1? -1: counts[amount];
    }
};