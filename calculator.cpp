#include<iostream>
using namespace std;
class Calculator
{
	public: //I am not able to understand this line
	double addition(double,double);
	double subtraction(double,double);
	double multiply(double,double);
	double divide(double,double);	
};
double addition(double,double)
{
	double a,b,add;
	cout<<"Enter 2 Numbers"<<endl;
	cin>>a>>b;
	add=a+b;
	cout<<"Addition is: "<<add<<endl;
}
double multiply(double,double)
{
	double h,j,mul;
	cout<<"Enter two no.s\n"<<endl;
	cin>>h>>j;
	mul=h*j;
	cout<<"Multiplication is : "<<mul<<endl;
}
