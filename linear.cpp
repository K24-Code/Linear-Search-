#include<iostream>
using namespace std;

bool findTarget(int arr[], int size, int target){
    //traverse the entire array
    for(int i=0; i<size; i++){
    int currentElement = arr[i];
    if(currentElement == target){      //if(arr[i] == target)
        return true;
    }
    }
    return false;
}

int main(){
    int arr[5]= {10, 20, 30, 40, 50};
    int size=5;
    int target = 40;
    bool ans = findTarget(arr,size,target);
    cout<<"Ans : "<<ans<<endl;
}