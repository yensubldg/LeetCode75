class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int numOfZero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                numOfZero++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        for(int i=0; i<numOfZero; i++){
            nums.push_back(0);
        }
    }
};
