#include <iostream>
using namespace std;


void wavePrint(char arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
 
void spiralPrint(char arr[][4],int row,int col){
    int lc=0;
    int rc=col-1;
    int ur=0;
    int br=row-1;
    while(ur<=br && lc<=rc){
        for(int i=lc;i<=rc;i++){
            cout<<arr[ur][i]<<" ";
        }
        ur++;
        
        for(int i=ur;i<=br;i++){
            cout<<arr[i][rc]<<" ";
        }
        rc--;
        
        for(int i=rc;i>=lc;i--){
            cout<<arr[br][i]<<" ";
        }
        br--;
        for(int i=br;i>=ur;i--){
            cout<<arr[i][lc]<<" ";
        }
        lc++;
        
    }
}

int main(){
    
    char arr[4][4]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    wavePrint(arr,4,4);
    spiralPrint(arr,4,4);

    return 0;
}