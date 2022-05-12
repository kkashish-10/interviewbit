/**
 * @file list_cycle.cpp
 * @author ddos_kas (kd372744@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
Try solving it using constant additional space.
Example :
Input : 
                  ______
                 |     |
                 \/    |
        1 -> 2 -> 3 -> 4
Return the node corresponding to node 3. 
https://www.interviewbit.com/problems/list-cycle/
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

ListNode* Solution::detectCycle(ListNode* A) {
   if( A==nullptr or A->next==nullptr) return nullptr;
   ListNode *slow=A,*fast=A;
   while(fast not_eq nullptr){
       if(fast->next==nullptr or fast->next->next==nullptr) return nullptr;
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast) break;
   }
   slow=A;
   while(slow!=fast)
       slow=slow->next,fast=fast->next;
    return slow;
}
*/