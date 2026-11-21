class Solution {
public:
    int trap(vector<int>& nums) {
        if(nums.size() == 1) return 0 ; 
        int left = 0 ; 
        int right = nums.size()-1 ; 
        int leftmax = INT_MIN ; 
        int rightmax = INT_MIN ; 
        int ans = 0 ; 

        while(left <= right){
            if(nums[left] <= nums[right]){
                if(nums[left] >= leftmax){
                    leftmax = nums[left] ; 
                }
                else{
                    ans += leftmax - nums[left] ; 
                }
                left++;
            }
            else{
                 if(nums[right] >= rightmax){
                    rightmax = nums[right] ; 
                }
                else{
                    ans += rightmax - nums[right] ; 
                }
                right--;
            }
        } 
        return ans; 
    }
};