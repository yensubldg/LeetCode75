class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string r;
        int w1l = word1.length();
        int w2l = word2.length();

        for(int i = 0; i < w1l || i < w2l; i++){
            if(i < w1l){
                r+= word1[i];;
            }
            if(i < w2l){
                r+= word2[i];
            }
        }

        return r;
    }
};
