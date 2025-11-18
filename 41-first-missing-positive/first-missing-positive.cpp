class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> hash;
        for(int i=0;i<n;i++){
            hash.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(hash.find(i)==hash.end()) return i;
        }
        return n+1;
    }
};