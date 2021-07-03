
/*	Singly Linked List operations
-------------------------------------
	1. appendNode()
	2. prependNode()
	3. insertNodeAfter()
	4. deleteNodeByKey()
	5. UpdateNodeByKey()
	6. Print()
*/


#include<iostream>
using namespace std;

class node{
	public:
		int key;
		int data;
		Node* next;

		Node()
		{
			key = 0;
			data =0;
			next = NULL; 
		}
		Node( int k, int d)
		{
			key =k;
			data = d;
		}

};

class SinglyLinkedList{
	public:
		Node* head;

		SinglyLinkedList()
		{
			head = NULL; 
		}
		SinglyLinkedList(Node *n)
		{
			head = n;
		}

		// check if node exist using a key value

		Node* nodeExist(int k)
		{
			Node* temp = NULL;
			Node* ptr = head;
			while(ptr != NULL)
			{
				if(ptr->key==k)
				{
					temp = ptr;
				}
				ptr = ptr->next;
			}
			return temp;
		}

		// Append a node to the end of the list
		void appendNode(Node *n)
		{
			if(nodeExist(n->key) != NULL)
			{
				cout<<" node already exist"<<n->key<< " . Append another node with different key value"<<endl;
			}
			else
			{
				if(head == NULL)
				{
					head = n;
					cout<<" node appended"<<endl;
				}
				else
				{
					Node* ptr = head;
					while(ptr->next != NULL)
						{
							ptr = ptr->next;
						}
					ptr -> next =n;
					cout<<" node appended"<<endl;	

				}
			}
		}

		// prepend node
		void prependNode( Node *n)
		{
			if(nodeExist(n->key) != NULL)
			{
				cout<<" node already exist key value"<<n->key<<" . Append another node with different key"<<endl;
			}
			else{
				n->next = head;
				head = n;
				cout<<" node prepended"<<endl;
			}
		}

		// insert a node after a particular node in a list
		void insertNodeAfter(int k, Node *n)
		{
			node* ptr = nodeExist(k);
			if(ptr == NULL)
				cout<<" no onode exist with key value"<<k<<endl;
			else
			{
					if(nodeExist(n->key) != NULL)
				{
					cout<<" node already exist key value"<<n->key<<" . Append another node with different key"<<endl;
				}
				else
				{
					n -> next = ptr ->next;
					ptr -> next =n;
					cout<<" node inserted "<<endl; 
				}
			}
		}

		// delete node by key
		void deleteNodeByKey(int k)
		{
			if(head == NULL)
				cout<<" can't delete ! its empty"<<endl;
			else if(head != NULL)
			{
				if(head ->key ==k )
				{
					head = head->next;
					cout<<" node unlinked with the key"<<endl;
				}
				else
				{
					Node* temp = NULL;
					Node* prevptr = head;
					Node* currentptr = head->next;
					while(currentptr != NULL)
					{
						if(currentptr->key == k)
						{
							temp = currentptr;
							currentptr = NULL;	
						}
						else
						{
							prevptr = prevptr -> next;
							currentptr = currentptr -> next;
						}
					}

					if(temp != NULL)
					{
						prevptr -> next = temp -> next;
						cout<<"NODE unlinked with key value: "<<k <<endl;

					}
					else
					{
						cout<<" node doesnot exist with key value : "<<k<<endl;
					}


				}

			}
		}

		// update node 
		void UpdateNodeByKey(int k, int d)
		{
			Node* ptr = nodeExist(k);
			if(ptr != NULL)
			{
				ptr -> data = d;
				cout<<" node data updatd successfully"<<k<<endl;

			}
			else
			{
				cout<<" node doesnot exist"<< k <<endl;
			}
		}

		// printing

		void printList()
		{
			if(head==NULL)
			{
				cout<<" no node in singly linked ist ";
			}
			else
			{
				cout<<endl<<" singly linked list value are: ";
				Node* temp = head;

				while(temp != NULL)
				{
					cout<<" (" <<temp->key<<","<<temp->data<<" )-->";
					temp = temp -> next;
				}
			}
		}

};

int main()
{
	SinglyLinkedList s;
	int option;
	int key1, k1, data1;

	do
	{
		cout<<"\n What operation do you want to perform? Select the Operation number according to your preference. Enter 0 to exit "<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNodeAfter() "<<endl;
		cout<<"4. deleteNodeByKey() "<<endl;
		cout<<"5. UpdateNodeByKey()"<<endl;
		cout<<"6. printList()"<<endl;
		cout<<"7. Clear Screen"<<endl<<endl;


		cin>>option;
		Node* n1 = new Node();

		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Append node option \n Enter key and data of the Node to Appended "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1 -> data= data1;
				s.appendNode(n1);
				break;
			case 2:		
				cout<<" prepend Node Operation \nEnter key & data of the Node to be prepend"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1 -> data= data1;
				s.prependNode(n1);
				break;
			case 3:
				cout<<" enter key of existing node after which you want to insert the node"<<endl;	
				cin>>k1;
				cout<<"enter the key and data of the new node  "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1 -> data= data1;
				s.insertNodeAfter(k1,n1);
				break;
			case 4:
				cout<<" delete node by key "<<endl;
				cin>>k1;
				s.deleteNodeByKey(k1);
				break;
			case 5:
				cout<<"update node by key : "<<endl;
				cin>>key1;
				cin>>data1;
				s.UpdateNodeByKey(key1,data1);
				break;
			case 6:
				s.printList();
				break;
			case 7:
				system("cls");
				break;			

		}
	}
return 0;
}