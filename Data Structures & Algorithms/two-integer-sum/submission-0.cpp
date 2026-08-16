class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // psuedocode
        /*create map 
        traverse the vector then subtract the current value from target
        now search that value into map
         if found then return  key from hash and i */
         // if not found then add that into hashmp
         unordered_map<int , int > hash;

         for(int i=0 ; i< nums.size() ; i++){
            int diff= target-nums[i];

            if(hash.find(diff)!= hash.end()){
                return {hash[diff],i};

            }
            hash[nums[i]]=i;
         }
         return {};
         
         
    }
};
