# Source: leetcode.com/problems/two-sum/

# 1. Two Sum [EASY]

'''
 Given an array of integers nums and an integer target, return indices 
 of the two numbers such that they add up to target. 
  
 You may assume that each input would have exactly one solution, and you 
 may not use the same element twice. 
  
 You can return the answer in any order.
'''

# Example

'''
 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Output: Because nums[0] + nums[1] == 9, we return [0, 1].
'''

# Solution (Approach 3: One-pass Hash Table)

'''
 Time complexity: O(n)
 Space complexity: O(n)
'''

# Submissions (01/18/2021 22:31)

'''
 Runtime: 40 ms, faster than 95.47% of Python3 online submissions for Two Sum.
 Memory Usage: 14.2 MB, less than 91.26% of Python3 online submissions for Two Sum.
'''

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            # if current element's complement already exists in the table
            if complement in map:
                return [map[complement], i]
            # inserting elements into the table
            map[nums[i]] = i
        return None