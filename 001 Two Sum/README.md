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

1.������⣬��һ�뷨����Hash Table
    ����һ�飬��target-a��index(a)������У������Ĺ����н��в��ң����ҵ�����index��a���͵�ǰindex����δ�ҵ�����{-1��-1}����
    ���Ӷ�O(n)

2.�㷨����2.3-7ϰ��ԭ��
    1������nums��nums1,��nums1����ȥ��
    2������nums2={b:b=target-a,a��nums1}
    3����nums��nums2���й鲢
    4���鲢�����������������ε�����Ϊ������
    5����nums�в��Ҹö���λ��
    ���Ӷ�O(nlgn)

3.��Ȼ����
    �ӵ�1������ʼ������֮�󵽽�β�������������Բ������������
    �����������α������ҵ��������
    ���Ӷ�O(n^2)