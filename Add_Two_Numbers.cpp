class Solution {
public:
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode tmp(0);
        ListNode* curr = &tmp;
        int digit = 0;
        while (list1 != nullptr || list2 != nullptr || digit > 0)
        {
            if (list1 != nullptr) {
                digit += list1->val;
                list1 = list1->next;
            }
            if (list2 != nullptr) {
                digit += list2->val;
                list2 = list2->next;
            }

            curr->next = new ListNode(digit % 10);
            digit = digit / 10;
            curr = curr->next;
        }
        return tmp.next;
    }
};
