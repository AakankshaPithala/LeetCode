class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> answer; int x = 1;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j){
        //             x *= nums[j];
        //         }
        //     }
        //     answer[i] = x;
        //     x = 1;
        // }
        // return answer;
        int n = nums.size();
        vector<int> answer(n,1);
        for(int i=1;i<nums.size();i++){
            answer[i] = answer[i-1] * nums[i-1]; //prefix sum
        }
        int suffix =1;
        for(int i=n-1;i>=0;i--){
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};