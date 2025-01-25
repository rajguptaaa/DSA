#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }  
}
int main(){
    int a[]={2,34,5,6,7,89};
    bubbleSort(a,6);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}