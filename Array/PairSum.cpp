// #include <bits/stdc++.h>
// using namespace std;
// class Solution{   
// public:
//     int getPairsCount(int arr[], int n, int k) {
//         unordered_map<int,int>m;
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int val=k-arr[i];
//             cout<<"Val is "<<val<<endl;
//             cout<<"Value at m[val] is "<<m[val]<<endl;
//             if(m[val]){
//                 ans+=m[val];
//                 cout<<"Ans is "<<ans<<endl;
//             }
            
//             cout<<"Value at m[arr[i]] is "<<m[arr[i]]<<endl;
//             m[arr[i]]++;
//             cout<<"Value at second m[arr[i]] is "<<m[arr[i]]<<endl;
//         }
        
//         return ans;
//     }
// };


// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.getPairsCount(arr, n, k);
//         cout << ans << "\n";
//     }
    
//     return 0;
// }

// ----------TwoPairSum-----------------------------
#include <unordered_map>
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }
};