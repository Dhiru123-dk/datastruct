#include<iostream>
#include<conio.h>
#define max 6
using namespace std;
int counter=-1;
int arr[max];


int deleteele()
{
if(counter==-1)
{
cout<<"array is empty";
return 0;
}

else
{
int x=arr[counter];
arr[counter]=0;
counter--;
return x;
}
}
int main()
{
int val;
for(int i=0;i<max;i++)
{
cout<<"enter "<<i<<" values in an array"<<endl;
cin>>val;
}
deleteele();
//deleteele();
//for(int i=0;i<counter+1;i++)
//{
//cout<<arr[i];
//}

//searching(5);
return 0;
}




