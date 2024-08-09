#include <iostream>
using namespace std;


class Book{
    public:
    string title;
    string author;
    int year;
    
    Book(string name,string auth,int yr){
        title=name;
        author=auth;
        year=yr;
    }
    
    void Print(){
        cout<<"Book title->"<<title<<endl;
        cout<<"Book author->"<<author<<endl;
        cout<<"Book year->"<<year<<endl;
    }
    
};

int main(){
    
    Book b1("The silent patient","Alex Michaelides",2019);
    Book b2("AGGTM","Holly Jackson",2019);
    
    b1.Print();
    b2.Print();
    
}