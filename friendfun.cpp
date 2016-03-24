/* Normal fun,Member function and class act as friend*/

/*By using non member function accessing class memeber variables 
   Normal function accessing class meber variables.
*/

#include<iostream>

using namespace std;

class football;

class cricket
{
int CTC;
public:
friend int total_ctc(cricket &a,football &b);
cricket(int c)
{
CTC=c;
}
};

class football
{
int CTC;
public:
friend int total_ctc(cricket &a,football &b);
football(int c)
{
CTC=c;
}
};

int total_ctc(cricket &a,football &b)
{
return(a.CTC + b.CTC);
}


int main()
{
int tot;
cricket sachin(100);
football messy(200);
tot=total_ctc(sachin,messy);
cout<<"sum = "<<tot<<endl;
return 0;
}



/*========================================================================*/

/* By using one of the class member accessing other class private variable 
   we are making one member function friend here

*/


#include<iostream>

using namespace std;

class football;

class cricket
{
int CTC;
public:
cricket(int c)
{
CTC=c;
}
int calc_sum(football &ob);
};

class football
{
int CTC;
public:
friend int cricket::calc_sum(football &ob);
football(int c)
{
CTC=c;
}
};

int cricket::calc_sum(football &ob)
{
    return (CTC+ob.CTC);
}

int main()
{
int tot;
cricket sachin(100);
football messy(200);
tot=sachin.calc_sum(messy);
cout<<"sum = "<<tot<<endl;
return 0;
}

/*===================================================================*/

/* by using friend class accessing other class member variables */


#include<iostream>

using namespace std;

class football;

class cricket
{
int CTC;
public:
cricket(int c)
{
CTC=c;
}
friend class football;
};

class football
{
int CTC;
public:
football(int c)
{
CTC=c;
}
int sum_both(cricket &ob1)
{
    return(CTC+ob1.CTC);
}
};


int main()
{
int tot;
cricket sachin(100);
football messy(200);
tot=messy.sum_both(sachin);
cout<<"sum = "<<tot<<endl;
return 0;
}

/*=================================================================*/

/*combination of all the program*/

#include<iostream>

using namespace std;

class football;

class cricket
{
int CTC;
public:
friend int total_ctc(cricket &a,football &b);
cricket(int c)
{
CTC=c;
}
int calc_sum(football &ob);
friend class football;
};

class football
{
int CTC;
public:
friend int cricket::calc_sum(football &ob);
friend int total_ctc(cricket &a,football &b);
football(int c)
{
CTC=c;
}
int sum_both(cricket &ob1)
{
    return(CTC+ob1.CTC);
}
};

int total_ctc(cricket &a,football &b)
{
return(a.CTC + b.CTC);
}

int cricket::calc_sum(football &ob)
{
    return (CTC+ob.CTC);
}

int main()
{
int tot;
cricket sachin(100);
football messy(200);
tot=total_ctc(sachin,messy);
cout<<"sum = "<<tot<<endl;
tot=sachin.calc_sum(messy);
cout<<"sum = "<<tot<<endl;
tot=messy.sum_both(sachin);
cout<<"sum = "<<tot<<endl;
return 0;
}