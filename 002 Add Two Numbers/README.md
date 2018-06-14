## Description

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## Example

```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```

## Solution

1. ������⣬��һ�뷨����`Hash Table`

	����һ�飬��target-a��index(a)������У������Ĺ����н��в��ң����ҵ�����index��a���͵�ǰindex����δ�ҵ�����{-1��-1}����

	���Ӷ�O(n)

2. �㷨����2.3-7ϰ��ԭ��

	1. ����nums��nums1,��nums1����ȥ��
	2. ����nums2={b:b=target-a,a��nums1}
	3. ��nums��nums2���й鲢
	4. �鲢�����������������ε�����Ϊ������
	5. ��nums�в��Ҹö���λ��

	���Ӷ�O(nlgn)

3. ��Ȼ����

	�ӵ�1������ʼ������֮�󵽽�β�������������Բ�������������������������α��������ҵ��������

	���Ӷ�O(n^2)