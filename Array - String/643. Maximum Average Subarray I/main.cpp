class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0];
        double tmp = 0;
        for(int i=0; i<k; i++){
            tmp += nums[i];
        }
        double max = tmp;
        for(int i=k; i<nums.size(); i++){
            tmp = tmp + nums[i] - nums[i-k];
            if(max < tmp) max = tmp;
        }

        return max/k;
    }
};
