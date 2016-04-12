
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
fstream file; //this object not associated with any  file,to do this we need open method..

file.open("sm.txt",ios::in|ios::out|ios::trunc);
//by default it will open in read and write mode,if this file not there then it will throw an error..to avoid this we need to add trunk mode

//file.is_open()//if file opened successfully it wil return true otherwise it will return false..

if(file.is_open())
{
cout<<"file opened successfullly"<<endl;
}
else
{
cout<<"there is error in opening file"<<endl;
}
file.close();
return 0;
}
