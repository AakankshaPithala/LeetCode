class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(),candies.end());
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies < maxCandies){
                ans.push_back(false);
            }
            else ans.push_back(true);
        }
        return ans;
    }
};