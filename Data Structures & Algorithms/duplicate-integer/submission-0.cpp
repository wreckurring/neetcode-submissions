class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        vector<int> freq(20000,0);

        for(int i=0;i<nums.size();i++)
            freq[nums[i]+10000]++;

        for(int i = 0;i<freq.size();i++)
        {
            if(freq[i]>1)return true;
        }

        return false;
    }
};