#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size of array: "<<endl;
	int arr[n];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Original array :";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x= n-1;
	cout<<"Updated array: ";
	for(int i=0; i<x; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}