#include<iostream>
using namespace std;

bool findTarget(int arr[], int size, int target){
    //traverse the entire array
    for(int i=0; i<size; i++){
    int currentElement = arr[i];   //NOT AS SUCH REQUIRED JUST FOR UNDERSTANDING
    if(currentElement == target){  //IN PLACE OF IT WE CAN WRITE     if(arr[i] == target)
        return true;
    }
    }
    return false;
}


//USER INPUT METHOD TO SOLVE THE PROBLEM
int main(){
    int arr[50];
    int size;
    int target;
    cout<<"enter the number of elements: "<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
    cout<<"Enter the input values for index:  "<< i <<endl;
    cin>> arr[i];
    }
    cout<<"Enter the target value: "<<endl;
    cin>>target;

    bool ans= findTarget(arr,size,target);
    cout<<"Answer: "<<ans<<endl;

    return 0;
}