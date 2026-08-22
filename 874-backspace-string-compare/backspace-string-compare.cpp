class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S;
        stack<char> T;

        for (char C : s) {
            if (C != '#') {
                S.push(C);
            } else {
                if (!S.empty()) {
                    S.pop();
                }
            }
        }

        for (char C : t) {
            if (C != '#') {
                T.push(C);
            } else {
                if (!T.empty()) {
                    T.pop();
                }
            }
        }
        return S == T;
    }
};