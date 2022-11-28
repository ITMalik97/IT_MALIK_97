#include <iostream>
using namespace std;
void cal(int , int);  // 1
void calc(int , int);  // 2
void calcu(int , int);  // 3
void calr(float , float);  // 4
int main()
{
	char it;
	cout<<"enter the operator = ";   // operator
	cin>>it;
	float a, b;
	cout<<"enter the operand"<<endl;   // operand
	cin>>a>>b;
	if(it == '+')
	cal(a , b);
	else if(it == '-')
	calc(a , b);
	else if(it == '*')
	calcu(a , b);
	else if(it == '/')
	calr(a , b);
}
void cal(int a, int b)  // function 1 sum
{
	int c = a + b;
	cout<<"the answer is = "<< c <<endl;
}
void calc(int a, int b)  // function 2 sub
{
	int c = a - b;
	cout<<"the answer is = "<<c<<endl;
}
void calcu(int a , int b)  // function 3 mul
{
	int c = a * b;
	cout<<"the answer = "<<c<<endl;
}
void calr(float a, float b)  // function 4 div
{
	float c = a / b;
	cout<<"the answer = "<<c<<endl;
}
