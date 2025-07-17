#include <iostream>
using namespace std;



struct ListNode {
    int val;
    ListNode* next;
    ListNode* back;

    ListNode(int val){
        this -> val = val;
        next = NULL;
        back = NULL;
    }

    ListNode(int val, ListNode* next, ListNode* back){
        this -> val = val;
        this -> next = next;
        this -> back = back;
    }

};


ListNode* reverseNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* newHead = NULL;

        while (temp != NULL){
            ListNode* prev = temp->back;
            ListNode* front = temp -> next ;

            temp -> next= prev; // prev  == NULL  then  next  would ne  NULL
            temp -> back = front;

            newHead = temp;
            // temp = temp->next ;
            temp = front; // as next is  now  NULL

        }
        return newHead;
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
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(5);

    list1->next = node2;
    node2->back = list1;

    node2->next = node3;
    node3->back = node2;

    printList(list1);
    ListNode* head = reverseNode(list1);
    printList(head);

    return 0;
}