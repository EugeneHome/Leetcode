#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;
#include <algorithm>
using std::sort;

class Solution {
public:
	vector<int> twoSum1(vector<int>& nums, int target) {
		unordered_map<int, int> record;
		for (int index = 0; index < nums.size(); ++index) {
			auto found = record.find(nums[index]);
			if ( found != record.end())
				return{ found->second,index };
			record.emplace(target - nums[index], index);
		}
		return { -1,-1 };
	}
	vector<int> twoSum2(vector<int>& nums, int target) {
		vector<int> nums1(nums);
		bool found(false);
		int val;
		sort(nums1.begin(), nums1.end());
		for (auto it = nums1.begin() + 1; it < nums1.end();) {
			if (*it == *(it - 1))
				it = nums1.erase(it);
			else
				++it;
		}
		vector<int> nums2(nums1);
		for (int index = 0; index < nums2.size(); ++index) {
			nums2[index] = target - nums1[index];
		}
		int i = 0, j = nums2.size()-1;
		vector<int> temp;
		while (i < nums1.size() && j >= 0) {
			if (nums1[i] < nums2[j]) 
				temp.push_back(nums1[i++]);
			else
				temp.push_back(nums2[j--]);
		}
		while (i < nums1.size())
			temp.push_back(nums1[i++]);
		while (j >= 0)
			temp.push_back(nums2[j--]);
		for (auto it = temp.begin() + 1; it < temp.end(); ++it) {
			if (*(it) == *(it - 1)) {
				found = true;
				val = *it;
				break;
			}
		}
		if (found) {
			vector<int> index;
			for (int i = 0; i < nums.size();++i) {
				if (nums[i] == val || nums[i] == target - val)
					index.push_back(i);
				if (index.size() == 2)
					break;
			}
			return{ index[0],index[1] };
		}
		else
			return { -1,-1 };

	}
};


#endif // !SOLUTION_H
