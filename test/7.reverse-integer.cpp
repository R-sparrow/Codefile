/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long a;
        std::string y = to_string(x);
        if(x > 0)
        {
            std::reverse(y.begin(),y.end());
        }
        else
        {
            std::reverse(y.begin()+1,y.end());
        }
        a = atol(y.c_str());
        if( a > 2147483647 || a < -2147483648 )
        {
            return 0;
        }
            return a;
        
    }
};
// @lc code=end

