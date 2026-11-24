class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<pair<int,int>>v ; 
        vector<int>ans ; 

        for(int i= nums.size()-1; i>=0 ;  i--){
            while(!v.empty() && v.back().first <= nums[i]){
                v.pop_back() ; 
            }
            if(v.empty()){
                ans.push_back(0) ; 
            }
            else ans.push_back(v.back().second-i) ; 

            v.push_back({nums[i] , i}) ; 
        }
        reverse(ans.begin() , ans.end()) ; 
        return ans ; 
    }
};