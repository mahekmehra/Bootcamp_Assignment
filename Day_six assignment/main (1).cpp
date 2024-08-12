#include<iostream>
#include<climits>
using namespace std;


double findAvg(int arr[],int size){
	double sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	double avg=sum/size;
	return avg;
}


int findSecSmallest(int arr[],int size){
	int min=INT_MAX,sec_min=INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	for(int i=0;i<size;i++){
		if(arr[i]<sec_min && arr[i]>min){
			sec_min=arr[i];
		}
	}
	return sec_min;
}

int main(){
    int n;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe average of array is: "<<findAvg(arr,n);
    cout<<"\nThe second minimum element in array is: "<<findSecSmallest(arr,n);
    return 0;
}