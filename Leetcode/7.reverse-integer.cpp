/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
    long num;
        std::string str = to_string(x);
        if(x>=0)
        {
            std::reverse(str.begin(),str.end());
        }
        if(x<0)
        {
            std::reverse(str.begin()+1,str.end());
        }
        num = atol(str.c_str());
        if(num > 2147483647 || num < -2147483648 ){

        return 0;

        }
        return num;
    }

};
// @lc code=end

