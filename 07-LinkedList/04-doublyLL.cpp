#include <bits/stdc++.h>
using namespace std;



struct Node {
	int  data;
	Node* next;
	Node* back;

	// Constructor 
	Node(int val){
		data = val;
		next = NULL;
		back = NULL;
	}

	Node(int val, Node* next, Node* back){
		data = val;
		this -> next = next;
		this -> back = back;
	}
};


Node* createDL(int arr[], int size){
	Node* head = new Node(arr[0]);
	Node *prev = head;
	for (int  i=1; i<size; i++){
		Node* temp = new Node(arr[i], nullptr, prev);
		prev->next = temp;
		prev = temp;
	}

	return head;

}



void print(Node* head){
	if (head == NULL) return;
	Node* temp = head;

	while (temp != NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main(){
	int  arr[] = {10,20,45,76,89};

	int size = sizeof (arr) / sizeof(arr[0]);
	Node* headptr = createDL(arr, size);

	print(headptr);
}