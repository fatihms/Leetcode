// Source: https://leetcode.com/problems/add-two-numbers/

// 2. Add Two Numbers [Medium]

/*
 * You are given two non-empty linked lists representing two non-negative integers. 
 * The digits are stored in reverse order, and each of their nodes contains a 
 * single digit. Add the two numbers and return the sum as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 */

// Example

/*
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807.
 */

// Solution (Approach 1: Elementary Math)

/*
 * Time complexity: O(max(m,n))
 * Space complexity: O(max(m,n))
 */

// Submissions (01/21/2021 21:22)

/*
 * Runtime: 24 ms, faster than 92.67% of C++ online submissions for Add Two Numbers.
 * Memory Usage: 71.1 MB, less than 92.43% of C++ online submissions for Add Two Numbers.
 */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode **curr = &head;
        
        // declaring variable for overflow, addition, number 
        int x, y, sumVal, cary = 0;
            
        while(l1 != NULL || l2 != NULL || cary != 0 ){
            // get l1 value and itteration for linked list l1
            if(l1 != NULL){
                x = l1->val;
                l1 = l1->next;
            }else{
                x = 0;
            }
            
            // get l2 value and itteration for linked list l2
            if(l2 != NULL){
                y = l2->val;
                l2 = l2->next;
            }else{
                y = 0;
            }
            
            // adding two values and carry 
            sumVal = x + y + cary;
                
            // reset carry
            cary = 0;
                
            // check if value after sum is more than 9 or not
            if(sumVal > 9){
                sumVal %= 10;
                cary = 1;
            }
            
            // inserting at the list
            ListNode *newNode = new ListNode(sumVal);   
            *curr = newNode;
            curr = (&newNode->next);
        }       
        
      return head;      
    }
};