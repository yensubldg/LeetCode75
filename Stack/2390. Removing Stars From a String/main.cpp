class Solution {
public:
    string removeStars(string s) {
        stack<char> str;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '*')
                str.pop();
            else
                str.push(s[i]);
        }
        string result="";
        while (!str.empty()) {
            result.push_back(str.top());
            str.pop();
        }
        reverse(res.begin(),res.end());
        return result;
    }
};
