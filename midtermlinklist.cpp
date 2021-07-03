#include<iostream>
#include<bits/stdc++.h>  

using namespace std;

//	STRUCT 

struct Node
{
	int data;
	struct Node* next;
};

// FUNCTION TO PRINT THE MIDDLE VALUE OF LINKED LIST 
void printMiddle(struct Node *head)
{
	struct Node *slow_ptr = head;
	struct Node *fast_ptr = head;

	if(head !=NULL)
	{
		while (fast_ptr !=NULL && fast_ptr -> next !=NULL)
		{
			fast_ptr = fast_ptr -> next -> next;
			slow_ptr = slow_ptr -> next;
		}
	cout<< slow_ptr-> data;	
	}
}

// FUNCTION TO ADD NEW NODE .

void push(struct Node **head_ref, int new_data)
{
	// CREATE NEW NODE
	struct Node* new_node = new Node;
	
	// PUT DATA INTO IT
	new_node -> data = new_data;

	// LINK THE OLD LIST OFF TO NEW NODE
	new_node -> next = (*head_ref);

	//MOVE THE HEAD TO POINT NEW NODE
	(*head_ref) = new_node;


}

// FUNCTION TO PRINT A GIVEN LINKED LIST
void printList(struct Node *ptr)
{
	while(ptr != NULL)
	{
		cout<<ptr->data;
		ptr = ptr -> next;
	}
	cout<<endl;
}
int main()
{
	// START WITH AN EMPTY LIST
	struct Node* head = NULL;

	// INTERACT AND ADD ELEMENT
	for(int i=5; i>0; i--)
	{
		push(&head, i);
		printList(head);
		printMiddle(head);
	}
	return 0;
}