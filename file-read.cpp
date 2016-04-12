#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ifstream file;
file.open("seen.txt");
if(file.is_open())
{
cout<<"success-case"<<endl;
/*file.good() will return true if any of the following bit set such as good,bad,fail,eof*/
string data;
while(file.good())
getline(file,data);
cout<<data<<endl;
}
else
{
cout<<"Error while opening the file"<<endl;
}
file.close();
return 0;
}
