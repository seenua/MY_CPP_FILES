#include <iostream>
#include <cstdlib>

using namespace std;

class player
{
int *ptr;
public:
player(int n)
{
    cout<<"parameterized constructor"<<endl;
    ptr=new int;
    if(ptr!=NULL)
    {
        *ptr=n;
    }
}
player(const player &ob)
{
    cout<<"copy constructor"<<endl;
    ptr=new int;
    if(ptr!=NULL)
    {
        *ptr=*ob.ptr;
    }
}
void show_score()
{
    cout<<*ptr<<endl;
}
};

int main()
{
 player sachin(100);
 player virat(sachin);
 sachin.show_score();
 virat.show_score();
	return 0;
}



/*OUTPUT :  
  parameterized constructor
copy constructor
100
100 */