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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> arr;

        ListNode* temp = head;

        while(temp) {
            arr.push_back(temp);
            temp = temp->next;
        }

        int s = arr.size() - n;

        arr.erase(arr.begin() + s);

        if(arr.empty()) return NULL;

        for(int i = 0; i < arr.size() - 1; i++) {
            arr[i]->next = arr[i+1];
        }

        arr.back()->next = NULL;

        return arr[0];
    }
};