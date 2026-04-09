class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> ans;

        for(auto it : nums) {
            freq[it]++;
        }

        vector<vector<int>> buckets(nums.size()+1);

        for(auto [num,count]: freq) {
            buckets[count].push_back(num);
        }

        for(int i = buckets.size()-1;i>=0;i--) {
            for(int num:buckets[i]) {
                ans.push_back(num);
                if(ans.size()==k) return ans;
            }
        }

        return ans;
    }
};