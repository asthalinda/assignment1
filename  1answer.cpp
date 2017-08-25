#include<iostream>
using namespace std;
int main()
{
int num1;
double a,b, multi;
char d;
float divide;
num1=4;
cout<< "num1="<<num1<<endl;
a=23.9;
b=43.98;
multi=a*b;
cout<< "multiply="<<multi<<endl;
divide=b/a;
cout<< "division="<<divide<<endl;
d='H';
cout<< "character="<<d<<endl;
bool even= false;
int num;
cout<< "enter no. for bool";
cin>>num;
if(num%2==0) even=true;
if(even==true)cout<<"even";
else
cout<<"odd";
return 0;
}


