// Example program for function template
#include <iostream>
#include <string>
using namespace std;

// this will automatically overload function,based on the parameter...

template <typename T> //either i can use typename or class for declaring template
void display(T a)
{
    cout<<"passed arguments : "<<a<<endl; //generic programing it will work for all the types..
}


int main()
{
    display(10.5);
    display(10);
    display("seenu");
return 0;
}


// function templates
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main ()
{
  if (are_equal(10,10.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";
  return 0;
}




//example for class template

class calc
{
  public:
    int multiply(int x, int y);
    int add(int x, int y);
 };
int calc::multiply(int x, int y)
{
  return x*y;
}
int calc::add(int x, int y)
{
  return x+y;
}

above one only work for integers and i want to make this to work for all the types..
so we need to go for class template..

#include <iostream>

using namespace std;

template <class A_Type> 
class calc
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};

template <class A_Type> 
A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}

template <class A_Type> 
A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}


int main()
{
calc <int> obj1; // u must specifie the type here while creating object..
calc <float> obj2; // u must specifie the type here while creating object..
cout<<obj1.multiply(10,5)<<endl;
cout<<obj1.add(10,5)<<endl;

cout<<obj2.multiply(10.5,5.5)<<endl;
cout<<obj2.add(10.5,5.0)<<endl;
return 0;
}


// template arguments
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main() {
  std::cout << fixed_multiply<int,2>(10) << '\n';
  std::cout << fixed_multiply<int,3>(10) << '\n';
}
