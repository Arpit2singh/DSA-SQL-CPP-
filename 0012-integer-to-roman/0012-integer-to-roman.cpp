class Solution {
public:
    string intToRoman(int num) {
    map<int, string> mp = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};
    string s = "" ; 
    int carry = 0 ; 
    while(num != 0){
        int maxi = INT_MIN ; 
        for(auto elem : mp){
            if(elem.first <= num){
                maxi = max(maxi , elem.first) ; 
            }
        }
        carry  = num % maxi ; 
        auto it = num / maxi ; 
        int i = 0 ;
        while(i<it){
            s+=mp[maxi] ; 
            i++ ; 
        }
        num = carry ;
    }
    return s ; 

    }
};