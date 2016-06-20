#include <iostream>

using namespace std;


void bubble(int a[],int len)
{
int i;
int j;
int t;
	for(i=len;i>0;i--)
	{
		for(j=1;j<i;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
}

int main()
{
	int a[]={5,3,2,4};
	int i;
	bubble(a,4);
	cout<<"Sorted Elements are\n";
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
