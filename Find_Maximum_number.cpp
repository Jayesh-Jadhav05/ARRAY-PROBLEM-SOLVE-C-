#include<iostream>
using namespace std;

// This Program To Fine Maximum Number In an Array....

int maximum_num(int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){

        if(maxi < arr[i]){

            maxi = arr[i]; 
        }
    }
   return maxi;

}
int main(){

    int arr[10]={32,43,65,876,435,443,234,544,213,1};
    int size=10;
    int h=maximum_num(arr,size);
    cout<< " maximum Number In An Array Is :- " << h<<endl;
    return 0;
}