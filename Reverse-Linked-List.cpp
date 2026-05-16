1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12private:
13void rev(ListNode* &head,ListNode* prev,ListNode* curr){
14    if(curr == NULL){
15        head = prev;
16        return;
17    }
18
19    ListNode* nextnode = curr->next;
20
21    curr->next = prev;
22    rev(head,curr,nextnode);
23}
24public:
25    ListNode* reverseList(ListNode* head) {
26        rev(head,NULL,head);
27        return head;
28    }
29};