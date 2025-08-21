#include <bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node* next;

	Node (int  val){
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

bool isPalindrome(Node* head){

	Node* fast = head;
	Node* slow = head;
	while(fast -> next != NULL && fast -> next -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
	} 

	Node* newHead = reverse (slow->next);

	Node* first = head;
	Node* second = newHead;

	while(second != NULL){
		
		if(first->data != second ->data) {
			reverse(newHead);
			return false;
		}
		first = first -> next;
		second = second -> next;
	}

	return true;
}


int main (){
 	int arr[] = {1, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* headptr = createLL(arr, n); 

    bool ispalin = isPalindrome(headptr);

    if(ispalin) {
    	cout << "yes"<< endl;

    }else{
    	cout << "NO"<<endl;
    }
}