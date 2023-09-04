class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        // array of change method count, init as 0
        // +1 extra space is for $0
        vector<int> changeMethodCount(amount+1, 0);
        
        // $0 is reached by taking no coins
        changeMethodCount[0] = 1;
        
        // update with coin as well as smallAmount, one by one
        for(int coin: coins){
            
            for( int smallAmount = coin ; smallAmount <= amount ; smallAmount++ ){
                
                changeMethodCount[ smallAmount ] += changeMethodCount[ smallAmount - coin ];
            }
        }
        
        return changeMethodCount[ amount ];
    }
};
