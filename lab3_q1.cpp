//include the library file
#include<iostream>
using namespace std;
//include main function
int main()
{//declare and define varibles 
char a='a';
int b=2;
float c=2.07;
double s=2.9765;
bool f=0;
//prnt value stored in every varible and its size
cout<<"\n value stored in char variable="<<a<<" size of character variable="<<sizeof(a);
cout<<"\n value stored in integer varible="<<b<<" size of integer varible="<<sizeof(b);
cout<<"\n value stored in float varible="<<c<<" size of float varible="<<sizeof(c);
cout<<"\n value stored in double varible="<<s<<" size of double varible="<<sizeof(s);
cout<<"\n value stored in bool varible="<<f<<" size of bool varible="<<sizeof(f);
return 0;
}
