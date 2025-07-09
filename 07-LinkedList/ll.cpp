#include <bits/stdc++.h>
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

int main() {
    int arr[] = {1, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* headptr = createLL(arr, n);  

    printLL(headptr);

    return 0;
}





so  linked list  is DS which  can  hold data and a pointer combination  of these  two is actually called  as  "node",  to  hold this  type of data with  pointer  we  cannot  use regular  datatypes  like int  float etc,  so here  we  use self defined data type called as  "Node" with  using  struct similar  to  class.

Advantages :

	Dynamic memory allocation:
	Since linked lists use new keyword, nodes are stored in heap memory.
	
	Linked list allows O(1) insert/delete at beginning (if head is known).

