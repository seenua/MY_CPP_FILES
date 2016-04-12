#include <iostream>

using namespace std;

class base;

class der 
{
public:
void dis(base &ob); //we must define this function outside after defining both the classes... 
};

class base
{
int v;
public:
base(int a=0)
{
v=a;
}
friend void der::dis(base &ob);
};

void der::dis(base &ob)
{
    cout<<ob.v<<endl;
}

int main()
{
base o;
der obj;
obj.dis(o);
return 0;
}

//I have one base class and it has a integer variable,also defined the constructor for that class..
/*e.g: 
class sm
{
int d;
public:
sm(int m=0)
{
d=m;
}
};*/

//we need to derive base class and my derived class should display base class variable value..