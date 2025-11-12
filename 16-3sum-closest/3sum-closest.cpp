class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closestSum = nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int left = i+1;int right = n-1;
            while(left<right){
                int currSum = nums[i]+nums[left]+nums[right];
                if(abs(target-currSum) < abs(target-closestSum)){
                    closestSum = currSum;
                }
                if(currSum<target) left++;
                else right--;
            }
        }
        return closestSum;
    }
};