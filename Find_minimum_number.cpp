#include<iostream>
using namespace std;

// This Program To Fine Minimum Number In an Array....
int minimum_num(int arr[],int size){
    int mini=INT_MAX;
    
    for(int i=0;i<size;i++){

        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}
int main(){
    int arr[6]={23,15,-7,-56,35,1};
    int size=6;
    int minimum = minimum_num(arr,size);
    cout<< " Minimum Number In An Array Is :- "<<minimum<<endl;
    return 0;
}