class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi =INT_MIN;
        int sum=0;
      
        if(n==1) return nums[0]; 
        for(int i=0;i<nums.size();i++)
        {
            
            sum += nums[i];
            maxi = max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};