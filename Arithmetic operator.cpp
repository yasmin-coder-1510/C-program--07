#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int num1,num2;

 cout<<"Enter two numbers :";
 cin>>num1 >>num2 ;

 int sum = num1+num2 ;
 cout<<"Sum = "<<sum <<endl ;

 int sub = num1-num2;
 cout<<"Substraction = "<<sub<<endl ;

 int mul = num1*num2 ;
 cout<<"Multiplication = "<<mul<<endl ;

 double div = (double)num1/num2 ;
 cout<<"Division = "<<div <<endl;

 int rem =num1%num2 ;
 cout<<"Remainder =  "<<rem<<endl ;

 getch();
}
