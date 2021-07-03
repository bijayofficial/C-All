#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node
{ 
	int data;
	int Node* next;
	
};

int main()
{
	int i ,item, n;
	struct node *p , *q , *head;


	cout<<"enter the number of nodes : ";
	cin>>n;

	cout<<"enter the value of head node ";
	cin>>item;

	q = (struct Node *) malloc(sizeof(struct Node));

	q->data = item;
	q->next = NULL;

	head = q;
	p = head;

	for(int i = 1; i<n ; i++)	// since the 0th node is already created so i will start from 1.
	{
		cout<<"enter the value of next node ";
		cin>>item;

		q = (struct Node *) malloc(sizeof(struct Node));

		q->data = item;
		q->next = NULL;


		p -> next = q;	// link the nodes
		p = p -> next; 	// jump to the current node
	}

	cout<<"\n";

	p = head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}

	return 0;
}