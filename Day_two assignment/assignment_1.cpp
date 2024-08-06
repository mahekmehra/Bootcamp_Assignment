#include <iostream>
using namespace std;

//Assignment 1 (check vowel or consonant)

char toLower(char c){
    if(c>='a' && c<='z'){
        return c;
    }
    else{
        char temp=c;
        c=temp-'A'+'a';
    }
    return c;
}

int main()
{
    char ch;
    cout<<"Enter a character:\n";
    cin>>ch;
    ch=toLower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    
    return 0;
}