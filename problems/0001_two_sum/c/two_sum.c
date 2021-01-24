// Source: leetcode.com/problems/two-sum/

// 1. Two Sum [EASY]

/*
 * Given an array of integers nums and an integer target, return indices 
 * of the two numbers such that they add up to target. 
 * 
 * You may assume that each input would have exactly one solution, and you 
 * may not use the same element twice. 
 * 
 * You can return the answer in any order.
 */

// Example

/*
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Output: Because nums[0] + nums[1] == 9, we return [0, 1].
 */

// Solution (Approach 1: Brute Force)

/*
 * Time complexity: O(n^2)
 * Space complexity: O(1)
 */

// Submissions (01/18/2021 19:03)

/*
 * Runtime: 8 ms, faster than 41.90% of C online submissions for Two Sum.
 * Memory Usage: 5.8 MB, less than 91.53% of C online submissions for Two Sum.
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *index;
    int i, j;
    
   *returnSize = 2;
    
    // Dynamically allocate memory using malloc() 
    index = (int*) malloc(*returnSize * sizeof(int));
    
    for(i = 0; i < numsSize; i++){
        for(j = i + 1; j < numsSize; j++){
            // Check if the target successfully equals the sum or not
            if(nums[i] + nums[j] == target){
                index[0] = i;
                index[1] = j;
                return index;
            }
        }
    }
    
   return -1; 
}

