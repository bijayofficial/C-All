#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node* head = NULL;
void insert(int new_data) 		// insert at the beginning
{

	struct Node* new_node=(struct Node*) malloc(sizeof(struct Node)); // create a new node of size strct Node,
							        // and pointer cast into node type

	new_node->data= new_data;  	//assign data into the data part of new node.
	new_node->next= head;		//set the head into address part of node.
	head = new_node;
}


void display()
{
	struct Node* ptr;   // making a pointer of structure type
	ptr = head;        // set pointer as head
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";		// print the data part of a node
		ptr = ptr->next;				// shift the pointer to the next node
	}
}

int main()
{
	insert(1);
	insert(5);
	insert(7);
	cout<<" the linked list is : ";
	display();

	return 0;
}