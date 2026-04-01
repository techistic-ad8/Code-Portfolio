#include <iostream>
using namespace std;
int secondLargest(int arr[],int n){
    int largest = arr[0];
    int secondLargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = secondLargest(arr,n);
    if(result == -1){
        cout<<"There is no second largest element in the array."<<endl;
    }
    else{
        cout<<"The second largest element in the array is: "<<result<<endl;
    }
    return 0;
}