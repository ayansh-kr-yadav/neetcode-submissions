class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> hash;

        for(int x: nums){
            if(hash.find(x)!= hash.end()){
                return true;
            }
            hash.insert(x);
        }
        return false;
        
        
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
    
    }
};