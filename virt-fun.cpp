// Example program
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class player
{
    protected:
    char name[25];
    int runs;
    int pnom;
    public:
   virtual void playname()
    {
        cout<<"Please enter new player name"<<endl;
        cin>>name;
    }
   virtual void playrun()
    {
        runs=0;
        cout<<"runs :"<<runs<<endl;
    }
    virtual void playnom()
    {
        pnom=0;
        cout<<"nom :"<<pnom<<endl;
    }
    };

class virat :public player
{
    public:
    void playname()
    {
        cout<<"Batsman:virat"<<endl;
    }
    void playrun()
    {
        runs=10000;
        cout<<"runs : "<<runs<<endl;
    }
    void playnom()
    {
        pnom=250;
        cout<<"Nom :"<<pnom<<endl;
    }
};
class dhoni :public player
{
    public:
    void playname()
    {
        cout<<"Batsman:dhoni"<<endl;
    }
    void playrun()
    {
        runs=8550;
        cout<<"runs : "<<runs<<endl;
    }
    void playnom()
    {
        pnom=256;
        cout<<"Nom :"<<pnom<<endl;
    }
};

class abrijit:public player
{
    public:
    void playname()
    {
        cout<<"Batsman:abrijit"<<endl;
    }
    
};
int main()
{
    player *ptr;
    srand(time(NULL));
    switch(rand()%3+1)
    {
        case 1: 
              ptr=new virat();
              break;
        case 2:
              ptr=new dhoni();
              break;
        case 3:
              ptr=new abrijit();
              break;
    }
    ptr->playname();
    ptr->playrun();
    ptr->playnom();
    return 0;
}
