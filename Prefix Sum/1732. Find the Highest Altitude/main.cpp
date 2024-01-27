class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0, sumTmp = 0;
        for(const int& iGain: gain){
            sumTmp = sumTmp + iGain;
            if(sumTmp > max) max = sumTmp;
        }

        return max;
    }
};
