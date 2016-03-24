#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class player
{
int runs,avg,nom;
char *name;
int l;
public:
player(int r,int a,int n,char *nm)
{
cout<<"this is base class constructor"<<endl;
runs=r;
avg=a;
nom=n;
l=strlen(nm);
name=new char[l+1];
if(name!=NULL)
{
strcpy(name,nm);
}
}
virtual ~player()
{
	cout<<"base class destructor"<<endl;
	delete name;
}
};

class batsman: public player
{
int nof,noc;
char *co_nm;
int ln;
public:
batsman(int nf,int nc,char *co,int r,int a,int n,char *nm):player(r,a,n,nm)
{
	cout<<"this is derived class constructor"<<endl;
	nof=nf;
	noc=nc;
	ln=strlen(co);
	co_nm=new char[ln+1];
	if(co_nm!=NULL)
	{
		strcpy(co_nm,co);
	}
}
~batsman()
{
	cout<<"Derived class destructor"<<endl;
	delete co_nm;
}
};

int main()
{
	player *ptr;
	ptr=new batsman(100,50,"india",10000,50,300,"sachin");
	delete ptr;
	return 0;
}

/*output : BEFORE ADDING "VIRTUAL keyword in base class" */
/* this is base class constructor
   this is derived class constructor
   base class destructor   */
   
   /*output : after ADDING "VIRTUAL keyword in base class" */
/* this is base class constructor
   this is derived class constructor
   Derived class destructor
   base class destructor   */
   