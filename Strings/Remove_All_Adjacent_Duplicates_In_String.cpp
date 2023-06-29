// Input: s = "abbaca"
// Output: "ca"
class Solution {
public:
    string removeDuplicates(string s) {

        //create an empty string
        string ans ="";
        int sLength=s.length();
        for(int i=0;i<sLength;i++){

            if(ans.length() > 0){
            if(ans[ans.length()-1]==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
