class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        // unordered_set<int> hash;
        // for(int i=0;i<n;i++){
        //     hash.insert(nums[i]);
        // }
        // for(int i=1;i<=n;i++){
        //     if(hash.find(i)==hash.end()) return i;
        // }
        // return n+1;

        //moving the numbers to thier respective indexes
        for(int i=0;i<n;i++){
            while(nums[i]>=1 && nums[i]<=n && nums[i] != nums[nums[i] - 1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        //check the first number where it is not eqaul to i+1;(we placed 3 at 2 index(following 0 indexed))
        for(int i=0;i<n;i++){
            if(nums[i]!= i+1) return i+1;
        }
        return n+1;
    }
};