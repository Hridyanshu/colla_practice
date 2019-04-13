#include<iostream>
using namespace std;
class Calculator
{
	public:
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
double divide(double,double)
{
	double a,b,div;
	cout<<"Enter 2 Numbers"<<endl;
	cin>>a>>b;
	div=a/b;
	cout<<"Division is: "<<div<<endl;
}

