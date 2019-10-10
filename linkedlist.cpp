#include<iostream>
using namespace std;
class linkedlist
{
    struct node
    {
        int data;
        node *next;
    }*start;
public:

    linkedlist()
    {
        start=NULL;
    }
    void append(int val)
    {
        node *t=NULL;
        t=new node;
        if(t==NULL)
        {
            cout<<"overflow";
            return;
        }
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

void display()
{
  node *t;
  t=start;
  if(start==NULL)
  {
    cout<<"empty";
  }
  else
  {
     while(t!=NULL)
{


        cout<<t->data<<" ";
   t=t->next;
  }
}
}
};
int main()
{
    linkedlist l;
    l.append(4);
    l.display();
    return 0;
}
