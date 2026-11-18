class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>v ; 
        sort(nums.begin() , nums.end()) ; 
        for(int i = 0 ; i<nums.size() ; i++){
             if(!v.empty() && v.back()[1] >= nums[i][1]){
                continue ; 
            }
            else if(!v.empty() && v.back()[1] >= nums[i][0]){
                v.back()[1] = nums[i][1] ; 
            }
            else{
                v.push_back(nums[i]) ; 
            }
        }
        return v ; 
    }
};