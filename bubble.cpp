#include<iostream>
using namespace std;
template<class bubble>
void bubbles(bubble a[], int n)
{
	int i, j;
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				bubble element;
				element = a[i];
				a[i] = a[j];
				a[j] = element;
			}
		}
	}
}

int main()
{
	int a[6]={1,2,3,4,4,3,};
	char b[4]={'s','b','d','e'};
	bubbles(a,6);
	cout<<"\nSorted Order Integers: ";
	for(int i=0;i<6;i++)
		cout<<a[i]<<"\t";
	bubbles(b,4);

	cout<<"\nSorted Order Characters: ";
	for(int j=0;j<4;j++)
		cout<<b[j]<<"\t";
return 0;
}


