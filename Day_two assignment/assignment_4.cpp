#include <iostream>
#include <cmath>
using namespace std;

//Assignment 4 (a function to return the sqrt/square of a number)


int squareRoot(int a){
    return sqrt(a);
}

int square(int a){
    return(a*a);
}

int main(){
    int num;
    cout<<"Enter a number: \n";
    cin>>num;
    cout<<"Square Root-> "<<squareRoot(num);
    int num2;
    cout<<"\nEnter a number2: ";
    cin>>num2;
    cout<<"Square-> "<< square(num2);
    return 0;
}