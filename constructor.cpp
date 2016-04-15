// Example program
#include <iostream>
#include <string>

using namespace std;
class A
{ 
    int d=10;
    public:
    A(){}
    A(int m)
    {
        d=m;
    }
    void display()
    {
        cout<<d<<endl;
    }
};
    
int main()
{
 A o1; //it will take default value,to make this work,we must hv default constructor in my class,otherwise it will throw an error..
 A o2(20);
 o1.display();
 o2.display();
 return 0;
}
