#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	int *p1=&a;
	int *p2=&b;
	int *p3=&c;
	cout<<"Enter number1:\n";
	cin>>*p1;
	cout<<"Enter number2:\n";
	cin>>*p2;
	cout<<"Enter number3:\n";
	cin>>*p3;
	int sum=*p1+ *p2 + *p3;
	cout<<"Number1:"<<*p1<<endl;
	cout<<"Number2:"<<*p2<<endl;
	cout<<"Number3:"<<*p3<<endl;
	cout<<"Sum:"<<sum<<endl;
	return 0;
}