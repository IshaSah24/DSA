#include <iostream>
using namespace std;



struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == NULL)
            return list2;


        if (list2 == NULL)
            return list1;

        ListNode* ptr = list1;
        if (list1->val > list2->val) {
            ptr = list2;
            list2 = list2->next;
        } else {
            list1 = list1->next;
        }
        ListNode* curr = ptr;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        if (!list1)
            curr->next = list2;
        else
            curr->next = list1;

        return ptr;
}

void printList(ListNode* head){ 
    if (head == NULL){
        return ;
    }
    ListNode* temp = head;
    while (temp != NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }

    cout<< "NULL"<<endl;
    return;
}

int main() {
    // list -1
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // list -2
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(list1, list2);
    printList(merged);

    return 0;
}