#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
       
        for (int i = 0; i < nums.size(); i++) {
            // check if the target minus the current element is in the map
            if (mp.find(target - nums[i]) == mp.end()) {
                // if not, add the element and its index to the map
                mp[nums[i]] = i;
            }
            else {
                // if it is, return the indices of the two numbers
                return {mp[target - nums[i]], i};
            }
        }
 
        // if no such indices are found, return -1 for both indices
        return {-1, -1};
    }
};
