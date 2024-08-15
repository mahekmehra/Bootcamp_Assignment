#include <bits/stdc++.h>
using namespace std;

//  Question 1

void Reverse(char string[],int size){
    int l=0;
    int h=size-1;
    while(l<=h){
        swap(string[l],string[h]);
        l++;
        h--;
    }
    cout<<string<<endl;
} 

//Question 2

int findLength(char string[]){
    int count=0;
    for(int i=0;string[i]!='\0';i++){
        count++;
    }
    return count;
}

//leetcode question

bool isValid(char c){
    c=tolower(c);
    if(c>='a'&& c<='z' || c>='0' && c<='9'){
        return 1;
    }
    else{
        return 0;
    }
}

bool isPalindrome(string s) {
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(isValid(s[st]) && isValid(s[e])){
            if(tolower(s[st])!=tolower(s[e])){
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        else{
            if(isValid(s[st])==0){
                st++;
            }
            else{
                e--;
            }
        }
    }
    return 1; 
}
    

int main()
{
    char s[100]={"Hello my name is mahek"};
    cout<<s;
    int len=findLength(s);
    cout<<"\nLength of string-> "<< len<<endl;
    cout<<"Reversed String-> ";
    Reverse(s,len);
    string str;
    getline(cin,str);
    if(isPalindrome(str)){
        cout<<"Valid Palindrome";
    }
    else{
        cout<<"Not Valid Palindrome";
    }
    return 0;
}