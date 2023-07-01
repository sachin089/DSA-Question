class Solution {
public:
    void sortColors(vector<int>& nums) {

        //-> Approach one 
        // sort(nums.begin(),nums.end());

        // // -> Approach two
        // int countOne=0;
        // int countTwo=0;
        // int countZero=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         countOne++;
        //     }
        //     else if(nums[i]==2){
        //         countTwo++;
        //     }
        //     else if(nums[i]==0){
        //         countZero++;
        //     }
        // }

        // int index=0;
        // while(countZero-- && index<nums.size()){
        //     nums[index]=0;
        //     index++;
        // }
        // while(countOne-- && index<nums.size()){
        //     nums[index]=1;
        //     index++;
        // }
        // while(countZero-- && index<nums.size()){
        //     nums[index]=2;
        //     index++;
        // }

        // -> Approach three
        int low=0;
        int medium=0;
        int high=nums.size()-1;
        while(medium<=high){
            if(nums[medium]==1){
                medium++;
            }
            else if(nums[medium]==0){
                swap(nums[low],nums[medium]);
                low++;
                medium++;
            }
            else if(nums[medium]==2){
                swap(nums[medium],nums[high]);
                high--;
            }
        }
        
    }
};