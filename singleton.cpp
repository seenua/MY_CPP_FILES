// Example program for singleton class
#include <iostream>

using namespace std;

class single
{
    public:
    static single * createobj()
    {
        if(creat_obj==NULL)
        {
            creat_obj=new single();
        }
        return creat_obj;
    }
    private:
    static single *creat_obj;
    single()
    {
        cout<<"this is singleton-class"<<endl;
    }
};

single * single :: creat_obj=NULL;

int main()
{
   single *s1=single::createobj(); 
   single *s2=single::createobj(); 
   single *s3=single::createobj(); 
  return 0;
}
