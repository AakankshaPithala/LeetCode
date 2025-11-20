class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1=0;int el1=0;
        int cnt2 =0; int el2 =0;
        //this for loop is only applying the moore's voting algorithm
        for(int i=0;i<n;i++){
            if(el1==nums[i]) cnt1++;
            else if(el2==nums[i]) cnt2++;
            else if(cnt1==0 && nums[i]!=el2){
                cnt1=1;
                el1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=el1){
                cnt2=1;
                el2=nums[i];
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;cnt2=0;
        //manually check if its the majority element and push to the vector
        vector<int> ls;
        int mini= (n/3)+1;
        for(int i=0;i<n;i++){
            if(el1==nums[i])cnt1++;
            if(el2==nums[i])cnt2++;
        }
        if(cnt1>=mini && el1!=el2) ls.push_back(el1);
        if(cnt2>=mini ) ls.push_back(el2);
        return ls;
    }
};