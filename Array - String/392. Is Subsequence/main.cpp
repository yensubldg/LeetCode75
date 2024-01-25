class Solution {
public:
    bool isSubsequence(string s, string t) {
        int nums = 0;
        int sLen = s.length();
        int tLen = t.length();
        for(int i=0; i<tLen; i++){
            if(nums == sLen) return true;
            if(s[nums]==t[i]){
                nums++;
            }
        }

        return nums == sLen;
    }
};
