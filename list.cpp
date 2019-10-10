#include<iostream>
using namespace std;

 struct node
{
	int data;	// will store information
	node *next;	// the reference to the next node
};

struct node *head;

void append()
{
	node *temp=new node;
	cout<<"enter no."<<endl;
	cin>>temp->data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		node *p;
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
		
	}
}

void addatbegin()
{
	node *temp=new node;
	cout<<"enter no."<<endl;
	cin>>temp->data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else 
		temp->next=head;
	head=temp;
}

void addpos()
{
	int pos,i;
	
	cout<<"Enter a position"<<endl;
	cin>>pos;
	node *temp=new node;
	cout<<"enter no."<<endl;
	cin>>temp->data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		struct node *p;
		p=head;
		for(i=0;i<pos-1;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
		
	}
}

void delet()
{
	int no,count=1;
	 node *p,*q;
	p=head;
	node *temp=new node;
	cout<<"enter no."<<endl;
	cin>>no;
	temp->next=NULL;
	if(head==NULL)
	{
head=temp;
//cout<<"emty";
	}
	else
	{
	while(count<no)
	{
		q=p;
		p=p->next;
		count++;
	}
	q->next=p->next;
	p->next=NULL;
	free(p);
}
}


void display()
{
	struct node *p,*q;
	p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
		
}
	
int main()
{
	int choice;
	while(1)
	{
	cout<<"1.append"<<endl<<"2.addatbegin"<<endl<<"3.addatpos"<<endl<<"4.delete"<<endl<<"5.display"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:append();
		break;
		case 2:addatbegin();
		break;
		case 3:addpos();
		break;
		case 4:delet();
		break;
		case 5:display();
		break;
		default:cout<<"invalid";
		
	}
	}
}
	
	

