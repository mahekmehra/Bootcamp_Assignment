/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    while(true){
        int ans;
        cout<<"THE CALCULATOR\n";
        int num1,num2;
        cout<<"Enter number 1:\n";
        cin>>num1;
        cout<<"Enter number 2:\n";
        cin>>num2;
        char ch;
        cout<<"Enter the operation you want to perform(+,-,*,/,%)?:\n";
        cin>>ch;
        switch(ch){
            case '+':
                cout<<"Answer-> "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"Answer-> "<<num1-num2<<endl;
                break;
            case '*':
                cout<<"Answer-> "<<num1*num2<<endl;
                break;
            case '/':
                cout<<"Answer-> "<<num1/num2<<endl;
                break;
            case '%':
                cout<<"Answer-> "<<num1%num2<<endl;
                break;
            default:
                cout<<"Wrong input";
        }
        cout<<"Do you want to use the calculator again?\n(Press 0 for No, Press 1 for Yes):\n";
        cin>>ans;
        if(ans==0){
            cout<<"Thankyou, Bye!!";
            break;
        }
    }    
    return 0;
}