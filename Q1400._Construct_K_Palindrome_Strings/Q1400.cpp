class Solution {
public:
    bool canConstruct(string s, int k) {
        int cntOccur[26] = {0};
        if (s.length() < k) {
            return false;
        }
        for (char c : s) {
            cntOccur[c - 'a']++;
        }
        int cntodds = 0;
        for (int i = 0; i < 26; i++) {
            if (cntOccur[i] % 2 != 0) {
                cntodds++;
            }
        }
        return cntodds <= k;
    }
};
