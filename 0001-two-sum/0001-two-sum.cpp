class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int needed=target-nums[i];
    
            if(mp.find(needed)!=mp.end()&&mp[needed]!=i){
                ans.push_back(mp[needed]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
        
        
    }
};