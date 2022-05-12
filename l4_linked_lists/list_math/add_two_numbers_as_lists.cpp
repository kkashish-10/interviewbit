/**
 * @file add_two_numbers_as_lists.cpp
 * @author ddos_kas (kd372744@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-05-12
 *
 * @copyright Copyright (c) 2022
 *
 */

/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
342 + 465 = 807
Make sure there are no trailing zeros in the output list
So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.
https://www.interviewbit.com/problems/add-two-numbers-as-lists/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *res = new ListNode(0), *dummy = res;
    int sum = 0, carry = 0;
    while (l1 not_eq nullptr or l2 not_eq nullptr or carry)
    {
        sum = (l1 not_eq nullptr ? l1->val : 0) + (l2 not_eq nullptr ? l2->val : 0) + carry;
        dummy->next = new ListNode(sum % 10);
        dummy = dummy->next;
        carry = sum / 10;
        l1 = l1 not_eq nullptr ? l1->next : l1;
        l2 = l2 not_eq nullptr ? l2->next : l2;
    }
    return res->next;
}

*/