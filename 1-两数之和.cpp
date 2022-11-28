
/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

 

示例 1：

输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
示例 2：

输入：nums = [3,2,4], target = 6
输出：[1,2]
示例 3：

输入：nums = [3,3], target = 6
输出：[0,1]
*/
#include <map>
#include <vector>
using namespace std;

class Solution{
public:
    //暴力法，时间复杂度0(n2)
    vector<int> twoSum(vector<int>& nums,int target){
        int i,j;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {i,j};
    }

    //利用hash表，时间复杂度0(n)
    vector<int> twoSum(vector<int>& nums,int target){
        map<int,int> hash;
        vector<int> result(2,-1);
        for(int i=0;i<nums.size();i++){
            if(hash.count(target-nums[i])==0){
                hash[nums[i]] = i;
            }
            else{
                result[0] = i;
                result[1] = hash[target-nums[i]];
            }
        }
        return result;
    }
};