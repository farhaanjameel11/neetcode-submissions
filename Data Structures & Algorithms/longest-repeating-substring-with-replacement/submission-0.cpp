class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxi = 0;
        int count[26] = {0};

        for (int right = 0; right < s.length(); right++) {

            count[s[right] - 'A']++;

            int most = 0;

            for (int i = 0; i < 26; i++) {
                most = max(most, count[i]);
            }

            int window = right - left + 1;

            if (window - most > k) {
                count[s[left] - 'A']--;
                left++;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};