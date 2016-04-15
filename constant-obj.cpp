#include <iostream>
using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int val) : x(val) {}
    void set(int m)
    {
        x=m;
    }
    int get() const //constant mem fun which doesn't take any argument and it will return 'int' type...
    {
        return x;
        }
};

int main() {
  const MyClass foo1(10);
  MyClass foo2(20);
// foo.x = 20;            // not valid: x cannot be modified
  cout << foo1.x << '\n';  // ok: data member x can be read
 // foo1.set(23); //error
  cout<<foo1.get()<<endl; //this object only access constant member function..
  
  foo2.x = 30; 
  cout << foo2.x << '\n';
  foo2.set(43); 
  cout<<foo2.get()<<endl; 
  return 0;
}


//const int & get() const
