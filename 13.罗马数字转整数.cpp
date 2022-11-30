/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int i = 0;
        while(i<s.length()){
            if(s[i]=='I'){
                if(s[i+1]=='V') {result += 4;i += 2;}
                else if (s[i+1]=='X') {result += 9;i += 2;}
                else {result += 1;i += 1;}
            } 
            else if (s[i]=='V') {result += 5;i += 1;}
            else if (s[i]=='M') {result += 1000;i += 1;}
            else if (s[i]=='D') {result += 500;i += 1;}
            else if (s[i]=='L') {result += 50;i += 1;}
            else if(s[i]=='X'){
                if(s[i+1]=='L') {result += 40;i += 2;}
                else if (s[i+1]=='C') {result += 90;i += 2;}
                else {result += 10;i += 1;}
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D') {result += 400;i += 2;}
                else if (s[i+1]=='M') {result += 900;i += 2;}
                else {result += 100;i += 1;}
            }
        }
        return result;
    }
};
// @lc code=end

