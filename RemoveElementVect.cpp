class Solution {
public:
    // time complexitiy of O(n) becuase std::remove transforms the given range into a range with all the elements that compare not equal to given element shifted to the start of the container. So, actually dont remove the matched elements. It just shifted the non moatched to starting and gives an iterator to new valid end.
    int removeElement(vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
/**
Initial algo:
Not efficient because erase function deletes the elements and shifts all the elements in right by 1.
So, it complexity will be O(n^2).
void removeAllMatchingElements_nonEfficient(std::vector<int> & vec, int elem)
{
   std::vector<int>::iterator it = vec.begin();
   while(it != vec.end())
   {
     if(*it == elem)
     {
        it = vec.erase(it);
     }
     else
        it++;
  }
}


*/