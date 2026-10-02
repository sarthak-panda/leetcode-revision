class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<bool>freq(n+1,false);
        for(int i=0;i<n;i++) freq[nums[i]]=true;
        for(int i=0;i<n+1;i++) if(!freq[i]) return i;
        return -1;
    }
};
