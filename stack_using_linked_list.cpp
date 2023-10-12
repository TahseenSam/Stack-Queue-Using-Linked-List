#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{	
	int data;
	node* next;
};
class stack
{
	private:
		node *head,*tail;
	public:
		stack()	//constructor
		{
			head=NULL;
			tail=NULL;
		}
void push()
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
void pop()
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
		head=head->next;
		data=temp->data;
		delete temp;
		cout<<"\n"<<data<<" item popped successfully";
	}
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
	stack s;//object
	int x;
	char c='y';
	while(c=='y' || c=='Y')
	{
		system("cls");
		cout<<"1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Exit";
		cout<<"\nSelect Appropriate Operation :";
		cin>>x;
		switch(x)
		{
			case 1:
				s.push();
				break;	
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			default :
				exit(0);
		}
		cout<<endl<<"\nDo You Want To Perform  More Operation (y/Y) :";
		cin>>c;	
	}
	getch();
	return 0;
}
