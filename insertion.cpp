#include<iostream>
#define maxm 20
using namespace std;
int arr[maxm];
int counter=-1;
void insertion(int val)
{
    if(counter==maxm-1)
        cout<<"full";
    else
        arr[++counter]=val;
}
int main()
{
  int i,val;
   for(i=0;i<=maxm;i++)
   {cout<<"enter the element";
   cin>>val;}
   insertion(val);

}
