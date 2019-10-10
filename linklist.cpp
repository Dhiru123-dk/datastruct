#include<iostream>
using namespace std;
class linklist
{
	struct node
	{
	  int data;
          node *next;
	}
        *start;
         public:
	 linklist()
	 {
	  start=NULL;
     }
    void append(int val)
    {
     node *t=NULL;
     t=new node;
     if(t==NULL)
     cout<<"overflow insertion";
     t->data=val;
     t->next=NULL;
     if(start==NULL)
     start=t;
     else
     {
      node *r=start;
      while(r->next!=NULL)
      r=r->next;
      r->next=t;
     }
    }
void insertion(int val)
{

    node *t=NULL;
    t=new node;
    if(t==NULL)
    cout<<"overflow insertion";
    t->data=val;
    t->next=start;
     start=t;
}
void insertpos(int val,int pos)
{
    node *t= NULL;
    t=new node;
    if(t==NULL)
    cout<<"overflow insertion";
    t->data=val;
    if(start==NULL)
    {
        cout<<"list empty";
        return;
    }
    else
    {
        node *r=start;
        for(int i=1;i<=pos;i++)
        r=r->next;
        t->next=r->next;
        r->next=t;
    }
}
void deletion(int val)
{
    node *t,*r;
    t=start;
    if(start==NULL)
    {
    cout<<"deletion not possible";

    }
    //else
    //{
        //node *t,*r;
        //t=start;
        while(t!=NULL)
        {
            if(t->data==val)
               {
                   if(t==start)
                    start=t->next;
                    else
                      r->next=t->next;
                      delete t;
                      break;
                }
            else
            {
                r=t;
                t=t->next;
            }
        }
    //}
}
void display()
{
if(start==NULL)
{
cout<<"insert the elements";
return;
}
else
{
node *t=start;
while(t!=NULL)
{
cout<<t->data<<endl;
 t=t->next;
}
}
}
};
int main()
{
linklist l1;
cout<<"list:"<<endl;
l1.append(20);
l1.append(10);
l1.insertion(30);
l1.insertion(40);
l1.insertpos(25,2);
l1.insertpos(35,1);
l1.display();
cout<<"after deletion the value"<<endl;
l1.deletion(30);
l1.display();

}
