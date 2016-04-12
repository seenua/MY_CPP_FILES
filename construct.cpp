#include <iostream>

using namespace std;

class sam
{
	int v;
	public:
	sam(int m=0)
	{
	    cout<<"base class constructor"<<endl;
		v=m;
		
	}
	void dis()
	{
	cout<<"val= "<<v<<endl;
	}
};

class der :public sam
{
    int vm;
	public:
	der(int r=0):sam(r)
	{
	    vm=r;
	    cout<<"derived class constructor"<<endl;
	}
	void dpl()
	{
	    cout<<"vm = "<<vm<<endl;
	}
};


int main()
{
	der obj1(10);
	der obj2;
	//obj1.dis();
	//obj2.dis();
	obj1.dpl();
	obj2.dpl();
return 0;
}