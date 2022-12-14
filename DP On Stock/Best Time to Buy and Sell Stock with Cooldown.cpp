//tabulation
 int maxProfit(vector<int>& prices) {
         int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, 0));
        //dp[n][0]=dp[n][1]=0;
        
        for(int idx=n-1;idx>=0;idx--){
            for(int buy=0;buy<=1;buy++){
            // int profit = 0;
            if(buy){
                dp[idx][buy] = max(-prices[idx]+dp[idx+1][0] , dp[idx+1][1]);
            }
            else{
                dp[idx][buy] = max(prices[idx]+dp[idx+2][1], dp[idx+1][0]);
              }   
             }
            }
            return dp[0][1];
    }
//TC O(n*2)
//SC O(n*2)

//tabulation
 int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, 0));
        
        for(int idx=n-1;idx>=0;idx--){
                dp[idx][1] = max(-prices[idx]+dp[idx+1][0] , dp[idx+1][1]);
                dp[idx][0] = max(prices[idx]+dp[idx+2][1], dp[idx+1][0]);
            }
            return dp[0][1];
    }
//TC O(n*2)
//SC O(n*2)


// space optimization
int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> f1(2, 0);
        vector<int> f2(2, 0);
        vector<int> curr(2, 0);
        
        for(int idx=n-1;idx>=0;idx--){
                curr[1] = max(-prices[idx]+f1[0] , f1[1]);
                curr[0] = max(prices[idx]+f2[1], f1[0]);
            
            f2=f1;
            f1=curr;
        }
            return curr[1];
    }
//TC O(n*2)
//SC O(1)
