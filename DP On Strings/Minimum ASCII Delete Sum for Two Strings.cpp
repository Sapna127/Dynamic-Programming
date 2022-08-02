int minimumDeleteSum(string s1, string s2) {
        int n = s1.size() , m = s2.size();
        vector<int> prev(m+1,0) , curr(m+1,0);
        
        for(int i1=1;i1<=n;i1++){
            for(int i2=1;i2<=m;i2++){
                if(s1[i1-1]==s2[i2-1]) curr[i2] = prev[i2-1]+s1[i1-1];
                else curr[i2] = max(prev[i2] , curr[i2-1]);
            }
            prev=curr;
        }
        int l = curr[m];
       
        int c1=0, c2=0;
        for(char c:s1) c1+=c;
        for(char c:s2) c2+=c;
        return c1-l+c2-l;
    }
