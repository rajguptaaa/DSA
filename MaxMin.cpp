#include<iostream>
using namespace std;

int getMax(int num[],int n){
	int max=INT_MIN;
	for(int i=0; i<n; i++){
		if(max<num[i]){
			max=num[i];
		}
	}
	return max;
}
int getMin(int num[],int n){
	int min=INT_MAX;
	for(int i=0; i<n; i++){
		if(num[i]<min){
			min=num[i];
		}
	}
	return min;
}
int main(){
	int size;
	cin>>size;
	int arr[1000];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Maximum: "<<getMax(arr, size)<<endl;
	cout<<"Minimum: "<<getMin(arr, size)<<endl;
	return 0;
}