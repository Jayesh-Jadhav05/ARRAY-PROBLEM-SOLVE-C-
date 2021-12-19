#include<iostream>
using namespace std;

// This program To Find Duplicate Numbers in array.....


void Duplicate_item(int arr[],int size){

        for(int i=0;i<size;i++){

            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                }
            }
        }
}
int main(){
    int arr[7]={23,24,27,2,1,2,24};
    int size=7;
    cout<<" The Duplicate Numbers In An array.... "<<endl;
    Duplicate_item(arr,size);

    return 0;
}