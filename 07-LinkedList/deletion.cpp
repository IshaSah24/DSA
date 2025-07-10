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
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

Node* removeNode (Node* head, int position){
	if (position == 1){
		Node* temp = head;
		head = head->next;
		delete(temp);
		return head;
	}

	int  count  = 1;
	Node* prev = head ;

	while (count != position){
		count+=1;

		if (count == position){
			prev->next = prev->next->next;
		}
		prev = prev->next;
	}
	return head;
}

int main (){
	int arr [] = {12,34,56,78,98};
	int  size = sizeof(arr) / sizeof(arr[0]);

	Node* headptr = createLL(arr, size);
	print(headptr);

    // new headptr after deleting head
	headptr = removeNode(headptr, 4); 

	// cout << headptr->data << endl;
	print(headptr);

}