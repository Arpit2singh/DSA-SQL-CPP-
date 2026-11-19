class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp ; 
        mp[0] = 1 ; 
        int prefix = 0 ; 
        int ans = 0 ; 
        for(int i = 0 ; i<nums.size() ; i++){
            prefix += nums[i] ; 
            int comp = prefix - k ; 
            if(mp.find(comp) != mp.end()){
                ans+=mp[comp]  ; 
            }

            mp[prefix]++ ; 
        }
        return ans;
    }
};