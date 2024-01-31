class Solution {
public:
    string reverseWords(string s) {
        vector<string> result;
        string tmp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && tmp != "") {
                result.push_back(tmp);
                tmp = "";
            } else if (i == s.length() - 1 && s[i] != ' ') {
                tmp += s[i];
                result.push_back(tmp);
            } else if (s[i] != ' ') {
                tmp += s[i];
            }
        }
        tmp = "";
        for (int i = result.size() - 1; i >= 0; i--) {
            tmp += result[i];
            if (i > 0)
                tmp += ' ';
        }

        return tmp;
    }
};
