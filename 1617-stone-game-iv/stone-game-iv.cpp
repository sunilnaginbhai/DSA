class Solution {
    vector<int> DP;
public:
    void dp(int n) {
        int base = 1;
        while (base * base <= n) {
            if (DP[n - base * base] == 0) {
                DP[n] = 1;
                return;
            } 
            base++;
        }
        DP[n] = 0;
    }
    bool winnerSquareGame(int n) {
        DP = vector<int>(n + 1, -1);
        DP[0] = 0;
        for (int i = 1; i <= n; i++) {
            dp(i);
        }
        return DP[n];
    }
};