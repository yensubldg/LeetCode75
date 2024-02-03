class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> sA;

        for (int asteroid : asteroids) {
            bool check = true;

            while (!sA.empty() && asteroid < 0 && sA.top() > 0) {
                if (sA.top() < -asteroid) {
                    sA.pop();
                } else if (sA.top() == -asteroid) {
                    sA.pop();
                    check = false;
                    break;
                } else {
                    check = false;
                    break;
                }
            }

            if (check) {
                sA.push(asteroid);
            }
        }

        vector<int> result;
        while (!sA.empty()) {
            result.insert(result.begin(), sA.top());
            sA.pop();
        }

        return result;
    }
};
