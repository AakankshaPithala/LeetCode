class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1; int n = nums.size();
        //adding a break point 
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        //incase we dont find a breakpoint(base case)
        if(ind ==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //swap with the breakpoint(check from last as we need the least possible in the permutation)
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        return ;
    }
};