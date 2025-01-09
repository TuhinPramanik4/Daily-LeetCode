class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0; 
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            if (s.length() >= pref.size() && s.substr(0, pref.size()) == pref) {
                cnt++;
            }
        }
        return cnt;
    }
};
