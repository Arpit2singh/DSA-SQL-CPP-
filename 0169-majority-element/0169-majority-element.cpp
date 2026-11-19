class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 ; 
        int cand = INT_MAX; 

        for(int i = 0 ; i<nums.size() ; i++){
             if(count <= 0){
                cand = nums[i] ; 
                count = 1 ; 
            }
            else if(nums[i] == cand){
                count++ ; 
            }
            else if(nums[i] != cand && cand != INT_MAX){
                count-- ; 
            }
         
           
        }
        // cout<<cand<<" "<<count<<endl ; 
        int n = 0 ; 
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == cand){
                n++ ; 
            }
        }
        return n>nums.size()/2 ? cand : -1 ; 
    }
};