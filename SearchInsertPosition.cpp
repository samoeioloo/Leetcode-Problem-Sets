/**
 * @file SearchInsertPosition.cpp
 * Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 * @author Samoei Oloo
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        std::vector<int>::iterator itr;
        int index;
        itr = find(nums.begin(), nums.end(), target);
        if(itr!=nums.end()){ //if iterator has a val
            index = itr - nums.begin();
            return index;
        }
        else{
            //Insert into sorted vector
            nums.insert(std::upper_bound(nums.begin(), nums.end(), target), target);
            std::vector<int>::iterator it;
            it = find(nums.begin(), nums.end(), target);
            index = it - nums.begin();
            return index;
        }
    }
};