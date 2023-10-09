class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //trying brute force
        int low=0;
        int high=nums.size()-1;
        vector<int>v;
        while(low<=high)
        {
             if(nums[low]<target)
             {
                 low=low+1;
             }
             else if(nums[high]>target)
             {
                 high =high-1;
             }
           else  if(nums[low]==target && nums[high]==target)
             {
                 v.push_back(low);
                  v.push_back(high);
                  return {low,high};

             }
             
        }
        return {-1,-1};
    }
};
//an array is given nums kkin increasing order 
// we have to find the starting and enging position of the target value 
//if the target  is not found then return {-1,-1}
//complexity should be o(logn)