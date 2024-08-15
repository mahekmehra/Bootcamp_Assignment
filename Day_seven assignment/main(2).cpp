#include <iostream>
#include<climits>
using namespace std;


//Question 1:
bool isPresent(int arr[][3],int row,int col,int target){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if(arr[j][i]==target){
                return 1;
            }
        }
    }
    return 0;
}

//Question 2:
void calSum(int arr[][3],int row,int col){
    int sum=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
    }
    cout<<"sum of entire array:"<<sum<<endl;
}

//Question 3:
void calRowSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row-> "<<sum<<endl;
    }
}

//Question 4:
void calColSum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of "<<i+1<<" col-> "<<sum<<endl;
    }
}

//Question 5:
void minColSum(int arr[][3],int row,int col){
    int min=INT_MAX;
    int colIndex=-1;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        if(sum<min){
            min=sum;
            colIndex=i;
            
        }
    }
    cout<<"Minimun column sum-> "<<min<<endl;
    cout<<"Minimun column sum index-> "<<colIndex<<endl;
    
}


int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    if(isPresent(arr,4,3,66)){
        cout<<"Present\n";
    }
    else{
        cout<<"Not Present\n";
    }
    calSum(arr,4,3);
    calRowSum(arr,4,3);
    calColSum(arr,4,3);
    minColSum(arr,4,3);

    return 0;
}