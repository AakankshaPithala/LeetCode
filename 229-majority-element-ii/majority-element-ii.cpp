class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int min = (n/3)+1;
        vector<int> ls;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second > n/3){
                ls.push_back(it.first);
            }
        }
        return ls;
    }
};