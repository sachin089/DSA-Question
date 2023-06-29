class Solution {
public:

bool checkPalindrome(string s,int low,int high){
    while(low<=high){
        if(s[low]!=s[high]) return false;
        else{
            low++;
            high--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int lowIndex=0;
        int highIndex=s.length()-1;
        while(lowIndex<=highIndex){
            if(s[lowIndex]==s[highIndex]){
                lowIndex++;
                highIndex--;
            }else{
                return checkPalindrome(s,lowIndex+1,highIndex) || checkPalindrome(s,lowIndex,highIndex-1);
            }
        }
        return true;
    }
};