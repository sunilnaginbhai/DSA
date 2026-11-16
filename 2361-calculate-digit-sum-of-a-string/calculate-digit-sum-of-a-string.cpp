class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            int n = s.length();
            int sum = 0;
            int count = 0;
            string ans = "";

            for (int i = 0; i < n; i++) {
                count = count + 1;
                sum += s[i] - '0';
                if (count == k) {
                    ans += to_string(sum);
                    count = 0;
                    sum = 0;
                }
            }
            // Handle the remaining group
            if (count > 0) {
                ans += to_string(sum);
            }
            s = ans;
        }
        return s;
    }
};