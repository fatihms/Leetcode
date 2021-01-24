# Source: https://leetcode.com/problems/add-two-numbers/

# 2. Add Two Numbers [Medium]

'''
 You are given two non-empty linked lists representing two non-negative integers. 
 The digits are stored in reverse order, and each of their nodes contains a 
 single digit. Add the two numbers and return the sum as a linked list.
  
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
'''

# Example

'''
 Input: l1 = [2,4,3], l2 = [5,6,4]
 Output: [7,0,8]
 Explanation: 342 + 465 = 807.
'''

# Solution (Approach 1: Elementary Math)

'''
 Time complexity: O(max(m,n))
 Space complexity: O(max(m,n))
'''

# Submissions (01/19/2021 22:35)

'''
 Runtime: 64 ms, faster than 89.34% of Python3 online submissions for Add Two Numbers.
 MMemory Usage: 14.3 MB, less than 73.39% of Python3 online submissions for Add Two Numbers.
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode(None)
        curr = head
        
        # for overflow
        cary = 0
        
        while(l1 != None or l2 != None or cary != 0):
            # get l1 value and itteration for linked list l1
            if(l1 != None):
                x = l1.val
                l1 = l1.next
            else:
                x = 0
             
            # get l2 value and itteration for linked list l2
            if(l2 != None):
                y = l2.val
                l2 = l2.next
            else:
                y = 0
            
            # adding two values and carry 
            sumVal = x + y + cary

            # reset carry
            cary = 0
            
            # check if value after sum is more than 9 or not
            if sumVal > 9:
                sumVal %= 10
                cary = 1
            
            # add node to list
            curr.next = ListNode(sumVal)
            curr = curr.next
            
        return head.next