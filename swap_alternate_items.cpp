#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// This Function Use To Swap Alternate Array Elements..for.eg :- input:-2,3 output:- 3,2

void swap_alternate(int arr[],int size){

    for(int i=0;i<size;i+=2){

      if(i+1<size){

          swap(arr[i],arr[i+1]);

      }
  }

}
int main(){

int arr[6]={2,1,4,3,6,5};
int size=6;
print(arr,size);
swap_alternate(arr,size);
print(arr,size);
  
    return 0;
}