class Solution {
public:
    int maximumLengthSubstring(string s) {

        int freq[26] = {0};

        int left = 0;
        int maxlen = 0;

        for (int right = 0; right < s.length(); right++) {

            freq[s[right] - 'a']++;
            while (freq[s[right] - 'a'] > 2) {
                freq[s[left] - 'a']--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};