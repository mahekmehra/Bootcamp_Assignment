#include <iostream>
using namespace std;

//Assignment 2 (find largest among three)

int main(){
    int num1,num2,num3;
    cout<<"Enter number 1:\n";
    cin>>num1;
    cout<<"Enter number 2:\n";
    cin>>num2;
    cout<<"Enter number 3:\n";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is the largest\n";
    }
    else if(num2>num1 && num2>num3){
        cout<<num2<<" is the largest\n";
    }
    else{
        cout<<num3<<" is the largest\n";
    }
    return 0;
}