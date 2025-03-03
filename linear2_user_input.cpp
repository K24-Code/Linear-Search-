#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return 1;
}

int main(){
    int size;
    cout<<"Enter the size of array ";
    cin>>size;

    int arr[60];
    for(int i=0; i<size; i++){
        cout<<"Enter the input values for the index: "<< i << endl;
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter the target value: "<<endl;
    cin>>target;

    int result = linearSearch(arr,size,target);
    if(result != 1){
        cout<<"Element found at "<< result <<endl;
    }
    else{
        cout<<"Element not found int he array "<<endl;
    }

    return 0;
}