#include<iostream>
using namespace std;

// Q1 :- calculate the sum of given array Elements.......

int Array_sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){

        sum=sum+arr[i];        
    }
    return sum;
}
int main(){
    int arr[5]={32,54,65,66,34};
    int size=5;
    cout<< "The Sum Of the array is :- "<<Array_sum(arr,size)<<endl;

    return 0;
}