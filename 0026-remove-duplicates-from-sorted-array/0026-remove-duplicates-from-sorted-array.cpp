class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0 ; 
        int right = 1 ;

        while(right < nums.size()){
          if(nums[left] == nums[right]){
            right++ ; 
            continue ;
          }
          else{
            left++ ;
            nums[left] = nums[right] ; 
         
            right++ ;
          }
        }

        // for(int i = 0 ; i<nums.size() ; i++){
        //     cout<<nums[i]<<endl;
        // }
      nums.resize(left+1) ; 
        
        return left+1 ; 
    }
};