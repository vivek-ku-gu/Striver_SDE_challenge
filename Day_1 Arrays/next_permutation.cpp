class Solution {
public:
    void swap(vector<int> &num,int i,int j)
    {
        int temp = num[i];
        num[i] = num[j];
        num[j]= temp;
    }
    void reverse(vector<int> &num, int i,int j)
    {
        while(i<j)
        {
            swap(num,i++,j--);
        }
    }
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-2;
        while(i>=0 && nums[i] >= nums[i+1]) i--;
      
        if(i>=0)
        {
        int j =  nums.size()-1;
        while(nums[i]>=nums[j])j--;
         swap(nums,i,j);
        }
      
        reverse(nums,i+1,nums.size()-1);
         }
};