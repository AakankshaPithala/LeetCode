class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            bool leftempty = (i==0 || flowerbed[i-1]==0);
            bool rightempty = (i==flowerbed.size()-1 || flowerbed[i+1]==0);
            if(flowerbed[i]==0 && leftempty && rightempty){
                flowerbed[i]= 1;
                n--;
            }
        }
        return n<=0;
    }
};