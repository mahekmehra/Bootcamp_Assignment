#include <iostream>
using namespace std;

//Assignment 3 (a function to add 3 numbers)

int sum(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}


int main(){
    int num1,num2,num3;
    cout<<"Enter number 1:\n";
    cin>>num1;
    cout<<"Enter number 2:\n";
    cin>>num2;
    cout<<"Enter number 3:\n";
    cin>>num3;
    cout<<"Sum-> "<<sum(num1,num2,num3);
    return 0;
}
