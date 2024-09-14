class Solution {
public:
    int longestSubarray(vector<int>& nums) {
   
        // find max element in array and subarray  of only max element will be longenst max value subaray 
  int m = max_element(nums.begin(),nums.end())-nums.begin();
    int max_value = nums[m];

    // traverse array from max value index and check long. subarray
    int len = 0;
    int max_len = 0;
    for(int i=m;i<nums.size();i++){

        len = 0;
     while(i<nums.size()&& nums[i]==max_value){
        i++;
        
        len++;
     }
     max_len = max(max_len , len);
    }

    return max_len;
    }
};