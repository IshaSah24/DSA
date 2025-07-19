#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};


ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* dummy = new ListNode (0);
        dummy->next = head; 
        
        ListNode* leftPrevNode = dummy;
        ListNode* curNode = head;
        for (int i = 0; i < left-1; i++){
          leftPrevNode = leftPrevNode->next;
          curNode = curNode -> next;

          
        }

        ListNode* prevNode = NULL;
         ListNode* lastNode = curNode;
        for (int i= 0; i<=right-left; i++){
           ListNode* nextNode = curNode -> next;
           curNode -> next = prevNode;
           prevNode = curNode; 
           curNode = nextNode;
        }
       leftPrevNode -> next = prevNode;
       lastNode-> next = curNode;

       return dummy->next;
}


void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}




int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    int left = 2, right = 4;
    ListNode* newHead = reverseBetween(head, left, right);

    cout << "List after reversing from " << left << " to " << right << ": ";
    printList(newHead);

    return 0;
}