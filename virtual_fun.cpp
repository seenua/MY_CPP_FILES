#include<iostream>
#include<cstdlib>
using namespace std;

class base
{
public:
base()
{
	cout<<"Base class-Constructor"<<endl;
}
~base()
{
	cout<<"Base class-Destructor"<<endl;
}
virtual void show()
{
	cout<<"This is Base Class"<<endl;
}
};

class derived:public base
{
	public:
	derived()
	{
		cout<<"Derived class-Constructor"<<endl;
	}
	~derived()
	{
		cout<<"Derived class-Destructor"<<endl;
	}
	void show()
	{
		cout<<"This is Derived Class"<<endl;
	}
};

int main()
{
	base *ptr;
	ptr=new base();
	ptr->show();
	cout<<endl;
	derived ob1;
	cout<<endl;
	ptr=new derived();
	ptr->show();
	cout<<endl;
	return 0;
}


/* OUTPUT :  

Base class-Constructor
This is Base Class

Base class-Constructor
Derived class-Constructor

Base class-Constructor
Derived class-Constructor
This is Derived Class

Derived class-Destructor
Base class-Destructor */