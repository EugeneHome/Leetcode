## Description

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Example

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

## Solution

1.配对问题，第一想法就是Hash Table
    遍历一遍，将target-a和index(a)存入表中，遍历的过程中进行查找，若找到返回index（a）和当前index，若未找到返回{-1，-1}错误
    复杂度O(n)

2.算法导论2.3-7习题原题
    1）复制nums至nums1,对nums1排序去重
    2）建立nums2={b:b=target-a,a∈nums1}
    3）对nums，nums2进行归并
    4）归并数组中连续出现两次的数即为所求数
    5）在nums中查找该二数位置
    复杂度O(nlgn)

3.自然方法
    从第1个数开始，在它之后到结尾的子数组中线性查找它的配对数
    整个数组依次遍历可找到所需二数
    复杂度O(n^2)