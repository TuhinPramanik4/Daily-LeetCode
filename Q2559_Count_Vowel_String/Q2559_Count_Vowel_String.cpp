class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ansarr(queries.size());
        unordered_set<char> vowels{'a','e','i','o','u'};
        vector<int> prefixSum(words.size());
        int sum =0;
        for(int i=0;i<words.size();i++){
            string cur = words[i];
            if(vowels.count(cur[0])&&vowels.count(cur[cur.size()-1])){
                sum++;
            }
            prefixSum[i]=sum;
        }
        for(int i=0;i<queries.size();i++){
            vector<int> curq = queries[i];
            ansarr[i]= prefixSum[curq[1]] -
                (curq[0] == 0 ? 0 : prefixSum[curq[0] - 1]);
        }
        return ansarr;
    }
};