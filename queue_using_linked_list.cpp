#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{	
	int data;
	node* next;
};
class queue
{
	private:
		node *head,*tail;
	public:
		queue()	//constructor
		{
			head=NULL;
			tail=NULL;
		}
void enqueue()
{
	char c='y';
	while(c=='y' ||c=='Y')
	{
	int x;
	cout<<"\nEnter Data For The Node :";
	cin>>x;
	node* temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
	}
	cout<<endl<<"\nDo You Want To Store More Nodes (y/Y) :";
	cin>>c;	
	}
}
void dequeue()
{
	if(head==NULL)
	{
		printf("\nNo Nodes To Delete");
	}
	else
	{
		int data;
		node* temp;
		temp=head;
		data=head->data;
		head=head->next;
		delete temp;
		cout<<"\n Item "<<data<<" popped successfully";

	}
	getch();
}
void display()
{
	node *start=new node;
	start=head;
	while(start!=NULL)
	{
		cout<<start->data<<"->";
		start=start->next;
	}
}
};
int main()
{
	queue s;//object
	int x;
	while(1)
	{
		system("cls");
		cout<<"1.Enqueue\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Display\n";
		cout<<"4.Exit";
		cout<<"\nSelect Appropriate Operation :";
		cin>>x;
		switch(x)
		{
			case 1:
				s.enqueue();
				break;	
			case 2:
				s.dequeue();
				break;
			case 3:
				s.display();
				break;
			default :
				exit(0);
		}
	}
	getch();
	return 0;
}
