#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// This Use Used To reverse an array elements.....

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){

int arr[6]={6,5,4,3,2,1};
int size=6;
print(arr,size);
reverse(arr,size);
print(arr,size);
    return 0;
}