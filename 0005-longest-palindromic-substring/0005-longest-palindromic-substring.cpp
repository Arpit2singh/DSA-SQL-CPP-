class Solution {
public:
    bool check(string&s , int &left , int &right){
        if(left>=0 && right<s.size() && s[left] == s[right]){
            left-- ; 
            right++ ; 
           return check(s , left , right) ; 
        }
        return true  ; 
    }
    string longestPalindrome(string s) {
        string ans = "" ; 
        for(int i = 0 ; i<s.size() ; i++){
            int left = i ; 
            int right = i+1 ; 
            cout<<ans<<endl ;
            if(check( s  , left , right)){
                string curr = s.substr(left+1, right-left-1) ; 
                if(ans.size() <curr.size()){
                    ans = curr ; 
                }
            }
            int eleft = i ; 
            int eright = i ; 
            if(check( s  , eleft , eright)){
                string curr = s.substr(eleft+1, eright-eleft-1) ; 
                if(ans.size() <curr.size()){
                    ans = curr ; 
                }
            }
            
        }
        return ans ; 
    }
};