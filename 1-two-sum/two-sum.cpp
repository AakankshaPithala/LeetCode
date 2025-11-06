class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map<int,int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     int a = nums[i];
        //     int more = target - nums[i];
        //     if(mpp.find(more)!= mpp.end()){
        //         return {mpp[more],i};
        //     }
        //     mpp[nums[i]] = i;
        // }
        // return {};
        int n = nums.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());

        int left =0;
        int right = n-1;

        while(left<right){
            int sum = arr[left].first+arr[right].first;
            if(sum==target){
                return {arr[left].second,arr[right].second};
            }
            else if(sum >target){
                right--;
            }
            else{
                left++;
            } 
        }
        return {-1,-1};
    }
};