class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int candidate1=0; int candidate2=1; int count1=0; int count2=0;
       for(int num:nums)
       {
           if(num==candidate1)
           {
               count1++;
           }
           else if(num==candidate2)
           {
               count2++;
           }
           else if(count1==0)
           {
               candidate1=num;
               count1=1;
           }
           else if(count2==0)
           {
               candidate2=num;
               count2=1;
           }
           else 
           {
               count1--;
               count2--;
           }
       } 
       std::vector<int>res;
       if(count(nums.begin(),nums.end(),candidate1)>nums.size()/3) res.push_back(candidate1);
       if(count(nums.begin(),nums.end(),candidate2)>nums.size()/3) res.push_back(candidate2);
       return res;
    }
};

//given a integer of size n . 
// we have to find all elements appearing more then n/3 times