/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.Note that you must do this in-place without making a copy of the array.Example 1:Input: nums = [0,1,0,3,12]Output: [1,3,12,0,0]*/class Solution {public:    void moveZeroes(vector<int>& nums) {        int l = 0;        int n = nums.size();                for (int r = 0; r<n; r++)          {             if(nums[r]!=0){            swap(nums[l],nums[r]);                l++;            }          }        //without swap        //for(; l<n; l++)         //  nums[l]=0;    }};