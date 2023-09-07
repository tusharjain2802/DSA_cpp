// https://leetcode.com/problems/can-place-flowers/description/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        int x = flowerbed.size();
        if(x==1) {
            if(flowerbed[0] ==0) count++;
        }
        else{
            if(x>=2 && flowerbed[0] ==0 && flowerbed[1] ==0){
                flowerbed[0] =1;
                count++;
            }
            for(int i=1;i<x-1;i++){
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                    flowerbed[i] =1;
                    count++;
                    //cout<<i<<" ";
                }
            }
            if(x>=2 && flowerbed[x-1] ==0  && flowerbed[x-2] ==0 ){
                flowerbed[x-1] =1;
                count++;
            }
        }
        
        if(count >= n) {
            return 1;
        }
        else return 0;
    }
};