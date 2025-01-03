class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int tsum=0;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
        }
          long long int presum=0;
          int ans=0;
         for(int i=0;i<nums.size()-1;i++){
           presum+=nums[i];
           long long int sufsum=tsum-presum;
           if(presum>=sufsum){
            ans++;
           }
        }
      
        return ans;
    }
};