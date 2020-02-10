/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

#include<string>

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string pallString = to_string(x);
        int left = 0;
        int right = pallString.length()  - 1;
         while (left < right)
            {
                if (pallString[left++] != pallString[right--])
                {
                    return false;
                }
            }
            return true;
    }
};
// @lc code=end

