//memoization
int f(int i, int j, vector<int> &cuts,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int mini=1e9;
        for(int idx=i;idx<=j;idx++){
            int cost = cuts[j+1]-cuts[i-1]+f(i,idx-1,cuts,dp)+f(idx+1,j,cuts,dp);
            mini=min(mini,cost);
        }
        return dp[i][j] = mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int s=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(), 0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(s+1, vector<int>(s+1,-1));
        return f(1,s,cuts,dp);
    }


//tabulation
int minCost(int n, vector<int>& cuts) {
        int s=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(), 0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(s+2, vector<int>(s+2,0));
        for(int i=s;i>=1;i--){
            for(int j=1;j<=s;j++){
                if(i>j) continue;
                int mini=1e9;
            for(int idx=i;idx<=j;idx++){
                int cost = cuts[j+1]-cuts[i-1]+dp[i][idx-1]+dp[idx+1][j];
                mini=min(mini,cost);
        }
            dp[i][j] = mini;
            }
        }
        return dp[1][s];
    }
//TC O(s^3)
//SC O(s^s)
