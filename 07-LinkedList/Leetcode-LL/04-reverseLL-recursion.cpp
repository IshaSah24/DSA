#include<bits/stdc++.h>
using namespace std;



struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


Node* createLL(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = new Node(arr[0]);   // Head -> [data: 1, nextptr: NULL]
    Node* current = head;

    for (int i = 1; i < n; ++i) {
        current->next = new Node(arr[i]); 
        current = current->next;
    }

    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

	
Node* reverse(Node* head){
	Node* prev = NULL;

	if (head == NULL || head -> next == NULL){
		return head;
	}

	Node* newHead = reverse(head->next);

	Node* front = head -> next;
	front -> next = head;
	head -> next = NULL;

	return  newHead;
}

int main (){
    int arr[] = {1, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* headptr = createLL(arr, n);  

    printLL(headptr);

    Node* newHead = reverse(headptr);

    printLL(newHead);
    return 0;

}