class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int  i = 0;
       
        while(i < flowerbed.size()){
            int prev = (i == 0)? 0 : flowerbed[i-1];
            int curr = flowerbed[i];
            int next  = (i == (flowerbed.size() - 1)) ? 0 : flowerbed[i+1];
            if(prev == 0 && curr == 0 && next == 0){
                flowerbed[i] = 1;
                n--;
                if(n == 0) return true;
                i += 2;
            }else{
                i++;
            }
            
        }
        return n <= 0;
    }
};