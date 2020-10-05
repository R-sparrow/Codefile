/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {                                           
public:                                                    //注意vector作参数的写法
    vector<int> twoSum(vector<int>& nums, int target) {    //声明返回类型为vector的函数
        int i = nums.size();                               //数组的长度
        for(int n = 0;n < i;n++){
            for(int j = n + 1;j < i;j++){
                if(nums[n] + nums[j] == target){
                    return {n,j};                          //return终止函数的执行,与后面的return不冲突
                }
            }
               
        }
        return {};
    }
};
// @lc code=end

