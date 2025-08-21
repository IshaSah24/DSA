// Erlier bug  :  Node *deletePos(Node* delPtr) i was directly returning the delptr for  every  cases  like  :

// case 1 : if  the delptr is head  then  i was  returning the new head "temp"  by  making another node  type after deleting the head.

// case 2 (BUG) : if the head  is  tail  then i had no way  of returning the  new head  after  deleting the  tail(delptr)
// case 3(BUG) : if the  delptr  is the middle node b/w  two  nodes here  i  can't  return  the head too and  it  doesn't even make  any  sense to  return the nullptr/NULL/delPtr

// Solution  :  taking the actual  head  parameter to  return  the head after  deleting the middle, last  Nodes

// 	example :
// 		Node *deletePos(Node* head, Node *delPtr) 

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node *back;

	Node(int val) {
		this->data = val;
		this->next = nullptr;
		this->back = nullptr;
	}

	Node(int val, Node *back, Node *next) {
		this->data = val;
		this->back = back;
		this->next = next;
	}
};

Node *createDL(int arr[], int size) {
	if (size <= 0)
		return NULL;
	Node *head = new Node(arr[0]);
	Node *prev = head;
	for (int i = 1; i < size; i++) {
		Node *temp = new Node(arr[i], prev, nullptr);
		prev->next = temp;
		prev = temp;
	}
	return head;
}

Node *deletePos(Node* head, Node *delPtr) {
	if (delPtr == NULL) return nullptr;
	if (delPtr->back == NULL && delPtr->next == NULL) {
		delete (delPtr);
		return NULL;
	}
	if (delPtr->back == NULL) {
		Node* temp = delPtr;
		delPtr = delPtr->next;
		delPtr->back = NULL;
		temp->next = NULL;
		delete (temp);
		return delPtr;
	}
	if (delPtr->next == NULL) {
		Node *prev = delPtr->back;
		prev->next = NULL;
		delPtr->back = NULL;
		delete delPtr;
		return head;;
		
	}
	Node* prev = delPtr->back;
	Node* front = delPtr->next;
	prev->next = front;
	front->back = prev;
	delete delPtr;
	return head;
	
}

void printDL(Node *head, string output) {
	if (head == NULL){
		cout << output << " Empty List"<< endl;
		return;
	}
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main() {
	int arr[] = {10};
	string output = "Output :";
	int size = sizeof(arr) / sizeof(arr[0]);

	Node* headptr = createDL(arr, size);
	headptr= deletePos(headptr, headptr);

		// cout << headptr<< endl;
		printDL(headptr, output);
}
