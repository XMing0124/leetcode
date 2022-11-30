/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <vector>
#include <string>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLength = 999;
        int minIndex  = -1;
        string result = "";
        string sub_str = "";
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<minLength){
                minLength = strs[i].length();
                minIndex = i;
            }                
        }
        for(int j=1;j<=strs[minIndex].length();j++){
            sub_str = strs[minIndex].substr(0,j);
            for(int i=0;i<strs.size();i++){
                if(strs[i].rfind(sub_str,0)!=0) return result;
            }
            result = sub_str;
        }
        return result;
    }
};
// @lc code=end

