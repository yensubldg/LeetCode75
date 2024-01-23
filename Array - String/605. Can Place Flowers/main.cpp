class Solution {
public:
      bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sizeOfArr = flowerbed.size();
        if(sizeOfArr<2){
            if(flowerbed[0]==0 || ( n==0 && flowerbed[0]==1)) return true;
            return false;
        }
        int total = 0; 
        vector<int> tmp = flowerbed;

        if(tmp[0] == 0 && tmp[1] ==0){
            total++;
            tmp[0]=1;
        };
        if(tmp[sizeOfArr-1] == 0 && tmp[sizeOfArr-2] ==0){
            total++;
            tmp[sizeOfArr-1] = 1;
        };
        
        for(int i=1; i < sizeOfArr-1; i++){
            if(tmp[i] != 0) {
                i++;
                continue;
            }
            if(tmp[i-1] == 0 && tmp[i+1]==0){
                total++;
                tmp[i] = 1;        
            }
        }

        if(total >= n) return true;
        return false;
    }
};
