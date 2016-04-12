#include <iostream>

#include <fstream>

using namespace std;

int main()
{

ofstream file("see.txt");//it wil always open in out and trunc mode..
if(file.is_open())
{
file<<"hi i am seenu"<<endl; //<< operator used to write data into file
file<<"studying C++ in utube"<<endl;
cout<<"file opened successfully"<<endl;
}
else
{
cout<<"Error in file opening"<<endl;
}
file.close();
return 0;
}
