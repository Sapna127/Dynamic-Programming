//kadanes algo
int kadanes(vector<int> &nums){
        int cmax=0, maxTN = INT_MIN;
        for(auto &i : nums){
            cmax = max(i, i+cmax);
            maxTN = max(maxTN,cmax);
        }
        return maxTN;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int normSum = kadanes(nums);
        //if(normSum<0)  return normSum;
        int Tsum=0;
        for(auto & i : nums){
            Tsum += i;
            i = -i;
        }
        int maxCircle = Tsum + kadanes(nums);
        if(maxCircle == 0) return normSum;
        return max(normSum, maxCircle);
    }



//alternate way 
int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int mxSum = INT_MIN, mnSum = INT_MAX, aSum=0;
        int tempMxSum = 0, tempMnSum=0;
        for(int i=0;i<n;i++){
            aSum+=nums[i];
            
            tempMxSum+=nums[i];
            mxSum = max(mxSum, tempMxSum);
            tempMxSum = tempMxSum<0?0:tempMxSum;
            
            tempMnSum+=nums[i];
            mnSum = min(mnSum, tempMnSum);
            tempMnSum = tempMnSum>0?0:tempMnSum;
        }
        
        if(aSum == mnSum) 
            return mxSum;
        return max(mxSum, (aSum-mnSum));
    }

// TC O(n)
