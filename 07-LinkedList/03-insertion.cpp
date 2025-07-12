#include<bits/stdc++.h>
using namespace std;

struct Node {
	int  data;
	Node* next;

	// Constructor 
	Node(int val){
		data = val;
		next = NULL;
	}

	Node(int val, Node* next){
		data = val;
		this -> next = next;
	}
};

Node* createLL(int arr[], int size){
	Node* head = new Node(arr[0]);

	Node* temp  = head;
	for (int  i=1; i<size; i++){
		Node* current = new Node(arr[i]);
		temp->next = current;
		temp = current;
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


Node* insertNode (Node* head, int  val, int pos){
	if (head == NULL && pos == 1){
		return new Node(val);
	}
	if (pos == 1){
		Node* temp = new Node(val, head);
		return temp;
	}

	int count = 1;
	Node* prev = head;
	while (count < pos-1){
		count++;
		prev = prev->next;

		if (prev == NULL) {
			cout << "Invalid Index" << endl;
			return NULL;
		}
	}

	Node* cur = new Node(val);
	cur -> next = prev -> next;
	prev -> next = cur;

	return head;
}

Node* insertByValue(Node* head, int elToAdd, int val){

	if (head == NULL){
		return NULL;
	}

	if (head->data == val){
		Node* cur = new Node(elToAdd, head);
		return cur;
	}

	Node* prev = NULL;
	Node* temp = head;

	while(temp != NULL && temp->data != val){
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) {
		cout << "Value " << val << " not found in list.\n";
		return head;
	}

	Node* cur = new Node(elToAdd, temp);
	prev->next = cur;

	return head;
}

int main (){
	int arr [] = {12,34,56,78,98};
	int  size = sizeof(arr) / sizeof(arr[0]);

	Node* headptr = createLL(arr, size);
	cout << "Initial Node : ";
	print(headptr);

	cout << "Inserting Node : ";
	Node* isNotNull = insertNode(headptr, 100, 2);
	if (isNotNull != NULL){
		headptr = isNotNull;
		print(headptr);
	}

	cout << "Inserting Node By Value : ";
	isNotNull = insertByValue(headptr,1, 12);
	if (isNotNull != NULL){
		headptr = isNotNull;
		print(headptr);
	}

	return 0;


	// cout << headptr->data << endl


}