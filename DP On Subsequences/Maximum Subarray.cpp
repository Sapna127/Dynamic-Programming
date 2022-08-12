//kadanes algo
int maxSubArray(vector<int>& nums) {
        int cmax=0, maxTN = INT_MIN;
        for(auto &i : nums){
            cmax = max(i, i+cmax);
            maxTN = max(maxTN,cmax);
        }
        return maxTN;
    }
