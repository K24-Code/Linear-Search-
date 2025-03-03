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
    int arr[6] = {10, 20, 30, 50, 60, 90};
    int size = 6;
    int target = 50;

    int result = linearSearch(arr,size,target);
    if(result != 1){
        cout<<"Element found at "<< result <<endl;
    }
    else{
        cout<<"Element not found int he array "<<endl;
    }

    return 0;
}