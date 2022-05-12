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
Given a linked list, swap every two adjacent nodes and return its head.
For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.
Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
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
ListNode *Solution::swapPairs(ListNode *head)
{
    if (head == nullptr or head->next == nullptr)
        return head;
    ListNode *dummy = head;
    while (dummy not_eq nullptr)
    {
        if (dummy->next)
            swap(dummy->val, dummy->next->val);
        else
            break;
        dummy = dummy->next->next;
    }
    return head;
}
*/