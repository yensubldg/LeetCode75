class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();

        if(len == 1) return 0;

        int sum = 0;
        int maxL[len];
        int maxR[len];
        int minLR[len];

        int ml = 0;
        int mr = 0;

        for(int i = 0; i < len; i++){
            if(i == 0){
                maxL[i] = height[i];
                ml = 0;
            }

            maxL[i] = ml;

            if(ml < height[i])  ml = height[i];
        }

        for(int i = len - 1; i >= 0; i--){
            if(i == len - 1){
                maxR[i] = height[i];
                mr = 0;
            }

            maxR[i] = mr;

            if(mr < height[i])  mr = height[i];

            minLR[i]  = min(maxL[i],maxR[i]);
        }

        for(int i = 0; i < len; i++){
            int water = minLR[i] - height[i];

            if(water > 0){
                sum += water;
            }
        }

        return sum;
    }
};
